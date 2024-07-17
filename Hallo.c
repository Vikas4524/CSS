#include<stdio.h>
int main(){


int a;

for(int m=1;m<=100;m++){
   a=0;
for(int j=2;j<=m/2;j++){
     
        if(m%j==0){
        a=1;
        break;


        }
}   
    

        if (a==0){
             printf(" %d ",m);
        }
        
}
printf("Thanks");
    return 0;
}
