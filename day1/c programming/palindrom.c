#include<stdio.h>
int main(){
    int num,org=0,rev=0,digit=0;
    printf("enter the number:");
    scanf("%d",&num);
    org=num;
    while(num!=0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(org==rev){
        printf("the given word is palindrom");
    }
    else{
        printf("the given word is not palindrom");
    }
    return 0;
}
