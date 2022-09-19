/**
 * 符号常量
 * */

#include <stdio.h>

//::::符号常量

#define LOWER 0
#define UPPER 300  //::::后面没有分号
#define STEP 20
/* lower limit of table */ /* upper limit */
/* step size */
/* print Fahrenheit-Celsius table */
int main() {
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        /**************************
        *::::
         * %d
         * %3d
         * %6.2d  6个字符宽，小数点2为有效数字
        **************************/
        //   printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
        printf("%3d %5.3f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}

