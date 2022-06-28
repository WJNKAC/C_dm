//int mainn ()
//{
    //字符类型
  ////  char ch ='a';
    //短整型
   // short num = 10;
    //long
    //long iong

    //单精度浮点型
    //float weight = 55.5;
    ////双精度浮点型
    // return 0; 
//}
#include <stdio.h>
int main ()
{
    printf("wjn\n");
    printf("kac\n");
    printf("%d\n",1057);//打印一个整数
    //sizeof 计算类型或变量所占空间大小
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short));
    //short节省空间
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(long long));
    //选择类型
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    return 0;
}