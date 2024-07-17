#include<stdio.h>
int main(){
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
printf("sum of all facter %d",b);
// if(a==0){
// printf("This is %d prime number",n);

// }else{
// printf("This is %d  Not prime number",n);
 
// }
    return 0;
}