#include <regex.h>
int validar_cpf(char *cpf)
{

    int i, soma, resto, digito1, digito2;
    int peso1[9] = {10, 9, 8, 7, 6, 5, 4, 3, 2,};
    int peso [10] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};

    soma = 0;
    for (i = 0; i < 9; i++)
    {
        soma += (cpf[i]- '0') * peso1[i];
    }
    resto = soma % 11;
    if (resto <2)
    {
        digito1 = 0;
    }
    else
    {
        digito1 = 11 - resto;
    }

    soma = 0;
    for(i = 0; i < 10; i++)
    {
        soma += (cpf[i] - '0') *peso2[i];
    }
    resto = soma % 11;
    if(resto <2)
    {
        digito2 = 0;

    }
    else
    {
        digito2 = 11 - resto;
    }
}
    

    return (digito1 == cpf[9] - '0' && digito2 == cpf[10] -'0');

int validar_email(char *email)
{
    regex_t regex;
    int reti;
    char *patern = "^[a-zA-Z0-9._%+-]_@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$";

    reti = regcomp(&regex, pattern, REG_EXTENDED);
    if (reti)
    {
        fprintf(stderr,"Regex error\n");
        return 0;

    }

    reti= regexec(&regex, email, 0, NULL, 0);
    regfree(&regex);

    return !reti;
    
}

