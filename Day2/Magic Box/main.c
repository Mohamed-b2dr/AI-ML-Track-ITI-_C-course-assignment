#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
        {
          int col,row,i,size;
          printf("please enter size of magic box\n");
          scanf("%d",&size);
          clrscr();


          for(i=1;i<=size * size;i++)
          {
                if(i==1)
                {
                  row =1;
                  col=(size/2)+1;
                }
                else if(((i-1) % size) == 0){
                  row++;

                }
                else{
                  row--; col--;
                  if(row < 1)
                   row = size;
                  if(col < 1)
                   col = size;

                }

                gotoxy(col*3,row*3 );

           printf("%d",i);

          }
          return 0;
        }


//function definition //#include<windows.h>
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void clrscr()
{
    system("cls");
}

void textattr(int ForgC)
{
    //system("COLOR ForgC"); //system("COLOR FC");
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, ForgC);
}

void SetColor(int ForgC)
{
     WORD wColor;
     //This handle is needed to get the current background attribute

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
