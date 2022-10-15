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
int add=0;

struct Employe {
        float ID;
        char Name[20];
        float Salary;
        float Bonu;
        float Deduction};

struct Employe AddNewEmployee()
 {
    float temp;
    struct Employe emp1;
    printf("Enter ID EMPLOYE: ");
    scanf("%f", &temp);
    emp1.ID = temp;
    _flushall();

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
     _flushall();
    return emp1;
                              }

void DisplayEmployee(struct Employe  emp1[]){
    int i, j=0;
    for (i=0; i< 10; i++){
        if ((int)emp1[i].Salary == 0 || (int)emp1[i].ID == 0 ){
                j++;
                      if (j == 10){
                                printf("your user not added yet\n");
            }
        }
        else{
                printf("%f ID EMPLOYE: \n ", emp1[i].ID);
                printf("%s Enter Name EMPLOYE \n ", emp1[i].Name);
                printf("%f Salary EMPLOYE \n ", emp1[i].Salary);
                printf("%f Bonu EMPLOYE \n ",     emp1[i].Bonu);
                printf("%f Deduction EMPLOYE \n ",  emp1[i].Deduction );
                printf("**************************************************************\n");}}

}
void DisplayEmployeeone(struct Employe  emp1){
    if ( (int)emp1.Salary == 0 || (int)emp1.ID == 0 ) {
        printf("your user not added yet \n");
    }
    else{
        printf("%f ID EMPLOYE:\n ", emp1.ID);
        printf("%s Enter Name EMPLOYE \n ", emp1.Name);
        printf("%f Salary EMPLOYE \n ", emp1.Salary);
        printf("%f Bonu EMPLOYE \n ",     emp1.Bonu);
        printf("%f Deduction EMPLOYE \n ",  emp1.Deduction );
        printf("**************************************************************\n");}}

int main()
{
    char menu[3][8] = {"NEW", "DISPLAY", "EXIT"};
    int position = 0, flag = 0, enter = 0;
    int i;
    int index , index_p;
    struct Employe ArrEmpall[10];
    struct Employe ArrEmpindex[10];
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
                       do {
                        printf("Enter position to add new employe for exit enter 0 \n");
                        scanf("%d",&index);
                        _flushall();

                        if (index < 10 && index >0 ){
                            ArrEmpindex[index] = AddNewEmployee();
                            ArrEmpall[add] = ArrEmpindex[index];
                            add++;
                        }
                       else if (index == 0) {
                                clrscr();
                                printf("you finished from add emolye enter any character to back to home");

                                break;;
                       }
                       else{
                             printf ("out of range \n");
                       }
                       }while (1);



                        break;
                    case 1:

                        clrscr();
                       do {
                        printf("Enter position employe for print for eixt 0 \n");
                        printf("Enter 10 for all employe \n");
                        scanf("%d",&index_p);
                        _flushall();

                      if(index_p == 0){
                         clrscr();
                         printf("you finished from print emolye enter any character to back to home");
                         break;
                       }
                      else if (index_p == 10){
                            DisplayEmployee(ArrEmpall);

                       }

                        else if (index_p <  10 && index_p >0 ){
                         DisplayEmployeeone(ArrEmpindex[index_p]);
                        }

                       else {
                             printf("out of range\n");

                       }


                        }while(1);


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

                default:
                        enter=0;
                        position =0;
                        clrscr();
                        gotoxy(10, 0);
                        printf("MENU\n  ");

        }}}while(1);









    return 0;
}

