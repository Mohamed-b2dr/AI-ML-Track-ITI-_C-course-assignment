#include <stdio.h>
#include <stdlib.h>
#include <MyLibrary.h>
#define NORMALCOLOR 0X07
#define LIGHTCOLOR 0X70
#define ROW 3
#define CLOUM 8
#define UP 72
#define DOWN 80
#define HOME  71
#define END  79

struct Employe AddNewEmployee()
 {
    float temp;
    struct Employe emp1;
    printf("Enter ID EMPLOYE: ");
    gets(emp1.ID);

    printf("Enter Name EMPLOYE: ");
    gets(emp1.Name);

    printf("Enter Salary EMPLOYE: ");
    scanf("%f", &temp);
    emp1.Salary = temp;

    printf("Enter Bonu EMPLOYE: ");
    scanf("%f", &temp);
    emp1.Bonu = temp;

    printf("Enter Deduction EMPLOYE: ");
    scanf("%f", &temp);
    emp1.Deduction = temp;


    return emp1;
                              }

void DisplayEmployee(struct Employe  emp1){

    printf("%s ID EMPLOYE: \n ", emp1.ID);
    printf("%s Enter Name EMPLOYE \n ", emp1.Name);
    printf("%f Salary EMPLOYE \n ", emp1.Salary);
    printf("%f Bonu EMPLOYE \n ",     emp1.Bonu);
    printf("%f Deduction EMPLOYE \n ",  emp1.Deduction );

}

int main()
{
    char menu[3][8] = {"NEW", "DISPLAY", "EXIT"};
    int position = 0, flag = 0, enter = 0;
    int i;
    char ch, ch2;

    gotoxy(10, 0);
    printf("MENU\n  ");

do{

    for(i=0; i< ROW; i++){

                gotoxy(14, (i+1)*3);

                if (i == position){

                    textattr(LIGHTCOLOR);
                }
                else{

                     textattr(NORMALCOLOR);
                }
                if (enter == 0)
                    {

                printf("%s", menu[i]);}
                else{}
            }

    ch = getch();


     switch(ch){

        case 9:
            ++position;
            if (position > 2){position = 0;}
            break;

        case 13:
            if (enter == 0){
                enter++;
                switch(position){
                    case 0:
                        clrscr();
                        gotoxy(14, 10);
                        printf("NEW Page");
                        break;
                    case 1:
                        clrscr();
                        gotoxy(14, 10);
                        printf("DISPLAY Page");
                        break;

                    case 2:
                        exit(0);
                        break;

                }
            }
            else{
                        enter=0;
                        position =0;
                        clrscr();
                        gotoxy(10, 0);
                        printf("MENU\n  ");};
            break;

        case 27:
                exit(0);
                break;

        case -32:
            ch2 = getch();
            switch(ch2){
                case END:
                    position = 2;
                    break;
                case UP:
                    position--;
                    if(position < 0){
                        position = 2;
                    }
                    break;
                case 80:
                    position++;
                    if(position > 2){
                        position = 0;
                    }
                    break;

                case HOME:
                    position=0;
                    break;
                break;



        }}}while(1);









    return 0;
}
