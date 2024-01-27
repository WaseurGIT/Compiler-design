//The code is for this regular expression: a(bc)*de
#include<stdio.h>
#include<stdbool.h>
bool re1(char a[],int len){
    int i;
    if(len<3 || a[0]!='a' || a[len-1]!='e' || a[len-2]!='d'){
        return false;
    }
    for(i=1;i<len-2;i+=2){
        if(a[i]!='b' || a[i+1]!='c'){
            return false;
        }
    }
    return true;
}
int main(){
    char a[20];
    int i=0,test,count=0;
    printf("Enter a string:");
    fgets(a,20,stdin);
    while(a[i]!='\0' && a[i]!='\n'){
        count++;
        i++;
    }
    test=re1(a,count);
    if(test==true){
        printf("valid\n");
    }
    else{
        printf("invalid\n");
    }
    getch();
}
