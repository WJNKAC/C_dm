#define _CRT_SECURE_NO_WARNINGS 1
//放在代码第一行
#include <stdio.h>
// //有一些量可变
// //有一些量不可变

// //全局变量 -   {}外部定义的
// int a = 100;

// int main()
// {
//     //类型 变量的名字//不推荐
//     //类型 变量的名字 = xx//推荐
   
//     //局部变量 -   {}内部定义的
//     int a =10;
//     //当全局变量与局部变量名字冲突时，局部优先
//     //不建议全局变量与局部变量名字冲突
//     int age = 18;
//     double weight = 55;
//     weight = weight - 500;

//     age = age + 1;
//     printf("%d\n",age);
//     printf("%lf\n",weight);
//     printf("%d",a);

//     return 0;
// }
// //%d整型
// //%f - float
// //%lf - double


//两数(整数)相加
//scanf函数是输入函数

int main()
{
    // int a = 0;
    // int b = 0;
    // int sum =0;
    // scanf("%d %d",&a,&b);
    // sum = a + b;
    // printf("sum = %d",sum);
    double q = 0;
    double w = 0;
    double e = 0;
    //scanf_s函数是VS编译器提供的，不是C语言标准规定的
    scanf ("%lf %lf",&q,&w);
    e = q + w;
    printf("和=%lf",e); 
    return 0;
}