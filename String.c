// #include <stdio.h>
// void printString(char arr[]);

// int main(){
// char FirstName[]="VIKAS";
//  char LastName[]={'N','I','R','M','A','L','\0'};

// printString(FirstName);
// printString(LastName);

// // for(int i=0;FirstName[i] !='\0';i++){
// //     printf("%c",FirstName[i]);
// // }

//     return 0;

// }

// void printString(char arr[]){
// for(int i=0; arr[i]!='\0';i++){
// printf("%c",arr[i]);

// }
// printf("\n");
// }




 //  1          String Format Specifier


//  #include<stdio.h>
//  int main(){
//  char Name[40];
// scanf("%s",Name);
// printf("My Name is %s",Name);


//         return 0;
//      }

// #include<stdio.h>
//  int main(){

// //char Class[]="Vikas Nirmal";
// char Class[]={'v','i','k','a','s',' ','N','i','r','m','a','l','\0'};
// for(int i=0;Class[i]!='\0';i++){
// printf("%c",Class[i]);
// }
//         return 0;
//      }




 //  2       String Formal Functions[(intput gets(), fgets(), )& (output puts())]


#include<stdio.h>
 int main(){

char str[50];
gets(str);
puts(str);

// char Name[10];
// //fgets(str,n,file);

// fgets(Name,10,stdin); // n-1 print

// puts(Name);
        return 0;
     }



// 3  String using pointers (Reinitialized & Not Reinitialized);



// #include<stdio.h>
//  int main(){
// char  *canchange="Vikas Nirmal";  //Pointer string can be Reinitialized
// puts(canchange);

// canchange="Hallo Wold";

// // for(int i=0;canchange[i]!='\0';i++){
// //         printf("%c",canchange[i]);
// // }
//  puts(canchange);


// // Array string can not reinitialized;
// char cannotchange[]="Shachin chaudhary";
// puts(cannotchange);

// //  cannotchange = "vikas Nirmal";

  //        return 0;
  //  }



    //QS Make a program that inputs user's Name & prints its length;


// #include<stdio.h>
// int main(){
// char count[50];
// gets(count);
// puts(count);

// int n=0;
// int t=0;
// char a;
// printf("enter a ");

// scanf("%c",&a);

// for(int i=0;count[i]!='\0';i++){
// t++;
    

// }

// for(int i=0;count[i]!='\0';i++){

//     if(count[i]==a){
// n++;
//     }

// }
// printf("Length%d \n",t);
// printf("time  %d",n);
  
//     return 0;
// }

// #include<stdio.h>
// void  printstring(char arr[]);
// int countlength(char arr[]);
// int countAlimaint(char arr[]);

// int main(){
// char  str[100];
// fgets(str,100,stdin);

//    printstring(str);
//  printf("Length %d \n",countlength(str));


// printf("AlimintTime %d",countAlimaint(str));

//     return 0;
// }

//  void printstring(char arr[]){

// for(int i=0;arr[i]!='\0';i++){

// printf("%c",arr[i]);
// }
// }


// int countlength(char arr[]){
//     int count =0;
// for(int i=0;arr[i]!='\0';i++){

// count++;
// }

//     return count-1;
// }
// int countAlimaint(char arr[]){
//     int Alimaint =0;
//  char a;
//  printf("Enter a ");
//  scanf("%c",&a);

// for(int i=0;arr[i]!='\0';i++){
// if(arr[i]==a){
//     Alimaint++;
// }

// }

// return Alimaint;
// }


// 4 STANDARD LIBRARY FUNCTIONS( <string.h>)
// 1 strlen(str) count number of characters excluding'\0'

// #include<stdio.h>
//   #include<string.h>
// int main(){
  
// char arr[100]="vikas";
// // // fgets(arr,100,stdin);
// // gets(arr);
// printf("%d",strlen(arr));  
// }


// // 5  STANDARD LIBRARY FUNCTIONS( <string.h>)
// // 2 strcpy(newstr , oldstr) copies value of old string to new string  [oldstr<->newdtr]

// #include<stdio.h>
//   #include<string.h>


// int main(){
  
// char arr1[]="vikas";
//  char arr2[]="nirmal";
//  strcpy(arr1,arr2);
// puts(arr1);

// }

// 6   STANDARD LIBRARY FUNCTIONS( <string.h>)
// 3 strcat(firststr,secstr)  concatenates first string with second string;

//  #include<stdio.h>
//  #include<string.h>
//  int main(){
// char firststr[17]="Vikas ";
// char secstr[]="Nirmal";

// strcat(firststr,secstr);
// puts(firststr);

//   return 0;
//  }         




// 7  STANDARD LIBRARY FUNCTIONS( <string.h>)
// 4 strcmp(firststr,secstr)
// 0-> string equal
// positive Num -> firststr > second (ASCII)
// Negative Num -> firststr < second (ASCII)

// #include<stdio.h>
// #include<string.h>
// int main(){
// // char firststr[]="Apple";
// // char secndstr[]="Banana";

//  char firststr[]="HHHHj";
//  char secndstr[]="HHHHa";
 
// // char firststr[]="vikas";
// //  char secndstr[]="vikas";

// printf("%d",strcmp(firststr,secndstr));

//   return 0;
// }



                           //H  w

     // Take a string input from the user using %c

  // #include<stdio.h>
  // int main(){
// //  char str[100];
// // char ch;
// // int i=0;
// // while(ch !='\n'){
// // scanf("%c",&ch);
// // str[i]=ch;

// // i++;
// // }
// // str[i]='\0';
// // puts(str);



// //  char str[500];
// // int i;
// // for(i=0;i<15;i++){
// // scanf("%c",&str[i]);

// // }


// str[i]='\0';
//  printf("%s",str);


// char str[100];
// char ch;
// int i=0;

// for (i=0;ch!='\n';i++){

// scanf("%c",&ch);
// str[i]=ch;


// }
// str[i]='\0';
// printf("%s",str);




//     return 0;
//   }
  

//  #include<stdio.h>
//  #include<string.h>

//   int main(){

// char Passward[100];

// scanf("%s",Passward);
// char salt[]="123";

// char Newpassward[100];
// strcpy(Newpassward,Passward);

// strcat(Newpassward,salt);
// puts(Newpassward);

//      return 0;
//  }
  

// Write a function named slice, which takes a string & returns a sliced string from index n to m



//   #include<stdio.h>
//   int main(){
// char str[]="Hallowold";
// char newstr[100];
// int n;
// int m;

// printf("enter n ");
// scanf("%d",&n); 
// printf("enter m ");
// scanf("%d",&m); 

// int j=0;

// for(int i=n;i<=m;i++,j++){
  
// newstr[j]=str[i];

// }
// newstr[j]='\0';

// printf("%s",newstr);


//     return 0;
//   }


// Write a function to count the occurrence of vowels in a string.


// #include<stdio.h>
// int main(){

// char str[]="Vikas Nirmal";

// int count=0;

// for(int i=0;str[i]!='\0';i++){
// if(str[i]=='a'|| str[i]=='i'|| str[i]=='o' ||str[i]=='e'||str[i]=='u'){

// count++;

// }


// }

// printf("%d",count);

//   return 0;
// }




// Check if a given Character is present in a string or not;

// #include<stdio.h>
// #include<stdlib.h>
// // void checkchar(char word[]);
// int main(){

// char word[]="Vikas";

// // checkchar(word);

// for(int i=0;word[i]!='\0';i++){
//     if(word[i]=='s'){
//      printf("yes ");
//      exit(0);
    

//     }

//   }
//     printf("No");

//   return 0;
// }


// // void checkchar(char word[]){
// //    for(int i=0;word[i]!='\0';i++){
// //     if(word[i]=='V'){
// //       printf("yes ");
// //     return;
// //     }

// //   }
// //    printf("No");
// // }



// Write a program to convert all lowercase vowels to uppercase in a string;

// #include<stdio.h>
// int main(){
// char str[100];
// fgets(str,100,stdin);

// for(int i=0;str[i]!='\0';i++){
// if(str[i]=='a'){
//   str[i]='A';
// }
// else if(str[i]=='e'){
// str[i]='E';
// }
// else if(str[i]=='i'){
// str[i]='I';
// }
// else if(str[i]=='o'){
// str[i]='O';
// }
// else if(str[i]=='u'){
// str[i]='U';
// }
// }

// printf("%s",str);

//   return 0;
// }




// Write a program to remove blank spaces in a string;

// #include<stdio.h>
// int main(){
// char str[]=" v ikas ";
// char newstr[100];
// int j=0;
// for(int i=0;str[i]!='\0';i++,j++){
// if(str[i]=='v'){

//   continue;
  
// newstr[j]=str[i];

// }
// }

// newstr[j]='\0';

// printf("%s",newstr);
//   return 0;
// }



