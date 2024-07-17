
// #include<stdio.h>
// float convertTemp(float celsius);
// int main(){

// convertTemp(37);

//     return 0;
// }
// float convertTemp(float celsius){
// float far = celsius * (9.0/5.0) +32;
// printf("%f",far);

// }


// #include<stdio.h>
// float calculatePer(float M, float Sci, float San); 

// int main(){
//  float M =98;
// float Sci=95;
// float San=99;
// calculatePer(M,Sci,San);
//     return 0;
// }
// float calculatePer(float M, float Sci, float San){
// float per = (M+Sci+San)/3;
// printf(" %f",per);

// }

// #include<stdio.h>
// int fib(int n);

// int main(){
//  printf("fin of %d",fib(8));
//     return 0;
// }

// int fib(int n){
//     if (n==0){
//     return 0;
// }
// if (n==1){
//     return 1;
// }
// int fibNm1=fib(n-1);
// int fibNm2 =fib(n-2);          

// int fibN=fibNm1+fibNm2;
// //printf("fin %d n %d\n",n,fibN);

// return fibN;

// }

// #include<stdio.h>
// int Temprature(int n);
// int main(){
// int n;
// printf("Enter n");
// scanf("%d",&n);
// Temprature(n);


//     return 0;
// }
// int Temprature(int n){
// if(n>0){
//     printf("hot");
// }else{
//     printf("cold");
// }
// }


// #include<stdio.h>

// //function prototype;
// int power(int N, int P );

// int main(){

 
//  printf("%d",power(2,6));

//     return 0;
// }
// int power(int N, int P ){
//     if(P==1){
//     return N;
//  }

// int sumNm1 = power(N,P-1);
// int sumN = sumNm1*N;
// return sumN;
// }


#include<stdio.h>
int main(){

 /*This is a first stape;*/
//  int age=21;
//  char star='#';
//   float Real=2.1;

//  printf("my age : %d\n",age);
//  printf("This is a star : %c\n",star);
//  printf("This is a Real : %f\n",Real);

 int age;
 
 scanf("%d",&age);
 printf("This is a my age : %d",age);
 
    return 0;
}
