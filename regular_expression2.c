//a(bc)+de(+ means One or more)
#include<stdio.h>
#include<stdbool.h>
bool re2(char a[],int len){
    if(len<5 || a[0]!='a' || a[1]!='b' || a[2]!='c' || a[len-1]!='e' || a[len-2]!='d'){
        return false;
    }
    return true;
}
int main(){
    char a[20];
    int i=0,count=0,test;
    printf("Enter a string:");
    fgets(a,20,stdin);
    while(a[i]!='\0' && a[i]!='\n'){
        count++;
        i++;
    }
    test=re2(a,count);
    if(test==true){
        printf("valid");
    }
    else{
        printf("invalid");
    }
    getch();
}
