#include <stdio.h>
#include <string.h>

char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
char number[] = "0123456789";
char special[] = "!@#$%^&*~`{}:|,./?[]-+=";
int chars;

int main(void)
{
        printf("Password generator 2.0 made by ImKool-Gitch\n\n");
        printf("Enter how many characters do you want in your password (Limit is 27): ");
        scanf("%d", &chars);
        if (chars > 27 || chars <= 0)
        {
                printf("Limit is reached");
                return 1;
        }
        char yn[3];
        printf("Do you want numbers ?: ");
        scanf("%s", &yn);
        if (strcmp(yn, "yes") == 0)
        {
                char g[3];
                printf("Include special characters: ");
                scanf("%s", &g);
                if (strcmp(g, "yes") == 0)
                {
                        int r1, r2;
                        printf("Enter a range from 0 - %d : ", chars);
                        scanf("%d %d", &r1, &r2);
                        int n1, n2;
                        if (chars <= 10)
                        {
                                printf("Enter a range from 0 - %d : ", chars);
                                scanf("%d %d", &n1, &n2);
                                if (n1 > n2 || n1 < 0)
                                {
                                        printf("Error !");
                                        return 1;
                                }
                                else if (n2 > chars || n2 < 0)
                                {
                                        printf("Error !");
                                        return 1;
                                }
                        }
                        else
                        {
                                printf("Enter a range from 0 - 10 : ");
                                scanf("%d %d", &n1, &n2);
                                if (n1 > n2 || n1 < 0)
                                {
                                        printf("Error !");
                                        return 1;
                                }
                                else if (n2 > chars || n2 < 0)
                                {
                                        printf("Error");
                                        return 1;
                                }
                        }
                        int s1, s2;
                        printf("Enter a range from 0 - %d : ", chars);
                        scanf("%d %d", &s1, &s2);
                        printf("Your password is: ");
                        for (; r1 < r2; r1++)
                        {
                                printf("%c", alphabet[r1]);
                        }
                        for (; s1 < s2; s1++)
                        {
                                printf("%c", special[s1]);
                        }
                        for (; n1 < n2; n1++)
                        {
                                printf("%c", number[n1]);
                        }
                }
                else
                {
                        int r1, r2;
                        printf("Enter a range from 0 - %d : ", chars);
                        scanf("%d %d", &r1, &r2);
                        int n1, n2;
                        if (chars <= 10 )
                        {
                                printf("Enter a range from 0 - %d : ", chars);
                                scanf("%d %d", &n1, &n2);
                                if (n1 > n2 || n1 < 0)
                                {
                                        printf("Error !");
                                        return 1;
                                }
                                else if (n2 > chars || n2 < 0)
                                {
                                        printf("Error !");
                                        return 1;
                                }
                        }
                        else
                        {
                                printf("Enter a range from 0 - 10 : ");
                                scanf("%d %d", &n1, &n2);
                                if (n1 > n2 || n1 < 0)
                                {
                                        printf("Error !");
                                        return 1;
                                }
                                else if (n2 > chars || n2 < 0)
                                {
                                        printf("Error !");
                                        return 1;
                                }
                        }
                        printf("Your new password is: ");
                        for (; r1 < r2; r1++)
                        {
                                printf("%c", alphabet[r1]);
                        }
                        for (; n1 < n2; n1++)
                        {
                                printf("%c", number[n1]);
                        }
                }
        }
        else
        {
                int r1, r2;
                printf("Enter a range from 0 - %d: ", chars);
                scanf("%d %d", &r1, &r2);
                printf("Enter a range from 0 - %d: ", chars);
                int s1, s2;
                scanf("%d %d", &s1, &s2);
                printf("Your new password is: ");
                for (; r1 < r2; r1++)
                {
                        printf("%c", alphabet[r1]);
                }
                for (; s1 < s2; s1++)
                {
                        printf("%c", special[s1]);
                }
        }
        return 0;
}
