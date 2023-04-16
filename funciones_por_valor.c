/* ejercicio 1. 

#include <stdio.h>
int cubo(int base);
main(){
int numero;
for(numero=1; numero<=5; numero++){
	printf("El cubo del numero %d es %d\n", numero, cubo(numero));
}
return 0;
}

int cubo(int base){
int potencia;
potencia = base * base * base;
return potencia;
}
*/


/* ejercicio 2.

#include <stdio.h>
float sumar(float num1, float num2);
float restar(float num1, float num2);
float multiplicar(float num1, float num2);
float dividir(float num1, float num2);
main () {
     int op;
     float num1, num2, result;
     while (op != 0) {
        result=0;
        printf ("Ingrese primer numero: ");
        scanf ("%f",&num1);
        printf ("Ingrese segundo numero: ");
        scanf ("%f",&num2);
        printf ("\n\nINGRESE UNA OPERACION\n");
        printf ("1 - SUMAR\n");
        printf ("2 - RESTAR\n");
        printf ("3 - MULTIPLICAR\n");
        printf ("4 - DIVIDIR\n");
        printf ("0 - SALIR\n");
        scanf ("%d",&op);
        switch (op) {
            case 1: result=sumar(num1, num2); break;
            case 2: result=restar(num1, num2); break;
            case 3: result=multiplicar(num1, num2); break;
            case 4: result=dividir(num1, num2); break;
            case 0: break;
        }
        printf ("\n\nEl resultado de  la operacion es: %5.2f\n\n", result);
        system("pause");
        system("cls");
    }
}

float sumar(float num1, float num2) {
  float resultado;
  resultado=num1+num2;
  return resultado;
}

float restar(float num1, float num2) {
  float resultado;
  resultado=num1-num2;
  return resultado;
}

float multiplicar(float num1, float num2) {
  float resultado;
  resultado=num1*num2;
  return resultado;
}

float dividir(float num1, float num2) {
  float resultado;
  resultado=num1/num2;
  return resultado;
} */


/* ejercicio 3.
#include <stdio.h>
#define PI 3.141592
float diametro(float);
float circunferencia(float);
float area(float);
main() {
	float radio;
	printf("Introduce el radio de un circulo: ");
	scanf("%f", &radio);
	printf("\n\n");
	printf("El diametro del circulo \"radio * 2\" es: %5.2f \n",diametro(radio));
	printf("La circunferencia del c�rculo \"PI * diametro\" es: %5.2f \n",circunferencia(diametro(radio)));
	printf("El area del circulo \"PI * (radio*radio)\" es: %5.2f \n",area(radio));
}

 float diametro(float r) {
	float diam;
	diam=r*2;
	return diam;
}

 float circunferencia(float d) {
	float circ;
	circ=d*PI;
	return circ;
}

 float area(float r) {
	float area;
	area=PI*(r*r);
	return area;
} */


/* ejercicio 4.
#include <stdio.h>
#define SIZE 10
float media(float[SIZE], int);
float maximo(float[SIZE], int);
main() {
    float vector[SIZE];
    int n, i;
    printf("Con cuantos valores desea trabajar? ");
    printf("(el numero debera ser menor que 20)\n");
    do {
        printf("Cantidad: ");
        scanf("%d", &n);
    } while (n<2 || n>19);
    printf("\nIntroduzca los %d valores:\n",n);
    for (i=0 ;i<n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vector[i]);
    }
    printf("\n\n");
    printf("Los valores ingresados son: ");
    for (i=0 ;i<n; i++) {
        printf("%5.2f ", vector[i]);
    }
    printf("\nMedia= %5.2f", media(vector,n));
    printf("\nMaximo= %5.2f\n", maximo(vector,n));
}

float media(float valores[], int num) {
    float suma=0.0, med;
    int i;
    for (i=0; i<num ;i++) {
        suma = suma + valores[i];
    }
    med = suma/num;
    return (med);
}

float maximo(float valores[], int num) {
    int i;
    float max;
    max= valores[0];
    for (i=1; i<num ;i++) {
        if (valores[i] > max) max = valores[i];
    }
    return (max);
} */

/*  ejercicio 5.
#include <stdio.h>
void funcionNumeroPrimo(int num);

main() {

int numero;
printf ("Ingrese un numero: ");
scanf("%d", &numero);
funcionNumeroPrimo(numero);

}

void funcionNumeroPrimo (int num1) {
int i,a=0;
for(i=1;i<=num1;i++) {
    if(num1%i==0)
    a++;
}

if(a==2) {
    printf("\nEl numero es primo\n");
}
else {
    printf("\nEl numero no es primo\n");
}

}
*/