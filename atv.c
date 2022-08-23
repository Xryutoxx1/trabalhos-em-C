
/*
#include <stdio.h>

int main(){

    int numero1;
    int numero2;
    int subtracao;

    printf("\ndigite um numero: ");
    scanf("%d", &numero1);

    printf("\ndigite outro numero");
    scanf("%d", &numero2);

    subtracao = numero1 - numero2;

    printf("a subtracao de %d e %d corresponde a  %d", numero1, numero2, subtracao);

    return 0;
}
*/


/*
#include <stdio.h>

int main(){

    int num1; 
    int num2;
    int num3;
    int multi;

    printf("digite um numero: ");
    scanf("%d", &num1);

    printf("\ndigite outro numero");
    scanf("%d", &num2);

    printf("\ndigite mais um numero");
    scanf("%d", &num3);

    multi = num1 * num2 * num3;

    printf("a multiplicacao dos numeros e %d", multi);

    return 0;
}
*/



/*
#include <stdio.h>

int main(){

    float produto;
    float calculo;

    printf("digite o preco do produto: ");
    scanf("%f", &produto);

    calculo = produto - (produto*0.10);

    printf("o preco com desconto fica %.2f reais", calculo);

    return 0;
}
*/


/*
#include <stdio.h>

int main(){

    float valor_final;
    float valor;
    float calculo = 0;
    int quantidade = 0;

    printf("Digite o valor final para criar a peca: ");
    scanf("\n%f", &valor_final);

    printf("\ndigite o valor do ingresso");
    scanf("%f", &valor);

    while (valor_final > calculo)
    {
        calculo = calculo + valor;
        quantidade = quantidade+1;
    }
    
    printf("a quantidade de ingressos que voce precisa vender e de %d", quantidade);



    return 0;
}

*/

/*
#include <stdio.h>

int main(){

    float salario;
    int quant_vends;
    float multiplica;
    float somafinal;


    printf("digite o seu salario");
    scanf("\n%f", &salario);

    printf("digite a quantidade de vendas feitas");
    scanf("\n%d", &quant_vends);

    multiplica = ((salario*0.04) * (float) quant_vends);
    somafinal = multiplica+salario;

    printf("seu salario final e de %2.f", somafinal);


    return 0;
}

*/

/*
#include <stdio.h>

int main(){

    int maior;
    int menor;
    int multi;
    int divide;

    printf("Qual valor da base maior? ");
    scanf("\n%d", &maior);

    printf("qual valor da base menor? ");
    scanf("\n%d", &menor);

    multi = maior*menor;
    divide = multi/2;

    printf("a area do trapezio fica de %d", divide);

    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main(){


    float cateto_ops;
    float cateto_adj;
    float calculo;
    float raiz;

    printf("valor do cateto oposto: ");
    scanf("%f", &cateto_ops);

    printf("valor do cateto adjacente: ");
    scanf("%f", &cateto_adj);

    calculo = (cateto_adj* cateto_adj) + (cateto_ops*cateto_ops);
    raiz = sqrt(calculo);

    printf("o valor da hiptenusa fica em %f", raiz);


    return 0;
}
*/



#include <stdio.h>

int main()
{
    float raio;
    float area;
    float volume;
    float comprimento;


    printf("digite o valor do raio: ");
    scanf("%f", &raio);

   comprimento = 2*3.14*raio;
   area = 4*3.14*(raio*raio);
   volume = 3/((4*3.14)*(raio*raio*raio));

   printf("o valor do comprimento %2.f\no valor da area %2.f\ne o valor do volume %f", comprimento, area, volume);


    return 0;
}
