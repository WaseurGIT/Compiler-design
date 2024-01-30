//Character classes [a-m]*
#include<stdio.h>
int main(){
    char x[20];
    int i,true=1;
    printf("Enter a string:");
    gets(x);
    for(i=0;x[i]!='\0';i++){
        if(!(x[i]>=97 && x[i]<=109)){
            true=0;
            break;
        }
    }
    if(true==1){
        printf("valid\n");
    }
    else{
        printf("invalid");
    }
    getch();
}
