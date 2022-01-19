#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, n, j,p,count, count2;
    char str[101], str2[101];
    scanf("%d\n", &t);
    for(i = 0; i < t; i++) {
        gets(str);
        n = 0;
        while(str[n] != '\0') {n++;}

        for(j = 0; j < n; j++)
        {str2[j] = str[j];}

        if(strlen(str) % 2 == 0){
            count = count2 = 0;
            for(j = 0, p = n/2; j < n/2; j++, p++){

                if(str2[j] == str[p]){
                        count++;
                }
                else if(str2[j] != str[p]){
                        count2++;
                        break;
                }

            }
            if(count == n/2) printf("yes\n");
            else if(count2 >= 1) printf("no\n");
        }
        else printf("no\n");
    }

    return 0;
}
