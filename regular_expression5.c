//Negation of character classes [^aeiou]
#include<stdio.h>
int main(){
    int i=0,count=-1,true=0;
    char x[20];
    printf("Enter a string:");
    fgets(x,20,stdin);
    while(x[i]!='\0'){
        count++;
        i++;
    }
    for(int j=0;j<count-1;j++){
        if((x[j]=='a' || x[j]=='e' ||x[j]=='i' || x[j]=='o' || x[j]=='u') || (x[j]=='A' || x[j]=='E' || x[j]=='I' || x[j]=='O' || x[j]=='U')){
            true=1;
            break;
        }
        else{
            true=0;
        }
    }
    if(true==0){
        printf("valid\n");
    }
    else{
        printf("invalid\n");
    }
    getch();
}
