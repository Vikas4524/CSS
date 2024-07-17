#include<stdio.h>
int main(){
//    int a=1; 
//    int n;
//    printf("Enter velue of n :");
//    scanf("%d",&n);
// for(int i=n;i>=1;i--){
//       a=a+i;
    
// }
// printf("sum is %d",a);



int n;
printf("Enter n");
scanf("%d",&n);
int i=n/2;
// int a=0;
int b=0;
for(int k=1;k<=i;k++){
    
    if(n%k==0){
        //a=1;
        b=b+k;
        printf("facter of%d: %d \n",n,k);
    }


}   
    printf("sum of all facter %d \n",b);
if(b==n){
printf("perfect Number ");
}else{
printf("not perfect Number");
}

    return 0;
}