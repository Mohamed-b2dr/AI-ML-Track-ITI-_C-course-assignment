#include <stdio.h>
#include <stdlib.h>

int main()
{
  int choice=0;
while(choice!= 'D')
{
 printf("\n Menu ");
 printf("\n A. OPTION ");
 printf("\n B. OPTION");
 printf("\n C. OPTION");
 printf("\n D. EXIT");
 printf("\n\n Enter Your Choice: ");
 _flushall();
 scanf("%c",&choice);


 switch(choice)
 {
  case 'A':
              printf("\nYOU SELECTED OPTION  %c\n\n",'A');
              break;
  case 'B':
              printf("\nYOU SELECTED OPTION  %c\n\n",'B');
              break;
  case 'C':
              printf("\nYOU SELECTED OPTION  %c\n\n",'C');
              break;
  case 'D':
              printf("\nYOU SELECTED OPTION  %c\n\n",'D');
              exit(0);
  default:
             printf("\nINVALID SELECTION...Please try again [A, B, C, D]n\n");
  }
}
}
