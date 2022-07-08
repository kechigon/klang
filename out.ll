; ModuleID = 'top'
source_filename = "top"

@0 = private unnamed_addr constant [14 x i8] c"Enter a value\00"
@1 = private unnamed_addr constant [8 x i8] c"Number:\00"
@2 = private unnamed_addr constant [13 x i8] c"Bigger than \00"
@3 = private unnamed_addr constant [14 x i8] c"Smaller than \00"
@4 = private unnamed_addr constant [9 x i8] c"Correct!\00"

declare i32 @printStr(i8*)

declare i32 @printDouble(double)

declare i32 @printNewLine()

declare i32 @scanDouble(double*)

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
