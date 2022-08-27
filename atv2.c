/*
#include <stdio.h>
#include<conio.h>

int main(){
    
    char nome[30];
    float salario;
    int vendas;
    int porcento;
    float total;

    printf("digite seu primeiro nome: ");
    gets(nome);

    printf("digite seu salario: ");
    scanf("%f", &salario);

    printf("digite a quantidade de vendas realizadas: ");
    scanf("%d", &vendas);

    porcento = salario*((float)vendas*0.15);
    total = salario+porcento;
    
    printf("%s\n%.2f    salario do mes: %.2f   \n%d", nome,salario,total,porcento);

    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int tempo;
    int velocidade;
    int calculo;
    int km = 12;
    int distancia;
    double litro = 1;

    printf("digite o tempo gasto na viajem: ");
    scanf("%d", &tempo);

    printf("digite a velocidade durante a viajem: ");
    scanf("%d", &velocidade);

    calculo = velocidade*tempo;
    distancia = calculo;

    while (km < distancia)
    {
        km = km+ 12;
        litro = litro+1;
    }
    
    printf("foi rodado um total de: %d km\n foi gasto um total de: %.2f litros.", km, litro);

    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    float x1;
    float y;
    float y1;
    float calculo;
    float calculo1;
    float soma;

    printf("digite um numero x: ");
    scanf("%f", &x);

    printf("digite outro numero x2: ");
    scanf("%f", &x1);

    
    printf("digite um numero y: ");
    scanf("%f", &y);

    printf("digite outro numero y2: ");
    scanf("%f", &y1);

    calculo = ((pow(x, 2) - (pow(x1, 2)) ));

    calculo1 = ((pow(y, 2) - (pow(y1, 2)) ));

    soma = calculo + calculo1;

    printf(" o resultado: %.2f", soma);



    return 0;
}

*/


/*
#include <stdio.h>

int main(){

    int valor;

    printf("digite um valor: ");
    scanf("%d", &valor);

    int var_cem = valor/100; //pego a quantidade de notas de 100
    
    int rest_cem = valor%100; // pego a quantidade de notas que são menores que 100
    
    int var_50 = rest_cem/50; //pego a quantidade de notas de 50
    
    int rest_cinquenta = rest_cem%50; // pego a quantidade de notas que são menores que 50
    
    int var_25 = rest_cinquenta/25; // pego a quantidade de notas de 25
    
    int rest_vinte = rest_cinquenta%25; //pego a quantidade de notas que são menores que 25

    int var_10 = rest_vinte/10; //pego a quantidade de notas de 10

    int rest_10 = rest_vinte%10; //pego a quantidade de notas menores que 10

    int var_5 = rest_10/5; //pego a quantidade de notas de 5 

    int rest_5 = rest_10%5; //pego a quantidade de notas menores que 5

    int var_1 = rest_5/1; //pego a quantidade de notas de 1

    printf("notas de 100: %d\nnotas de 50: %d\nnotas de 25: %d\nnotas de 10: %d\nnotas de 5: %d\nnotas de 1: %d", var_cem, var_50, var_25, var_10, var_5, var_1);
    
    
    


    return 0;
}
*/