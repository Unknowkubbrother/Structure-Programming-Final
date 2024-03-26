#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int N;
    scanf("%d", &N);
    char str[N][31];
    char str_check[N][31];
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%s", str[i]);
    }

    for (int i = 0; i < N; i++)
    {
        int found = 0; // Initialize found inside the outer loop
        for (int j = 0; j < i; j++)
        {
            if (!strcmp(str[i], str[j]))
            { // Add a check to skip comparing the same string
                found = 1;
                break;
            }
        }
        if (!found)
        {
            for (int j = 0; j < N; j++)
            {
                for (int i = 0; str[j][i] != '\0'; i++)
                {
                    if (isalpha(str[j][i]))
                    {
                        str[j][i] = tolower(str[j][i]);
                    }
                }
            }
            strcpy(str_check[count++], str[i]);
        }
    }
    for(int i = 0; i < count-1; i++)
    {
        for(int j=0;j<count-1-i;j++)
        {
            if(strcmp(str_check[j],str_check[j+1])>0)
            {
                char temp[31];
                strcpy(temp,str_check[j]);
                strcpy(str_check[j],str_check[j+1]);
                strcpy(str_check[j+1],temp);
            }
        }

    }
    for(int i = 0; i < count; i++)
    {
        printf("%s\n", str_check[i]);
    }
}