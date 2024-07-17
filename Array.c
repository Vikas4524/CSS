// #include<stdio.h>
// int main(){
// int marks[3];
// printf("Enter Math:");
// scanf("%d",&marks[0]);

// printf("Enter Cham:");
// scanf("%d",&marks[1]);

// printf("Enter Phy:");
// scanf("%d",&marks[2]);

// printf("Math:%d, cham:%d, Phy:%d",marks[0],marks[1],marks[2]);
//     return 0;
// }




// #include<stdio.h>

// int main(){
// float price1;
// float price2;
// float price3;
// printf("Enter price1: ");
// scanf("%f",&price1);

// printf("Enter price2: ");
// scanf("%f",&price2);

// printf("Enter price3: ");
// scanf("%f",&price3);

// printf("Total price1:%f\n Total price2:%f\n Total price3:%f\n",price1+(0.18*price1),price2+(0.18*price2), price3+(0.18*price3));



// float price[3];
// printf("Enter price1: ");
// scanf("%f",&price[0]);

// printf("Enter price2: ");
// scanf("%f",&price[1]);

// printf("Enter price3: ");
// scanf("%f",&price[2]);

// printf("Total price1:%f\n Total price2:%f\n Total price3:%f\n",price[0]+(price[0]*0.18),price[1]+(price[1]*0.18),price[2]+(price[2]*18));
//     return 0;
// }

                                   //POINTER ARITHMETIC              
             //Pointer can be Incremented & Decremented
             // ptr++
             //ptr--

// #include<stdio.h>
// int main(){
//    // CASE1
//    int age=22;
//    int *ptr=&age;
//   printf("%u\n",ptr);
//    ptr++;
//    printf("%u\n",ptr);

   //CASE2
//    float Price = 100.00;
//    float *ptr=&Price;
// printf("%u\n",ptr);
// ptr++;
// printf("%u\n",ptr);
// ptr--;
// printf("%u\n",ptr);



   //CASE3
// char   star= '*';
//    char *ptr=&star;
// printf("%u\n",ptr);
// ptr++;
// printf("%u\n",ptr);
// ptr--;
// printf("%u\n",ptr);


 
   //   return 0;
//  }


                                   //POINTER ARITHMETIC              
             //Pointer can be Incremented & Decremented
             // 2Pointer Difference & 2Pointer Difference The Same data type;
             // 2Pointer Comperison  & 2Pointer Comperison The Same data type; 

//  #include<stdio.h>
// int main(){
// int age =33;
// int _age=55;
// int *ptr=&age;
// int *_ptr=&_age; 

// printf("Difference %d\n",ptr-_ptr);
// printf("Comperison %d\n",ptr==_ptr);
// _ptr=&age;
// printf("Comperison %d\n",ptr==_ptr);
   
   
//     return 0;
// }

//                   // Arays as pointers Argument

//  #include<stdio.h>
// int main(){
// char aadhar[6];
// // int *ptr=&aadhar[0];
// // int i;
// //input
// for(char i=0;i<5;i++){
// // printf("%d Aadhar: ",i);
// scanf("%c",&aadhar[i]);
// // scanf("%d",(ptr+i));

// }
// //Output

// for(char i=0;i<5;i++){
// printf("%cAadhar: %c\n",i,aadhar[i]);
// // printf("%d Aadhar: %d\n",i,*(ptr+i));

// }
// // aadhar[i]='\0';
// // puts(aadhar);

//     return 0;
// }


                  // Arays as function Argument

//  #include<stdio.h>
//  //void printNumbers(int arr[],int n);
//  void printNumbers(int *arr,int n);
// int main(){
//    int arr[]={1,34,2,3,5};
//   printNumbers( arr, 5);
   
//     return 0;
// }
//  //void printNumbers(int arr[],int n){
//  void printNumbers(int *arr,int n){

// for(int i=0;i<5;i++){
// printf("%d Array: %d\t",i,arr[i]);

// }



    // Array size calculate

// #include<stdio.h>
// int main(){
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int length;
    // length=sizeof(a)/sizeof(a[0]);
    // printf("%d",length);
    //  length=*(&a+1)-a;
    //  printf("%d",length);
    
// }

 
                       //MULTIDIMENSIONAL ARRAYS
                       //2D ARRAY



 #include<stdio.h>

int main(){
   int Marks[2][3]={{2,23,40},{3,8,45}};
   // //first Student Marks
   // Marks[0][0]=2;
   // Marks[0][1]=23;
   // Marks[0][2]=40;

   // //scound Student Marks
   //  Marks[1][0]=3;
   // Marks[1][1]=8;
   // Marks[1][2]=45;
int length,width,height;

for(int i=0;i<2;i++){
   for(int j=0;j<3;j++){
if(i==0&&j==0||i==2&&j==0){
   length=Marks[i][j];
   }else if(i==0&&j==1||i==2&&j==1){
      width=Marks[i][j];
   }else if(i==0&&j==2||i==2&&j==2){
   height=Marks[i][j];
   }
   }

if(height<46){
   printf(" %d",length);
}else{
   printf("%d",0);
}

}




    return 0;
}
 


                  //Array HW
            //Write a program to print 1 to 50 bitween odd Number;

//  #include<stdio.h>
// int main(){
//    int i;
//   int count=0;
// for( i=1;i<=50;i++){
// if(i%2==0){
//    count++;
// }
// }
// printf("%d",count);



//     return 0;
// }
                                        
                                                                                                           

                          
// #include<stdio.h>
// int main(){

//  return 0;  
// }

                       //COUNT NUMBER OF ODD USING OF ARRAY;

// #include<stdio.h>
// int CountOdd(int arr[],int n);
// int main(){
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
   
//    printf("Number of odd:%d\n",CountOdd(arr,50));

//  return 0;  
// }
// int CountOdd(int arr[],int n){
//       int count=0;
//    for(int i=0;i<n;i++){
//       //  if(i%2!=0){//odd
//       if(arr[i]%2==0){//even
//       count++;
//          printf("odd%d\n",arr[i]);
//        }
       
//    }
// return count;

// }


// #include<stdio.h>
// int main(){
//    int arr[5]={1,3,2,45,5};

//     printf("%d\n",*(arr+3));
//     printf("%d\n",arr[2]);
//     printf("%d\n",*(arr+5));

//  return 0;  
// }

                       //IMP QUESTION
                    //  Write a function to reverse an array

// #include<stdio.h>
//  void ReverseArray(int arr[], int n);
//  void printArray(int arr[], int n);
// int main(){
// int arr[]={1,2,3,4,5,6,7,8,9,10};
// //  ReverseArray(arr,10);
// printArray( arr, 5);

//  return 0;  
// }

// void ReverseArray(int arr[], int n){
// for(int i=0;i<n/2;i++){
// int firstVal=arr[i];               
// int ScoundVal=arr[n-i-1];
// arr[i]=ScoundVal;
// arr[n-i-1]=firstVal;
// }
// for(int i=0;i<n;i++){
// printf("%d\t",arr[i]);
// }
// }

// void printArray(int arr[], int n){
// for(int i=0;i<n;i++){
// printf("%d\t",arr[i]);
// }
// }




         //PRINT THE FIBONACHI NUMBER; Array usingLOOP   &   RECURSURE


// #include<stdio.h>
// int main(){
//  int N;
//  printf("Enter N:");
//  scanf("%d",&N);

// int fid[N];
//  fid[0]=0;
//  fid[1]=1;
// printf("%d %d",fid[0],fid[1]);

//  for(int i=2;i<N;i++){
 
// fid[i]=fid[i-1]+fid[i-2];
// printf(" %d ",fid[i]);
//  }

//  return 0;
//  }



// #include<stdio.h>
// void storetable(int tables[][10],int n ,int m,int Number);
// int main(){
// int tables[2][10];
//  storetable(tables,0,10,5);
//  storetable(tables,1,10,3);

//  for(int i=0;i<10;i++){
//    printf("%d   ",tables[0][i]);
//  }
//  printf("\n");
//  for(int i=0;i<10;i++){
//    printf("%d   ",tables[1][i]);
//  }
//  return 0;  
// }
// void storetable(int tables[][10],int n,int m,int Number){
// for(int i=0;i<m;i++){
// tables[n][i]=Number * (i+1);

// }

// }


             //print the Table 2D array and simple array;



// #include<stdio.h>

// int main(){
// // int table[2][10];

// // for(int i=0;i<10;i++){
// // table[0][i]=2*(i+1);
// // printf("%d\t",table[0][i]);

// // }
// // printf("\n");
// //  for(int i=0;i<10;i++){
// // table[1][i]=3*(i+1);
// // printf("%d\t",table[1][i]);

// // }

// int table[10];
// for(int i=0;i<10;i++){
//    table[i]=2*(i+1);
//    printf("%d\t",table[i]);
// }

//  return 0;  
// }



           //Find how many time does a number'x' in array; 

//  #include<stdio.h>


// int main(){
// int arr[10]={1,1,1,2,23,23,4,4,4,87};
// int n;
// printf("Enter n");
// scanf("%d",&n);
//   int count=0;
// for(int i=0;i<10;i++){

// if(arr[i]==n){
//    count++;
// }

// }


// printf("%d Time",count);
//  return 0;  
// }


// #include<stdio.h>
// int main(){
//   int arr[7]={9,3,3,5,00,8,2};
   
//   //int y;
  
//  for (int i = 1; i < 7; i++) {
    
//     if (arr[0]< arr[i]) {
//       arr[0]= arr[i];
//     }
//   }

//   printf("Largest element = %d",arr[0]);

//  return 0;  
// }
