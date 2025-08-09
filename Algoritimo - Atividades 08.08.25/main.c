#include <stdio.h>
#include <stdlib.h>
//CONJUNTO DE ATIVIDADES - UP 08/08/25

/*
int main()
{
    double pi, area, raio, perimetro;


    printf("Digite um raio do circulo: ");
    scanf ("%lf", &raio);

    pi = 3.14;
    area = pi * (raio * raio);
    perimetro = 2 * pi * raio;

    printf ("O Valor do Perimetro do Circulo: %.2lf\nValor da Area do Circulo:  %.2lf", perimetro, area);

return 0;

}
*/
//----------------
/*

int main()
{

    int dias, idade, viveu;

    printf("Digite sua] idade: ");
    scanf ("%ld", &idade);

    dias = 365;
    viveu= idade * dias;

    printf ("O Usuario viveu %d! ta velinho em..", viveu);

    return 0;
    }
*/
//----------------
/*
int main()
{
    double num, porcentagem;


    printf("Digite um numero real: ");
    scanf ("%lf", &num);

    porcentagem = (num * 0.04);

    printf ("O 4%% do numero real é: %.2lf", porcentagem);


    return 0;
}
*/
//----------------
/*
int main ()
{
    int nota1,nota2,nota3, soma;
    double media;

    printf("Digite a 1° Nota do Aluno: ");
    scanf ("%d", &nota1);
    printf("Digite a 2° Nota do Aluno: ");
    scanf ("%d", &nota2);
    printf("Digite a 3° Nota do Aluno: ");
    scanf ("%d", &nota3);

    soma  = nota1 + nota2 + nota3;

    media = soma / 3;

    printf("A Media do Aluno em Algaritimos foi: %.2lf", media);

    return 0;
}
*/
//----------------
/*
int main ()
{
    int nota1,nota2,nota3;
    double mediaponderada;

    printf("Digite a 1 Nota do Aluno: ");
    scanf ("%d", &nota1);
    printf("Digite a 2 Nota do Aluno: ");
    scanf ("%d", &nota2);
    printf("Digite a 3 Nota do Aluno: ");
    scanf ("%d", &nota3);

    mediaponderada = (nota1*2+nota2*3+nota3*5) / 10;

    printf ("A Media Ponderada Sera: %.2lf", mediaponderada);

    return 0;
}
*/
//----------------
/*
int main ()

{
    double tempo, distancia, vm;
    printf ("Qual a distancia percorrida (KM)? ");
    scanf ("%lf", &distancia);

    printf ("Qual o tempo percorrido (HR)? ");
    scanf ("%lf", &tempo);

    vm = distancia / tempo;

    printf ("A Velocidade media do veiculo durante a viagem foi: %.2lf", vm);

    return 0;
}
*/
//----------------
/*
int main ()

{
   double carro, valorfinal;

   printf ("Qual o valor do seu carro? ");
   scanf ("%lf", &carro);

   valorfinal = carro + (carro *  0.28);
   valorfinal += carro * 0.45;

   printf ("O Valor final do veiculo foi: %.2lf", valorfinal);

   return 0;

}
*/
//----------------
/*
int main ()
{
    int num;

    printf("Me Informe um numero de 3 Casas: \n");
    scanf ("%d", &num);

    num = (num / 10) % 10;

    printf ("O Numero do Meio foi: %d", num);

    return 0;
}
*/
//----------------
/*
int main ()
 {
     int dd, dia, mes, ano;

     printf("Me informe uma data no formato (DDMMAA): ");
     scanf ("%d",&dd);

     dia = dd /10000 ;
     mes = dd % 10000 / 100 ;
     ano = dd % 100;

    printf ("Dia: %d\nMes: %d\nAno: %d\n", dia, mes, ano);

    return 0;

 }
 */
