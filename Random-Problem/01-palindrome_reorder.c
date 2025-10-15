// https://cses.fi/problemset/task/1755


#include <stdio.h>
#include <string.h>

int main()
{

    int i,z;

    char str1[1000001];
    int str2[1000001];

    int alfa[26] = {0};

    scanf("%s", str1);

    int len = strlen(str1);

    for (i = 0; i < len; i++)
    {

        int j = str1[i] - 65;
        alfa[j]++;
    }

    int odd = 0;

    int nl = 0;
    for (i = 0; i < 26; i++)
    {

        if (alfa[i] % 2 != 0)
        {
            odd++;
        }
        if (alfa[i] != 0)
        {
            nl = nl + alfa[i];
        }
    }
    
    //printf("a = %d",alfa[0]);
   // printf("c = %d",alfa[2]);
   
   

   if (odd > 1)
    {
        printf("NO SOLUTION");
    }
    else
    {
        int p = 0, q = nl - 1, r = (nl / 2) ;

        for (i = 0; i < 26; i++)
        {
            if (alfa[i] == 1)
            {
                str2[r] = i + 65;
            }
            else if (alfa[i] > 0)
            { 
                while(alfa[i] ){
                    if(alfa[i] == 1){
                        str2[r] = i +65;
                        alfa[i] = alfa[i] -1;
                    }
                    else {
                         str2[p] = i + 65;
                          p++;
                         str2[q] = i + 65;
                          q--;
                         alfa[i] = alfa[i] -2;
                    }
                }
            }
        }
        for (i = 0; i < nl; i++)
        {
            printf("%c", str2[i]);
        }

    
    } 
return 0;
    // printf("%d", strlen(str1));
}
