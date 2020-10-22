; ModuleID = 'top'
source_filename = "top"

declare i32 @printInt(i32)

declare i32 @printStr(i8*)

declare i32 @printDouble(double)

declare i32 @printNewLine()

declare i32 @scanInt(i32*)

declare i32 @scanDouble(double*)

define i32 @main() {
entrypoint:
  %a = alloca double
  %0 = call i32 @scanDouble(double* %a)
  %1 = call i32 @printDouble(double 2.200000e+00)
  ret i32 0
}
