#include <stdio.h>
#include <stdlib.h>

struct Employe {
        char ID[20];
        char Name[20];
        float Salary;
        float Bonu;
        float Deduction};



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
    struct Employe emp1;
    emp1 = AddNewEmployee();
    DisplayEmployee(emp1);
    return 0;
}




