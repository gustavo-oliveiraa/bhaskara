#include<stdio.h>//biblioteca do printf e scanf
#include<math.h>// biblioteca dos comandos matematicos
int main(){//inicio do algoritimo, função main
	double A, B, C, X1, X2, DELTA;//declaração das variaveis
	printf("Digite o valor de A:");//codigo para aparecer na tela
	scanf("%lf", &A);//salva o dado na memoria
	printf("Digite o valor de B:");
	scanf("%lf", &B);
	printf("Digite o valor de C");
	scanf("%lf", &C);
	DELTA = pow(B,2) - 4 * A * C;//pow-comando para calculo de potencia
    if (A == 0 or DELTA < 0)//or-operador logico(para ter uma condiçao ao executar o algoritimo
	        printf("Impossivel calcular!\n");
	    else{//so pode continuar o algoritimo se as condiçoes estiverem de acordo
	        X1 = (-(B) + sqrt(DELTA))/(2 * A);//sqrt-comando para calculo de raiz
	        X2 = (-(B) - sqrt(DELTA))/(2 * A);
	        printf("X1 = %.5lf\tX2 = %5.lf\t", X1, X2);//codigo para aparecer o resultado da operação
	    }
	return 0;
	
}
