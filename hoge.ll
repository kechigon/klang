; ModuleID = 'llvm-link'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@0 = private unnamed_addr constant [14 x i8] c"Enter a value\00"
@1 = private unnamed_addr constant [8 x i8] c"Number:\00"
@2 = private unnamed_addr constant [13 x i8] c"Bigger than \00"
@3 = private unnamed_addr constant [14 x i8] c"Smaller than \00"
@4 = private unnamed_addr constant [9 x i8] c"Correct!\00"
@.str = private unnamed_addr constant [3 x i8] c"%g\00", align 1
@.str.5 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1
@.str.8 = private unnamed_addr constant [3 x i8] c"%s\00", align 1
@.str.11 = private unnamed_addr constant [4 x i8] c"%lf\00", align 1

define i32 @main() {
entrypoint:
  %0 = alloca double
  store double 4.200000e+01, double* %0
  %1 = alloca double
  store double 0.000000e+00, double* %1
  br label %while_cond0

while_cond0:                                      ; preds = %if_marge2, %entrypoint
  %2 = load double, double* %1
  %3 = fcmp oeq double %2, 0.000000e+00
  br i1 %3, label %while_then0, label %while_marge0

while_then0:                                      ; preds = %while_cond0
  %4 = alloca double
  %5 = call i32 @printNewLine()
  %6 = call i32 @printStr(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @0, i32 0, i32 0))
  %7 = call i32 @printNewLine()
  %8 = call i32 @printStr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @1, i32 0, i32 0))
  %9 = call i32 @scanDouble(double* %4)
  %10 = load double, double* %4
  %11 = load double, double* %0
  %12 = fcmp olt double %10, %11
  br i1 %12, label %if_then0, label %if_marge0

if_then0:                                         ; preds = %while_then0
  %13 = call i32 @printStr(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @2, i32 0, i32 0))
  %14 = load double, double* %4
  %15 = call i32 @printDouble(double %14)
  %16 = call i32 @printNewLine()
  br label %if_marge0

if_marge0:                                        ; preds = %if_then0, %while_then0
  %17 = load double, double* %4
  %18 = load double, double* %0
  %19 = fcmp ogt double %17, %18
  br i1 %19, label %if_then1, label %if_marge1

if_then1:                                         ; preds = %if_marge0
  %20 = call i32 @printStr(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @3, i32 0, i32 0))
  %21 = load double, double* %4
  %22 = call i32 @printDouble(double %21)
  %23 = call i32 @printNewLine()
  br label %if_marge1

if_marge1:                                        ; preds = %if_then1, %if_marge0
  %24 = load double, double* %4
  %25 = load double, double* %0
  %26 = fcmp oeq double %24, %25
  br i1 %26, label %if_then2, label %if_marge2

if_then2:                                         ; preds = %if_marge1
  store double 1.000000e+00, double* %1
  br label %if_marge2

if_marge2:                                        ; preds = %if_then2, %if_marge1
  br label %while_cond0

while_marge0:                                     ; preds = %while_cond0
  %27 = call i32 @printNewLine()
  %28 = call i32 @printStr(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @4, i32 0, i32 0))
  %29 = call i32 @printNewLine()
  ret i32 0
}

; Function Attrs: nounwind uwtable
define i32 @printDouble(double %0) #0 {
  %2 = tail call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), double %0)
  ret i32 %2
}

; Function Attrs: nounwind
declare i32 @printf(i8* nocapture readonly, ...) local_unnamed_addr #1

; Function Attrs: nounwind uwtable
define i32 @printNewLine() #0 {
  %1 = tail call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.5, i64 0, i64 0))
  ret i32 %1
}

; Function Attrs: nounwind uwtable
define i32 @printStr(i8* %0) #0 {
  %2 = tail call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.8, i64 0, i64 0), i8* %0)
  ret i32 %2
}

; Function Attrs: nounwind uwtable
define i32 @scanDouble(double* %0) #0 {
  %2 = tail call i32 (i8*, ...) @__isoc99_scanf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.11, i64 0, i64 0), double* %0)
  ret i32 %2
}

; Function Attrs: nounwind
declare i32 @__isoc99_scanf(i8* nocapture readonly, ...) local_unnamed_addr #1

attributes #0 = { nounwind uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0, !0, !0, !0}
!llvm.module.flags = !{!1}

!0 = !{!"clang version 6.0.0-1ubuntu2 (tags/RELEASE_600/final)"}
!1 = !{i32 1, !"wchar_size", i32 4}
