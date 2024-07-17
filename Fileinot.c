// #include<stdio.h>
// int main(){
// FILE *fptr;
// // fptr = fopen("filename","mode");

//  fptr = fopen("test.txt","r");


//    fclose(fptr);

//     return 0;
// }



// #include<stdio.h>
// int main(){
// FILE *fptr;
// // fptr = fopen("filename","mode");

//  fptr = fopen("test.c","r");
// if (fptr==NULL){
// printf("file is not exist\n");

// }else{
//     fclose(fptr);
// }
    
//     return 0;
// }



// reading form a file;
// Writing to a file;
// #include<stdio.h>
// int main(){
// FILE *fptr;
//  fptr=fopen("test.txt","r");

// char ch;
// fscanf(fptr,"%c",&ch);
// printf("Character %c ",ch);
// fscanf(fptr,"%c",&ch);
// printf("Character %c ",ch);
// fscanf(fptr,"%c",&ch);
// printf("Character %c ",ch);
// fscanf(fptr,"%c",&ch);
// printf("Character %c ",ch); 
// fscanf(fptr,"%c",&ch);
// printf("Character %c ",ch);
// fclose(fptr);

// fptr = fopen("test.txt","w");
// fptr = fopen("test.txt","a");

// fprintf(fptr,"%c",'p');
// fprintf(fptr,"%c",'p');
// fprintf(fptr,"%c",'K');
// fprintf(fptr,"%c",'A');
// fprintf(fptr,"%c", 'S');

// fclose(fptr);

//     return 0;
// }

// Only use to character;
// Read & write a char fgetc(fptr), fputc('A',fptr);

// #include<stdio.h>
// int main(){
// FILE *fptr;
// fptr =fopen("test.txt","r");

// fptr =fopen("test.txt","w");

// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));

// fputc('M',fptr);
// fputc('a',fptr);
// fputc('n',fptr);
// fputc('g',fptr);
// fputc('o',fptr);


// fclose(fptr);

//     return 0;
// }


// EOF (End of file)
// fgetc returns EOF to show that the file has ended;
//  #include<stdio.h>
// int main(){

// FILE *fptr;
// fptr = fopen("test.txt","r");
// char ch;
// ch=fgetc(fptr);
// while (ch!=EOF )
// {
//     /* code */
//     printf("%c",ch);
//     ch=fgetc(fptr);
// }

//     return 0;
// }


              // QUESTION;
// Make a program to read 5 integers from a file ;
// #include<stdio.h>
// int main(){
// FILE *fptr;
// fptr = fopen("test.txt","r");
// int a;
// fscanf(fptr,"%d",&a);
// printf("1Integers %d\t",a);
// fscanf(fptr,"%d",&a);
// printf("2Integers %d\t",a);
// fscanf(fptr,"%d",&a);
// printf("3Integers %d\t",a);
// fscanf(fptr,"%d",&a);
// printf("4Integers %d\t",a);
// fscanf(fptr,"%d",&a);
// printf("5Integers %d\t",a);
// fclose(fptr);
//     return 0;
// }

// Make a program to input student information from a user & enter it to a file
// #include<stdio.h>
// int main(){
// FILE *fptr;
// fptr =fopen("Student.txt","a");
// char Name[200];
// printf("Enter Name:");
// scanf("%s",Name);

// int age;
// printf("Enter Age:");
// scanf("%d",&age);

// float cgpa;
// printf("Enter cgpa:");
// scanf("%f",&cgpa);



// fprintf(fptr,"Student Name: %s\n",Name);
// fprintf(fptr,"Student Age: %d\n",age);
// fprintf(fptr,"Student cgpa: %f\n",cgpa);

//     return 0;
// }



// Write a program to write all the odd numbers from 1 to n;

// #include<stdio.h>

// int main(){
//  FILE *fptr;
//  fptr =fopen("test.txt","w");
// int m;
// scanf("%d",&m);

// for(int n=1;n<=m;n++){
// if(n%2==1){

//     fprintf(fptr,"Odd Number %d\n",n);
// }


// }
// fclose(fptr);
//     return 0;
// }




// 2 numbers a & b are written in a file. Write a program to replace them with their sum;
// #include<stdio.h>

// int main(){
// FILE *fptr;
// fptr=fopen("test.txt","r");
// int n;
// fscanf(fptr,"%d",&n);
// printf("n: %d",n);
// int m;
// fscanf(fptr,"%d",&m);
// printf("m: %d",m);
// fclose(fptr);

// fptr=fopen("test.txt","w");
// fprintf(fptr,"sum: %d",n+m);
// fclose(fptr);
//     return 0;
// }



// write a program to read a string from a file & output to the user.

// #include<stdio.h>
// int main(){
// FILE *fptr;
// fptr=fopen("test.txt","r");
// char Name[100];
// fscanf(fptr,"%s",Name);
// printf("Name %s",Name);

// fclose(fptr);

// fptr=fopen("test.txt","w");
// char name[100];
// scanf("%s",name);
// fprintf(fptr,"%s",name);
// fclose(fptr);
//     return 0;
// }



#include<stdio.h>
int main(){
// FILE *fptr;
// char number[100];
// int t=0;
// fptr =fopen("test.txt","r");
// fscanf(fptr,"%s",number);
// printf("%s\n",number);
// for(int i=0;number[i]!='\0';i++){

// t++;
// }
// printf("Lenght: %d",t);
// fclose(fptr);
char name[100];
gets(name);
printf("%s",name);
    return 0;
}


