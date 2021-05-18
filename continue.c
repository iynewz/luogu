#include <stdio.h>
 
int main ()
{
   /* 局部变量定义 */
   int a = 10;

   /* do 循环执行 */
   do
   {
      if( a == 15)
      {
         /* 跳过迭代 */
         a = a + 1;
         continue;
      }
      printf("a 的值： %d\n", a);
      a++;
     
   }while( a < 20 );
 
   return 0;
}
/*
C 语言中的 continue 语句有点像 break 语句。但它不是强制终止，continue 会跳过当前循环中的代码，强迫开始下一次循环。

对于 for 循环，continue 语句执行后自增语句仍然会执行。对于 while 和 do...while 循环，continue 语句重新执行条件判断语句。
The other possible behavior that the programmer might want to have is for the execution arrow to jump back to the top of the loop. 
This behavior is accomplished with the continue; statement. 
Executing the continue statement jumps to the top of the innermost enclosing loop 
(if it is not in a loop, it is an error). 
In the case of a for loop, the “increment statement” in the for loop is executed immediately before the jump. 
This fact complicates the de-sugaring of a for loop into a while loop slightly relative to the explanation given above. 
If the for loop contains any continue statements, then the “increment statement” is written not only before the close curly brace of the loop, but also before any continue statements.
*/
