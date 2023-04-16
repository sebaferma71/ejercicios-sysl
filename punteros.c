/* ejercicio 1.

85
26
23
5
5
6
6
98
*/


/* ejercicio 2. 

a. ¿Qué valor es asignado a pv? F8D
b. ¿Qué valor es representado por *pv?   B
c. ¿Qué valor es asignado a u?   C
d. ¿Qué valor es asignado a pu?	 F8C
e. ¿Qué valor es representado por *pu?   C
*/

/* ejercicio 3.

#include <stdio.h>

int main()
{
char c;
c='e';
printf("%c",c); //e
c++;
printf("%d",c);  //102
printf("%c",c);   //f
}
*/


/* ejercicio 4.

#include <stdio.h>
main() {
int num ,* punt , tol;
num=8;
punt= &num;
tol=*punt;
printf("el total es: %d",tol);  //8

}
*/

/* ejercicio 5.

#include <stdio.h>
main() {
int * x;
int num=23;
int a;
x = &num;
a = *x;
printf("%d",a); //23 igual que num
}
*/


/* ejercicio 6.

#include <stdio.h>
void micopy(char *, char *);
main() {
    char cad1[20], cad2[10];
    printf("Ingrese una palabra para copiar:\n");
    scanf("%s",cad1);
    micopy(cad2,cad1);
    printf("\n\nLas palabras despues de la copia quedaron asi: %s %s\n",cad1,cad2);
}

void micopy(char * cad1, char * cad2) {
    while ( (*cad1++ = *cad2++) != '\0' ) ;

}
*/