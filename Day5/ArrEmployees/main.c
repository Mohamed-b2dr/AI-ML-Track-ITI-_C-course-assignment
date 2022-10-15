#include <stdio.h>
#include <stdlib.h>

struct Employe {
        char Name[20];
        char date [20];
        float Salary;};

int main()
{
    struct Employe ArrEmp[5];
    int i;
    float temp;

    for(i=0; i<5; i++){
        printf("NUM [%d] EMPLOYE\n", i+1);
        printf("Enter Name [%d] EMPLOYE:\n ", i+1);
        _flushall();
        gets(ArrEmp[i].Name);

        printf("Enter date [%d] EMPLOYE: \n", i+1);
        gets(ArrEmp[i].date);

        printf("Enter Salary [%d] EMPLOYE:\n", i+1);
        scanf("%f", &temp);
        ArrEmp[i].Salary = temp;


    }

     for(i=0; i<5; i++){

        printf("EMPLOYE [%d] HIS DATE IS %s \n ", i+1, ArrEmp[i].date  );

    }

    return 0;
}
