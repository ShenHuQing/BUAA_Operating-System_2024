#include <stdio.h> 
#include<string.h>              //strlen函数的头文件 
int main() 
{ 
    int j,i,n; 
    char a[999],b[999]; 
    scanf("%s",a);              //输入字符串 
    n=strlen(a);                //用strlen函数读取字符串长度（长度到\0停止） 
    for(i=0,j=n-1;i<n;i++,j--)  //循环将字符串a逆序赋值给b 
        b[j]=a[i];
    for(i=0;i<n;i++) 
    { 
        if(b[i]!=a[i]) 
		 break;                 //判断是否回文 
    } 
    if(i==n) printf("Y");     //如果从第1位到n都相同 则输出回文数 
    else printf("N"); 
    return 0; 
} 
