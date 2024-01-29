//Once or not at all 'a(bc)?de'
#include<stdio.h>
#include<stdbool.h>
bool re3(char a[]){
    int i=0;
    if(a[i]!='a'){
        return false;
    }
    i++;
    if(a[i]=='b'){
        i++;
        if(a[i]!='c'){
            return false;
        }
        i++;
    }
    if(a[i]!='d'){
        return false;
    }
    i++;
    if(a[i]!='e'){
        return false;
    }
    i++;
    if(a[i]!='\0' && a[i]!='\n'){
        return false;
    }
    return true;
}
int main(){
    char a[20];
    int i,test;
    printf("Enter a string:");
    fgets(a,20,stdin);
    test=re3(a);
    if(test==true){
        printf("valid");
    }
    else{
        printf("invalid");
    }
    getch();
}
