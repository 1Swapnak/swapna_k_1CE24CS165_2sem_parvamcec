#include<stdio.h>
int main(){
    char a,b,temp;
    printf("enter the value for a and b:");
    scanf("%c %c",&a,&b);
   // printf("enter the value for b:");
    //scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("the values after swaping:%c %c",a,b);

}