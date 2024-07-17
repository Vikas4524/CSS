// #include<stdio.h>
// //function prototype
// int sum();

// int main(){
// int a;
// printf("Enter a : ");
// scanf("%d",&a);

// int b;
// printf("Enter b : ");
// scanf("%d",&b);

// int s = sum(a,b);
//  printf("%d",s);
//     return 0;

// }
// int sum( int a, int b){
//     return a+b;
// }

// #include<stdio.h>
// //function prototype;
// void printTable(int n);
// int main(){
// int n;
// printf("Enter n: ");
// scanf("%d",&n);

// printTable(n);
//     return 0;

// }
// void printTable(int n){

//     for(int i=1;i<=10;i++){
//         printf("%d \n",n*i);
        
//     }
// }


// #include<stdio.h>
// //function prototype;
// void calculatePrise(float value);
// int main(){
//     float value;
// printf("Enter value :");
// scanf("%f",&value);


// calculatePrise(value);

//     return 0;

// }
// void calculatePrise(float value){
// value = value + (0.18*value);
// printf("Total prise :%f",value);
// }



// #include<stdio.h>
// #include<math.h>

// //function prototype;
// void calculatePrise(float value);
// int main(){
//     float value;
// printf("Enter value :");
// scanf("%f",&value);


// calculatePrise(value);

//     return 0;

// }
// void calculatePrise(float value){
// value = pow(value,2);
// printf("squer:%f",value);
// }
                                         //  RECURSION
      


#include<stdio.h>


// //function prototype;
// void printHW(int count);

// int main(){

//     printHW(3);

//     return 0;

// }
// void printHW(int count){  
// if(count==0){
//     return;
// }
// printf("Hallo world \n");
// printHW(count-1);

// }



// #include<stdio.h>

// //function prototype;
// int sum(int n);

// int main(){

 
//  printf("%d",sum(5));

//     return 0;
// }
// int sum(int n){
//     if(n==1){
//     return 1;
//  }

// int sumNm1 = sum(n-1);
// int sumN = sumNm1+n;
// return sumN;
// }




// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// //Complete the following function.

// int find_nth_term(int n, int a, int b, int c) {
//   //Write your code here.

//   int temp;
//   if(n==1){
//       return a;
//   }if(n==2){
//       return b;
//   }if(n==3){
//       return c;
//   }else{
      
//       for(int i=4;i<=n;i++){
//   temp=a+b+c;
//   a=b;
//   b=c;
//   c=temp;

// }
// return temp;
// }

// int main() {
//     int n, a, b, c;
  
//     scanf("%d %d %d %d", &n, &a, &b, &c);
//     int ans = find_nth_term(n, a, b, c);
 
//     printf("%d", ans); 
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// //Complete the following function.

// int marks_summation(int* marks, int number_of_students, char gender) {


//   //Write your code here.

//   char boy='b';
//   char girl='g';
//   int sum=0;

// if(gender=='g'){
// for(int marks=1;marks<=number_of_students;marks+2){
// sum=sum+marks;
// } 
// }else{
//     for(int marks=0;marks<=number_of_students;marks+2){
//         sum=sum+marks;
//     }
// }





// }
// int main() {
//     int number_of_students;
//     char gender;
//     int sum;
  
//     scanf("%d", &number_of_students);
//     int *marks = (int *) malloc(number_of_students * sizeof (int));
 
//     for (int student = 0; student < number_of_students; student++) {
//         scanf("%d", (marks + student));
//     }
    
//     scanf(" %c", &gender);
//     sum = marks_summation(marks, number_of_students, gender);
//     printf("%d", sum);
//     free(marks);
 
//     return 0;
// }

// #include <stdio.h>
// int main() {
// int array[]={3,2,5};
//  char gender;
//  int sum=0;
 
//  scanf("%c",&gender);
// int student=sizeof(array)/sizeof(array[0]);

// for(int marks=(gender=='g'?0:gender=='b'?1:-1);marks<student;marks+=2){
// sum=sum+array[marks];
// } 

// printf("sum %d",sum);


// return 0;
// }

