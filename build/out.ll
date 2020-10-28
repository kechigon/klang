; ModuleID = 'top'
source_filename = "top"

declare i32 @printStr(i8*)

declare i32 @printDouble(double)

declare i32 @printNewLine()

declare i32 @scanDouble(double*)

define i32 @main() {
entrypoint:
  %d = alloca double
  %0 = call i32 @scanDouble(double* %d)
  %1 = load double, double* %d
  %2 = call i32 @printDouble(double %1)
  ret i32 0
}
