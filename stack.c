#include<stdio.h>
#include<stdlib.h>
#define size 10
int top = -1;
int stack[size];
void insert()
{
  if(top==size)
  {
    printf("STACK OVERFLOW\n");
  }else{
 int value;
 printf("Enter the value to insert\n");
 scanf("%d",&value);
 top++;
 stack[top]=value;
}}
void show()
{


        int i;
        printf("\nThe Stack is :");
        for(i=0;i<=top;i++)
        {
          printf("#%d#\t",stack[i]);
        }
       }


void pop()
{
   if(top == -1)
   {
     printf("\nSTACK UNDERFLOW\n");
   }else{
     top--;
   }
}

void main()
{
  int ch;
  printf("\n1.INSERT\n2.VIEW\n3.DELETE\n");
  scanf("%d",&ch);

  //while(ch==1||ch==2||ch==3||ch==4||ch==5)

    switch (ch){

      case 1: insert();
              main();
              break;
      case 2: show();
              main();
              break;
      case 3: pop();
              main();
              break;
      case 4: exit(0);
      default: printf("\nINVALID KEYWORD\n");

  }
}
