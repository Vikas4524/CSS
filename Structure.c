
// Exmaple;

// #include<stdio.h>
// #include<string.h>

// struct student
// {
//     char name[100];
//     int roll;
//     float cgpa;
// };
// struct vikas
// {
// char fullname[100];
// int age;
// int class;
// float cgpa;
// };

// int main(){
// struct student s1; // veriable
// s1.cgpa=8.1;
// s1.roll=12234;
// // s1.name="vikas";
// strcpy(s1.name,"vikas");

// printf("%s\n",s1.name);
// printf("%f\n",s1.cgpa);
// printf("%d\n",s1.roll);

// struct vikas a1; //veriable
// //s2.fullname="vikas";
// strcpy(a1.fullname,"vikas nirmal");
// a1.class=12;
// a1.cgpa=2.333;
// a1.age=19;

// printf("fullname %p\n",&a1.fullname);
// printf("class %p\n",&a1.class);
// printf("cgpa %p\n",&a1.cgpa);
// printf("age %p\n",&a1.age);

// printf("fullname %s\n",&a1.fullname);
// printf("class %d\n",&a1.class);
// printf("cgpa %f\n",&a1.cgpa);
// printf("age %d\n",&a1.age);


//     return 0;
// }



//  Write a program to store the data of 3 Students;

// #include<stdio.h>
// #include<string.h>

// struct F_student{
// char name[100];
// int roll;
// float cgpa;
// };
// struct S_student{
// char name[100];
// int roll;
// float cgpa;

// };
// struct Th_student{
// char name[100];
// int roll;
// float cgpa;
// };

// int main(){
//  //First student;
// struct F_student s1;
// s1.cgpa=89.12;
// s1.roll=123;
// strcpy(s1.name,"vikas nirmal");

// printf("Name %s\n",s1.name);
// printf("Roll %d\n",s1.roll);
// printf("cgpa %f\n",s1.cgpa);

//  // secund student;
// struct S_student s2;
// s2.cgpa=24.124;
// s2.roll=124;
// strcpy(s2.name,"Mohit tirole");

// printf("Name %s\n",s2.name);
// printf("Roll %d\n",s2.roll);
// printf("cgpa %f\n",s2.cgpa);

// //Therd student;
// struct Th_student s3;
// s3.cgpa=99.124;
// s3.roll=125;
// strcpy(s3.name,"Sohit");

// printf("Name %s\n",s3.name);
// printf("Roll %d\n",s3.roll);
// printf("cgpa %f\n",s3.cgpa);
//     return 0;
// }


  // 2  Array of Structures; 

// #include<stdio.h>
// #include<string.h>

// struct student{
// char Name[100];
// int Roll;
// float cgpa;
// };
// int main(){
// struct student arr[100]; //array is a variable;
// strcpy(arr[0].Name,"vikas Nirmal");
// arr[0].Roll=101;
// arr[0].cgpa=8.12;

// printf("Name %s\n",arr[0].Name);
// printf("Roll %d\n",arr[0].Roll);
// printf("cgpa %f\n",arr[0].cgpa);
// printf("\n");

// strcpy(arr[1].Name,"Manish Nirmal");
// arr[1].Roll=102;
// arr[1].cgpa=9.32;

// printf("Name %s\n",arr[1].Name);
// printf("Roll %d\n",arr[1].Roll);
// printf("cgpa %f\n",arr[1].cgpa);

//     return 0;
// }


// 3 Initializing Structures;
// #include<stdio.h>
// struct student
// {
// char Name[100];
// int Roll;
// float cgpa;
// };

// int main(){
// struct student s1= {"Vikas Nirmal",101,9.02};
// printf("Name %d\n",s1.Name);
// printf("Roll No %d\n",s1.Roll);
// printf("cgpa %f",s1.cgpa);

//     return 0;
// }


//4 Pointers to Structures;
/*  (*ptr).code
    (*ptr).code<-->ptr->code;
*/
// #include<stdio.h>
// struct student
// {
// char Name[100];
// int Roll;
// float cgpa;
// };

// int main(){
// struct student s1= {"Vikas Nirmal",101,9.02};
// printf("Name %s\n",s1.Name);
// printf("Roll %d\n",s1.Roll);
// printf("\n");


// struct student *ptr;
// ptr=&s1;

// printf("%s\n",(*ptr).Name);
// printf("%d\n",(*ptr).Roll);
// printf("%f\n",ptr->cgpa);
//     return 0;
// }



// 5 Passing structure to function;
// #include<stdio.h>
// struct student{
// char Name[100];
// int Roll;
// float cgpa;

// };

// void printinfo(struct student s1);

// int main(){
// struct student s1={"vikas nirmal",112,9.1};
    
// printinfo(s1);

//     return 0;
// }

// void printinfo(struct student s1){
// printf("Name %s\t",s1.Name);

// printf("Roll %d\t",s1.Roll);
// printf("cgpa %f\t",s1.cgpa);

    
// }



// 6 typedef Keyword;
// used to create alias for data types;

// #include<stdio.h>
// #include<string.h>

// typedef struct computerEngneeringstudent
// {
// char Name[100];
// int Roll;
// float cgpa;
// }coa;
// int main(){
// // struct computerEngneeringstudent c1;
// coa c1;

// c1.cgpa=9.123;
// c1.Roll=123;
// strcpy(c1.Name,"vikas Nirmal");
// printf("Name %s\t",c1.Name);
// printf("Roll %d\t",c1.Roll);
// printf("cgpa %f\t",c1.cgpa);

//     return 0;
// }


     // Question of Structure;

    // 1  Enter address (house no,block,city,state)of 5 people;


// #include<stdio.h>
// #include<string.h>
// struct address{
//   char name[100];
// int house_No;
// int block;
// char city[100];
// char state[100];
// };

// // void printAdd(struct address adds[5]);
// void printAdd(struct address s1);

// int main(){
// struct address adds[5];
// //Person 1;
// strcpy(adds[0].name,"Vikas");
// adds[0].house_No=101;
// adds[0].block=10;
// strcpy(adds[0].city,"Indore");
// strcpy(adds[0].state,"{M P}");
// //Person 2;
// strcpy(adds[1].name,"Mohit");
// adds[1].house_No=102;
// adds[1].block=12;
// strcpy(adds[1].city,"Riva");
// strcpy(adds[1].state,"{M P}");
// //Person 3;
// strcpy(adds[2].name,"Vinay");
// adds[2].house_No=103;
// adds[2].block=13;
// strcpy(adds[2].city,"kashi");
// strcpy(adds[2].state,"{U P}");
// //Person 4
// strcpy(adds[3].name,"Vijay");
// adds[3].house_No=104;
// adds[3].block=14;
// strcpy(adds[3].city,"prayagraj");
// strcpy(adds[3].state,"{Uthar Pradesh}");
// //Person 5;
// strcpy(adds[4].name,"Lalit");
// adds[4].house_No=105;
// adds[4].block=15;
// strcpy(adds[4].city,"Indore");
// strcpy(adds[4].state,"{M P}");


// // printAdd(adds);

// printAdd(adds[0]);
// printAdd(adds[4]);
// printAdd(adds[1]);
// printAdd(adds[3]);
// printAdd(adds[2]);

//   return 0;

// }
// // void printAdd(struct address adds[5]){

// //  printf("Person 1: Name %s,House No %d,Block %d,City %s,state %s\n",adds[0].name, adds[0].house_No, adds[0].block, adds[0].city, adds[0].state);
// // printf("Person 2: Name %s,House No %d,Block %d,City %s,state %s\n",adds[1].name, adds[1].house_No, adds[1].block, adds[1].city, adds[1].state);
// // printf("Person 3: Name %s,House No %d,Block %d,City %s,state %s\n",adds[2].name, adds[2].house_No, adds[2].block, adds[2].city, adds[2].state);
// // printf("Person 4: Name %s,House No %d,Block %d,City %s,state %s\n",adds[3].name, adds[3].house_No, adds[3].block, adds[3].city, adds[3].state);
// // printf("Person 5: Name %s,House No %d,Block %d,City %s,state %s\n",adds[4].name, adds[4].house_No, adds[4].block, adds[4].city, adds[4].state);
// // }

// void printAdd(struct address s1){

//  printf("Person 1: Name %s,House No %d,Block %d,City %s,state %s\n",s1.name, s1.house_No, s1.block, s1.city, s1.state);
// }



// Create a structure to store vectors. Then make a function to return sum of 2 vectors;
// 
// #include<stdio.h>
// struct Vectors{
// int x;
// int y;

// };

// void calcSum(struct Vectors v1,struct Vectors v2,struct Vectors sum);

// int main(){
// // struct Vectors v1;
// // v1.x=5;
// // v1.y=7;
// // struct Vectors v2;
// // v2.x=3;
// // v2.y=5;
// // struct Vectors sum;
// // sum.x=v1.x+v2.x;  
// // sum.y=v1.y+v2.y;
// // printf("sum.x: %d\n",sum.x); //8
// // printf("sum.y: %d\n",sum.y); //12
// // printf("sum.x+sum.y: %d\n",sum.x+sum.y); //20

// struct Vectors v1={5,7};
// struct Vectors v2={3,5};
// struct Vectors sum={0};

// calcSum(v1,v2,sum);
//   return 0;
  
// }
// void calcSum(struct Vectors v1,struct Vectors v2,struct Vectors sum){
// sum.x=v1.x+v2.x;
// sum.y=v1.y+v2.y;
// printf("sum.x: %d\n",sum.x);
// printf("sum.y: %d\n",sum.y);
// printf("sum.x+sum.y %d\n",sum.x+sum.y);

// }


// Create a structure to store complex numbers; (use arrow operator);
// #include<stdio.h>
// struct complexNo {
// int real;
// int img;
// };
// int main(){
// struct complexNo c1={5,7};
// // printf("real %d\n",c1.real);
// // printf("img %d\n",c1.img);

// // (Use arrow operator);
// struct complexNo *ptr;
// ptr=&c1;
// printf("real %d\n",ptr->real);
// printf("img %d\n",(*ptr).img);

//   return 0;

/* Make a structure to store BankAccount Info of a customer of ABC Bank.
Also, make an alias for it.
*/
#include<stdio.h>
// typedef struct BankAccount
// {
//   char Name[100];
//   int Account;
// }Acc;

// int main(){
//   Acc c1={"vikas",123};
//   Acc c2={"shadhana",321};
//   Acc c3={"mohit",132};

// printf("Name %s ,Acount No %d\n ",c1.Name,c1.Account);
// printf("Name %s,Acount No %d \n",c2.Name,c2.Account);
// printf("Name %s,Acount No %d \n",c3.Name,c3.Account);

//   return 0;
// }

 struct V101{
  char Name[100];
  int Account;
};

 struct M102 {
  char Name[100];
  int Account;
};

int main(){
struct V101 c1={"vikas",1002002531};
struct M102 c2={"Mohit",1002002532};

int I;
printf("Enter Code: ");
scanf(" %d",&I);
if (I==99277)
{
  printf("Name %s,Acc NO %d\n",c1.Name,c1.Account);

}else if(I==99278){
  printf("Name %s,Acc NO %d\n",c2.Name,c2.Account);


}
else
{
  printf("Invelit code");
}

  return 0;
}