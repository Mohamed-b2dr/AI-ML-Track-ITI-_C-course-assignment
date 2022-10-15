#include <stdio.h>
#include <stdlib.h>

struct Employe {
        char ID[20];
        char Name[20];
        float Salary;
        float Bonu;
        float Deduction};

int main()
{
    float temp, net_salary =0;

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


    net_salary = emp1.Salary + emp1.Bonu - emp1.Deduction;

    printf("\n ID %s SALARY %f", emp1.ID, net_salary);
    return 0;
}
