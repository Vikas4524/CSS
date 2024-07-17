// #include <stdio.h>
// int main()
// {
//     // char str[20];
//     //      scanf("%s",str);
// // //    gets(str);
// // //    printf("%s", str);
// // fgets(str,20,stdin);
// // puts(str);

// char str[10];
// scanf("%[^\n]%*c",str);
// // scanf("%[^\n]s",str);
// puts(str);
// char ch;
// char s[100];
// char str[100];
 
//  scanf("%c",&ch);
//  scanf("%s",s);
// scanf("%[^\n]%*c",str);

// printf("%c\n",ch);
// printf("%s\n",s);
// printf("%s\n",str);

// int a=3;
// int b=4;
// int c=6;
// int d=5;
// // a>b ? printf("%d",a) : printf("%d",b);

// if(a>b && a>c && a>d){
//    printf("%d",a);
// }else if (b>a && b>c && b>d){
//    printf("%d",b);
// }else if(c>a && c>b && c>d){
//    printf("%d",c);
// }
// else if(d>a && d>b && d>c){
//    printf("%d",d);
// }

   




//    return 0;
// }

// #include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
// int max_of_four(int a, int b, int c, int d);

// int main() {
    // int a, b, c, d;
    // scanf("%d %d %d %d", &a, &b, &c, &d);
    // int ans = max_of_four(a, b, c, d);
    // printf("%d", ans);




//     return 0;
// }

// int max_of_four(int a, int b, int c, int d){
    
//     if(a>b && a>c && a>d){
//    return a;
   
// }else if (b>a && b>c && b>d){

//    return b;
   
// }else if(c>a && c>b && c>d){
//    return c;
   
// }
// else if(d>a && d>b && d>c){
//    return d;
// }

// }


// #include<stdio.h>
// int main(){


// int n,k;
// scanf("%d",&n);
// scanf("%d",&k);

//  int Mix_AND,Mix_OR,Mix_XOR;
//   Mix_AND=0;
//   Mix_OR=0;
//   Mix_XOR=0;
  
//   for(int a=1;a<=n;a++){
//       for(int b=a+1;b<=n;b++){
//           int AND=a&b;
//           int OR=a|b;
//           int XOR=a^b;
//           if(AND > Mix_AND && AND < k){
//               Mix_AND = AND;
//           }if(OR > Mix_OR && OR < k) {
//                   Mix_OR=OR;
//           }if(XOR > Mix_XOR && XOR < k){
//               Mix_XOR=XOR;
//           }
//       }
//   }

//   printf("%d\n %d\n %d\n",Mix_AND,Mix_OR,Mix_XOR);

// return 0;
// }

//  #include<stdio.h>
//  int main(){
//     int r;
//     int k;
//     // First loop is rows;
//     for(r=0;r<=5;r++){

//       // Secound loop is print charecter row;
//         for(k=0;k<=r;k++){
//           printf("* ");
//           // printf("%c ",'A'+k);
//           // printf("%d ",1+k);
//         }
//         printf("\n");
//     }
  
//    return 0; 
//  }

// #include<stdio.h>
// int main(){
//   int r,k;
//   for(r=1;r<=5;r++){
//     for(k=1;k<=(5-r);k++){
//     // printf("  "); /*duble space print full piramide*/
//     printf(" "); /*single space  print Half Right piramidez*/
    
//     }
//     for(int n=1;n<=r;n++){
//       printf("* ");
//     }
//     printf("\n");
  
//   }
//   return 0;
// }

// #include<stdio.h>
// int main(){
// int r,k,j;
// for(r=5;r>0;r--){
//   for(j=5;j>r;j--){
//     printf(" ");
//   }
//   for(k=1;k<=r;k++){
//      printf("* ");
//   }
//   printf("\n");
// }


//   return 0;
// }


// #include<stdio.h>
// int main(){
// int r,k,j;
//  for(r=1;r<=5;r++){
//   for(j=1;j<=5-r;j++){
//     printf(" ");
//   }
//   for(k=1;k<=4;k++){
//     printf("* ");
//   }
//   printf("\n");
//  }


//   return 0;
// }

// #include<stdio.h>
// int main(){
// int r,k,j;

//   for(r=1;r<=5;r++){
//     for(k=1;k<=(5-r);k++){
//     // printf("  "); /*duble space print full piramide*/
//     printf(" "); /*single space  print Half Right piramidez*/
    
//     }
//     for(int n=1;n<=r;n++){
//       printf("* ");
//     }
//     printf("\n");
//   }
//  printf(" ");
// for(r=4;r>0;r--){
//   for(j=4;j>r;j--){
//     printf(" ");
//   }
//   for(k=1;k<=r;k++){
//      printf("* ");
//   }
//   printf("\n");
// printf(" ");

// }
//   return 0;
// }

// #include<stdio.h>
// int main(){
// int n=5;
// int camp;

// // scanf("%d",&n);

// for(int r=1 ; r<=2*n-1 ; r++){
// if(r<=n){
//   camp=n-r;
// }else{
//   camp=r-n;
// }  
// for(int k=1;k<=camp;k++){
//   printf(" ");
// }

// for(int j=1;j<=n-camp;j++){
//   printf("* ");
// }
// printf("\n");


// }

//   return 0;

// }

// #include<stdio.h>
// int main(){
//  int n=5;
// int t=n*2;
// int camp;

// scanf("%d",&n);

// for(int r=1 ; r<=2*n-1 ; r++){
// if(r<=n){
//   camp=r-1;
// }else{
//   for(int m=3;m<t;m=m+2){
//    camp=m-r;
// }  
// }
// for(int k=1;k<=camp;k++){
//   printf(" ");
// }

// for(int j=1;j<=n-camp;j++){
  
//   printf("* ");
// }
// printf("\n");


// }

//   return 0;
// }


// #include<stdio.h>
// int main(){
//   int r,k;
//  for(r=1;r<=5;r++){
//   for(k=1;k<=5;k++){
//     if(r>1 && r<5 && k>1 && k<5){
//       printf("  ");
//     }else{ 
//     printf("%d ",0+k);
//     }
//   }
//   printf("\n");
//  }

// int r,k,j;
// for(r=1;r<=5;r++){
//   for(k=1;k<=5-r;k++){
//    printf(" ");
//   }
//   for(j=1;j<=r;j++){
//   if(r>2 && r<5 && j>1 && j<r){
//     printf("  ");
//   }else{
//     printf("* ");
//     }
//   }
//   printf("\n");
// }


// int r,k,j;
// for(r=5;r>=1;r--){
//   for(k=1;k<=5-r;k++){
//    printf(" ");
//   }
//   for(j=1;j<=r;j++){
//     if(r>2  && r<5 && j>1 && j<r){
//       printf("  ");
//     }else{
//     printf("* "); 
//     }
//     }
//   printf("\n");
// }

// return 0;
// }


// #include<stdio.h>
// int main(){
//  int n=5;
// int t=n*2;
// int camp;

// // scanf("%d",&n);

// for(int r=1 ; r<=2*n-1 ; r++){
// if(r<=n){
//   camp=r-1;

// }else{
//   for(int m=3;m<t;m=m+2){
//    camp=m-r;
// }  
// }
// for(int k=1;k<=camp;k++){
//   printf(" ");
// }

// if(r<6){
// for(int j=1;j<=n-camp;j++){
//   if(r>1 && r<4 && j>1 && j<n-camp){
//   printf("  ");
// }else{
//   printf("* ");
// }
// }
// }else{
//   for(int j=1;j<=n-camp;j++){
//   if(r>6 && r<9 && j>1 && j<n-camp){
//   printf("  ");
// }else{
//   printf("* ");
// }
// }

// }
// printf("\n");
// }
//   return 0;
// }

// #include<stdio.h>
// int main(){
  
//  int r,k;
//  int i=1;
//  for(r=1;r<=4;r++){
//   for(k=1;k<=r;k++){
//     printf("%d ",i++);
//   }
//   printf("\n");
//  }



//   return 0;
// }


// #include<stdio.h>
// int main(){
  
//  int r,k,j;
 
//  for(r=0;r<5;r++){

//   for(k=0;k<5-r;k++){
//     printf(" ");
//   }for(j=0;j<=r;j++){
//     if(j==0||j==r){
//       printf("%d ",1);
//     }else{
//       printf("%d ",r);
//     }
//   }
//  printf("\n");
//  }


//   return 0;
// }



// #include<stdio.h>
// int main(){
// int r,j;
// for(r=1;r<=7;r++){
//   for(j=1;j<=7;j++){
//     if(r==2 &&  j>1 && j<7){
//       printf("%d ",3);
//     }else{
//       printf("%d ",4);
//     }

   
//   }
//   printf("\n");
// }

//   return 0;
// }


#include<stdio.h>
int main(){

int a[]={1,2,2};
    int length;
    int k=0;
    int temp;
   
    length=sizeof(a)/sizeof(a[0]);
    for(int n=0;n<length;n++){
    printf("%d ",a[n]);
}
printf("\n");

    for(int i=1;i<length*length-length;i++){
    if(k==length-1){
      temp=a[k];
      a[k]=a[0];
      a[0]=temp;
      k=0;
    }else{
        temp=a[k];
        a[k]=a[k+1];
        a[k+1]=temp;
         k++;  
    }
    for(int j=0;j<length;j++){
        printf("%d ",a[j]);
        
    }
    printf("\n");
    }
   

}
