// #include<stdio.h>
// int main(){
// printf("%d\n",sizeof(int));
// printf("%d\n",sizeof(char));
// printf("%d\n",sizeof(float));

//     return 0;
// }

    //1 malloc();  

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
  

// int *ptr;
// ptr=(int*)malloc(5*sizeof(int));

// ptr[0]=1;
// ptr[1]=3;
// ptr[2]=15;
// ptr[3]=5;
// ptr[4]=7;

// for (int i = 0; i < 5; i++)
// {
//     /* code */
//     printf("%d\n",ptr[i]);
// }


// write a program allocate memory to store 5 prices.
// float *ptr;
// ptr=( float*)malloc(5*sizeof(float));
// ptr[0]=4.53;
// ptr[1]=4.23;
// ptr[2]=4.93;
// ptr[3]=4.70;
// ptr[4]=40.19;

// for (int i = 0; i < 5; i++)
// {
//     /* code */
//     printf("%f\n",ptr[i]);
// }


//     return 0;
// }
        
        // 2 calloc()
       // 3 free()

//  #include<stdio.h>
//  #include<stdlib.h>
//  int main(){
// //     int *ptr;
                     
// //  ptr=(int *) calloc(5,sizeof(int));
// //  for (int i = 0; i < 5; i++)
// //  {
// //     /* code */
// //     printf("%d\n",ptr[i]);
// //  }


//    int *ptr;
// int n;
// printf("Rnter n");
// scanf("%d",&n);        
//  ptr=(int *) calloc(n,sizeof(int));
//  for (int i = 0; i < n; i++)
//  {
//     /* code */
//     printf("%d\n",ptr[i]);
//  }                                               


// free(ptr);

//  ptr=(int *) calloc(2,sizeof(int));
// for (int i = 0; i < 2; i++)
//  {
//     /* code */
//     printf("%d\n",ptr[i]);
//  }                                               

//  return 0;
// }



// 4 realloc();
   // /Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers; 

#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
ptr=(int *)calloc(5,sizeof(int));
int i=0;
for(i=0;i<5;i++){
    printf("ptr[%d]",i);
scanf("%d",&ptr[i]);

}
printf("\n");
ptr=realloc(ptr,8);
for(i=0;i<8;i++){
    printf("ptr[%d]",i);
scanf("%d",&ptr[i]);
}

for(i=0;i<8;i++){
    printf("Number%d: %d\n",i,ptr[i]);
    }
free(ptr);
    return 0;
}
