#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main()
{
    char entrada[MAX];
    char saida[MAX];
    char c, c1, cResto, cQuociente, v;
    FILE *f;
    FILE *f1;
    int l1, l2, l3 = 1;
    int aux = 0, resto = 0, quociente = 0, vResto = 0, vQuociente = 0;
    while (l1)
    {
        int l4 = 1;
        l3 = 1;
        printf("Selecione a operacao:\n");
        printf("1 - Codificar\n");
        printf("2 - Decodificar\n");
        scanf("%d", &l2);
        if(l2==1)
        {
            while (l2==1)
            {
                printf("Digite o caminho do arquivo de entrada: ");
                scanf("%s", &entrada);
                f = fopen(entrada, "r");
                if(f != NULL)
                {
                    l2=0;
                }
            }
            while (l3==1)
            {
                printf("Digite o caminho do arquivo de saida: ");
                scanf("%s", &saida);
                f1 = fopen(saida, "w");
                if(f1 != NULL)
                {
                    l3=0;
                }
            }
            while (fscanf(f, "%c", &c)!=EOF)
            {
                aux = c;
                resto = c % 16;
                quociente = c / 16;
                switch (resto)
                {
                case 10:
                    cResto = 'A';
                    vResto = 1;
                    break;
                case 11:
                    cResto = 'B';
                    vResto = 1;
                    break;
                case 12:
                    cResto = 'C';
                    vResto = 1;
                    break;
                case 13:
                    cResto = 'D';
                    vResto = 1;
                    break;
                case 14:
                    cResto = 'E';
                    vResto = 1;
                    break;
                case 15:
                    cResto = 'F';
                    vResto = 1;
                    break;
                }
                switch (quociente)
                {
                case 10:
                    cQuociente = 'A';
                    vQuociente = 1;
                    break;
                case 11:
                    cQuociente = 'B';
                    vQuociente = 1;
                    break;
                case 12:
                    cQuociente = 'C';
                    vQuociente = 1;
                    break;
                case 13:
                    cQuociente = 'D';
                    vQuociente = 1;
                    break;
                case 14:
                    cQuociente = 'E';
                    vQuociente = 1;
                    break;
                case 15:
                    cQuociente = 'F';
                    vQuociente = 1;
                    break;
                }
                if(vResto == 1)
                {
                    if(vQuociente == 1)
                    {
                        fprintf(f1, "%c%c", cQuociente, cResto);
                    }
                    else
                    {
                        fprintf(f1, "%d%c", quociente, cResto);
                    }
                }
                if(vQuociente == 1)
                {
                    fprintf(f1, "%c%d", cQuociente, quociente);
                }
                if(vQuociente == 0 && vResto == 0)
                {
                    fprintf(f1, "%d%d", quociente, resto);
                }
                vResto = 0;
                vQuociente = 0;
            }
            fclose(f);
            fclose(f1);
            printf("OPERACAO EFETUADA COM SUCESSO\n");
            while (l4>0)
            {
                printf("Deseja efetuar outra operacao? (s/n): ");
                scanf(" %c", &v);
                if(v=='s')
                {
                    l4 = 0;
                }
                if(v=='n')
                {
                    return 0;
                }
            }
        }
        //DECODIFICAÇÃO
        l4 = 1;
        l3 = 1;
        if(l2==2)
        {
            while (l2==2)
            {
                while (l2==2)
                {
                    printf("Digite o caminho do arquivo de entrada: ");
                    scanf("%s", &entrada);
                    f = fopen(entrada, "r");
                    if(f != NULL)
                    {
                        l2=0;
                    }
                }
                while (l3==1)
                {
                    printf("Digite o caminho do arquivo de saida: ");
                    scanf("%s", &saida);
                    f1 = fopen(saida, "w");
                    if(f1 != NULL)
                    {
                        l3=0;
                    }
                }
                while (fscanf(f, "%c%c", &c, &c1)!=EOF)
                {
                    int valor;
                    char c2;
                    switch (c)
                    {
                    case 'A':
                        quociente = 10;
                        break;
                    case 'B':
                        quociente = 11;
                        break;
                    case 'C':
                        quociente = 12;
                        break;
                    case 'D':
                        quociente = 13;
                        break;
                    case 'E':
                        quociente = 14;
                        break;
                    case 'F':
                        quociente = 15;
                        break;
                    default:
                        quociente = c;
                        switch (quociente)
                        {
                        case 48:
                            quociente = 0;
                            break;
                        case 49:
                            quociente = 1;
                            break;
                        case 50:
                            quociente = 2;
                            break;
                        case 51:
                            quociente = 3;
                            break;
                        case 52:
                            quociente = 4;
                            break;
                        case 53:
                            quociente = 5;
                            break;
                        case 54:
                            quociente = 6;
                            break;
                        case 55:
                            quociente = 7;
                            break;
                        case 56:
                            quociente = 8;
                            break;
                        case 57:
                            quociente = 9;
                            break;
                        }
                    }
                    switch (c1)
                    {
                    case 'A':
                        resto = 10;
                        break;
                    case 'B':
                        resto = 11;
                        break;
                    case 'C':
                        resto = 12;
                        break;
                    case 'D':
                        resto = 13;
                        break;
                    case 'E':
                        resto = 14;
                        break;
                    case 'F':
                        resto = 15;
                        break;
                    default:
                        resto = c1;
                        switch (resto)
                        {
                        case 48:
                            resto = 0;
                            break;
                        case 49:
                            resto = 1;
                            break;
                        case 50:
                            resto = 2;
                            break;
                        case 51:
                            resto = 3;
                            break;
                        case 52:
                            resto = 4;
                            break;
                        case 53:
                            resto = 5;
                            break;
                        case 54:
                            resto = 6;
                            break;
                        case 55:
                            resto = 7;
                            break;
                        case 56:
                            resto = 8;
                            break;
                        case 57:
                            resto = 9;
                            break;
                        }
                    }
                    valor = (quociente * 16)+resto;
                    c2 = valor;
                    fprintf(f1, "%c", c2);
                    quociente = 0;
                    resto = 0;
                }
                fclose(f);
                fclose(f1);
                printf("OPERACAO EFETUADA COM SUCESSO\n");
                while (l4>0)
                {
                    printf("Deseja efetuar outra operacao? (s/n): ");
                    scanf(" %c", &v);
                    if(v=='s')
                    {
                        l4 = 0;
                    }
                    if(v=='n')
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}
