#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_number(char buffer[])
{
    int i;
    for (i = 0; buffer[i] != '\0'; i++)
    {
        if (isdigit(buffer[i]))
            return 1;
    }
    return 0;
}

int main()
{
    FILE *fp = fopen("sample.c", "r");

    if (fp == NULL)
    {
        printf("\n Error Opening the File");
        exit(0);
    }

    char line[100], temp[100], preprocessor[100], keyword[100], function[100], identifier[100], operator[100], non_operators[100], literals[100];
    int i = 0, j = 0, k = 0, l = 0;
    char operator_list[13][100] = {"+", "-", "*", "/", "=", "%", ".", ">", "<", "^", "|", "&", "!"};
    char non_operator_list[10][100] = {"{", "}", "(", ")", ";", ",", ":", "?", "_", "$"};
    char key_word[32][10] = {"break", "char", "continue", "default", "double", "float", "for", "if", "int", "long", "return", "short", "void"};

    printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
    printf("LINES\t| PREPROCESSOR\t\t | KEYWORD\t| FUNCTION\t | IDENTIFIER\t | OPERATOR\t | NON-OPERATOR\t | LITERALS\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------\n");

    while (fgets(line, 100, fp))
    {
        i++;
        char *str = strtok(line, " \n");
        while (str != NULL)
        {
            strcpy(preprocessor, "\t\t ");
            strcpy(keyword, "\t ");
            strcpy(function, "\t");
            strcpy(identifier, "\t");
            strcpy(operator, "\t");
            strcpy(non_operators, "\t");
            strcpy(literals, "\t");
            strcpy(temp, str);

            for (j = 0; j < 32; j++)
                if (strcmp(temp, key_word[j]) == 0)
                    break;

            for (k = 0; k < 13; k++)
                if (strcmp(temp, operator_list[k]) == 0)
                    break;

            for (l = 0; l < 10; l++)
                if (strcmp(temp, non_operator_list[l]) == 0)
                    break;

            char *pre = strchr(str, '#');
            char *fun = strchr(str, ')');

            if (pre != NULL)
                strcpy(preprocessor, str);

            else if (fun != NULL)
                strcpy(function, str);

            else if (j != 32)
            {
                strcpy(keyword, str);
                strcat(keyword, "\t");
            }
            else if (k != 13)
            {
                strcpy(operator, str);
                strcat(operator, "\t");
            }

            else if (l != 10)
            {
                strcpy(non_operators, str);
                strcat(non_operators, "\t");
            }

            else if (is_number(temp))
            {
                strcpy(literals, str);
                strcat(literals, "\t");
            }

            else
            {
                strcpy(identifier, str);
                strcat(identifier, "\t");
            }
            printf(" %d\t| %s\t| %s\t| %s\t | %s\t | %s\t | %s\t | %s \n", i, preprocessor, keyword, function, identifier, operator, non_operators, literals);
            str = strtok(NULL, " \n");
        }
    }
    return 0;
}
