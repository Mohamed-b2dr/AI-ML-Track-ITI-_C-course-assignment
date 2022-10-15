#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch[10];
   int i;
   for (i=0; i<10; i++){
        scanf("%c", &ch[i]);
        if (ch[i] == 13){
           ch[i] = '\0';
           break;
        }
   }

   for (i=0; i<10; i++){
    if (ch[i] == '\0'){
        break;
    }
    else{
            printf("%c", ch[i]);
    }

   }
    return 0;
}
