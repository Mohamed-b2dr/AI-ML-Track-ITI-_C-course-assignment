#include <stdio.h>
#include <stdlib.h>
struct Employe {
        float ID;
        char Name[20];
        float Salary;
        float Bonu;
        float Deduction};

struct Dept {
  int id;
  char name[20];
  struct Employe emp[2];
};
int main()
{
    struct Dept d;
    float temp;
    int i;
    printf("Enter ID: ");
    scanf("%f", &temp);
    d.id = temp;
    _flushall();

    printf("Enter Name: ");
    gets(d.name);

    for (i =0; i<2; i++){
        printf("Enter %d employe \n", i+1);

        printf("Enter ID EMPLOYE: ");
        scanf("%f", &temp);
        d.emp[i].ID = temp;
        _flushall();

        printf("Enter Name EMPLOYE: ");
        gets(d.emp[i].Name);
        printf("Enter Salary EMPLOYE: ");
        scanf("%f", &temp);
        d.emp[i].Salary = temp;

        printf("Enter Bonu EMPLOYE: ");
        scanf("%f", &temp);
        d.emp[i].Bonu = temp;

        printf("Enter Deduction EMPLOYE: ");
        scanf("%f", &temp);
        d.emp[i].Deduction = temp;
         _flushall();
    }

    return 0;
}
