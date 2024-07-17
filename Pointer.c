// #include<stdio.h>

// int main(){

//  int age = 33;
// int *ptr = &age;
// // int Age = *ptr;

// printf("%d\n",*ptr);

                                 //address
// printf("%p\n",&age);
// printf("%p\n",ptr);
// printf("%p\n",&ptr);

                                    //unsigned int
// printf("%u\n",&age);
// printf("%u\n",ptr);
// printf("%u\n",&ptr);

                                    //value
// printf("%d\n",age);
// printf("%d\n",*ptr);
// printf("%d\n",*(&age));
                                 

                                 //HW

// int x;
// //int *ptr = &x;
//  int *ptr;
//  ptr=&x;
// *ptr=0;
// printf("x=%d\n",x); //0
// printf("*ptr=%d\n",*ptr); //0

// *ptr+=5;
// printf("x=%d\n",x);//5
// printf("*ptr=%d\n",*ptr); //5   

// (*ptr)++;
// printf("x=%d\n",x);//6
// printf("*ptr=%d\n",*ptr); //6   

                                  //pointer to pointer

//          float price = 100.00;
//          float *ptr=&price; 
//           //ptr=&price;
//          float **pptr=&ptr;

//  printf("%p\n",&ptr);

//
//   int i;
//   int *ptr;
//  ptr=&i;
//  int **pptr;
// pptr=&ptr;
//  **pptr=5;

//  printf("i=%d\n",i);
//  printf("*ptr=%d\n",*ptr);
//  printf("**pptr=%d\n",**pptr);




//   return 0; 

// }



                            /*pointer to calling funcle
                            first (call by value)
                            sacend (call by Reference)
*/



// #include<stdio.h>
// void number(int n);
// void Number(int *n);
// int main(){
// int n=4;
//  number(4);
// printf("number= %d \n",n);


// Number(&n);
// printf("Number=%d",n);

//   return 0;
// }

// void number(int n){
// n=n*n;
// printf("n : %d\n",n);

// }

 //(call by Reference)
// void Number(int *n){
// *n=(*n) * (*n);

// printf("*n= %d\n",*n);
// } 
                               
                              // SWAP A & B


// #include<stdio.h>
// void swap(int a,int b);
// void Swap(int *a, int *b);
// int main(){
//   int x=4,y=5;

// swap(4,5);
// printf("x=%d & y=%d\n",x,y);


// Swap(&x,&y);
// printf("x=%d & y=%d\n",x,y);

//  return 0;
// }
// //call by value

// void swap(int a,int b){
// int t=a;
// a=b;
// b=t;
// printf("a=%d & b=%d\n",a,b);

// }

// // (call by Reference)
// void Swap(int *a, int *b){
// int t=*a;
// *a=*b;
// *b=t;
// printf("a=%d & b=%d\n",*a,*b);
// }

// #include<stdio.h>
// void printAddress(int *n);
// int main(){
// int n=4;
//  printAddress(&n);
// printf("Address of n =%p\n",s);


//   return 0;
// }
// void printAddress(int *n){


//    printf("Address of N = %p\n",n);
// }


// #include<stdio.h>
// int  calculate_s_P_A (int a,int b);
// int main(){
// int s = calculate_s_P_A (5,5);

// printf("Sum = %d\n",s);
//   return 0;
// }
// int calculate_s_P_A (int a,int b){

// return a*b;
// // printf("Sum = %d\n",a+b);
// // printf("product = %d\n",a*b);
// // printf("Average = %d\n",(a+b)/2);

// }





// #include<stdio.h>
// void doWork(int a ,int b ,int*sum ,int *prod ,int *avg);
// int main(){
// int sum, prod , avg;
// doWork(3,5,&sum,&prod,&avg);
// printf("sum = %d, prod= %d, avg= %d",sum,prod,avg);


//   return 0;
// }
// void doWork(int a ,int b,int *sum,int *prod,int *avg){
// *sum=a+b;
// *prod=a*b;
// *avg=(a+b)/2;

// }

//                                        //HOMEWORK 
// #include<stdio.h>

// int main(){
//   printf(" Find Maximum  numbers between two number using a pointer:");
// int x,y;
// int *ptr=&x;
// printf("Enter number x :");
// scanf("%d",&(*ptr));
// int *PTR=&y;

// printf("Enter number y :");
// scanf("%d",&(*PTR));

// if(*ptr>*PTR){
// printf("x is Maximum");

// }
// else{
// printf("Y is Maximum");
// }

//   return 0;
// }

  


// #include<stdio.h>

// int main(){
//  int Array[5];
//  int i;
//  printf("Enter The Element\n");
// for(i=0;i<5;i++){
// printf("Array[%d]:",i);
//  scanf("%d",&Array[i]);
// }
//  printf("Enter The Element Revers Oder\n");
// for(i=4;i>=0;i--){
// printf("Array[%d]:",i);
// printf("%d\n",Array[i]);
// }


//   return 0;
// }



//  #include<stdio.h>
//  int main(){
// char t;
// char i;

// for( i='A';i<='Z';i++){
  
//   char *t=&i;
//   printf("%c\n",*t);
// }

//   return 0;
//  }

 #include<stdio.h>
 #include<string.h>
 int main(){
char oldstr[]="vikas";
char newstr[]="Nirmal";
strcpy(newstr,oldstr);
printf("%c",strcpy);
  return 0;

  
 }