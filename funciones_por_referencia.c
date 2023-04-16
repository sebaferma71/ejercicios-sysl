/* ejercicio 7.
#include <stdio.h>
#include <ctype.h>

int verificaDigitos (char *, int *);

main(){

char cadena[20];
int cantDigitos=0;
int cant_caracteres_cadena=0;

printf("Ingrese la cadena: ");
scanf("%s",cadena);

cant_caracteres_cadena = verificaDigitos(cadena, &cantDigitos);

printf("La cadena %s tiene una longitud de %i y tiene a su vez %i digitos.", cadena, cant_caracteres_cadena, cantDigitos);

}


int verificaDigitos (char * palabra, int * cantidadDig) {
int i;
int cant_caracteres_pal = strlen(palabra);

for (i=0; i< cant_caracteres_pal;i++) {
    if (isdigit(palabra[i])) {
       (*cantidadDig)++;
    }
}
return cant_caracteres_pal;
}

*/


/* ejercicio 8.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char * verif (char []);

main(){

char * letrasynros;
char palabra[10];

printf("Ingrese palabra: ");
scanf("%s",palabra);

letrasynros = verif(palabra);
printf("La cadena %s es correcta", letrasynros);
}

char * verif(char palabra []){
static char resp[3];
int i;

strcpy(resp,"SI");

for (i=0; i<strlen(palabra);i++)

if (isalnum(palabra[i])==0) {
   strcpy(resp,"NO");
}
return resp;
}

*/


/* ejercicio 9.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void carga (char *, int *);
void esVocal (char, int*);
int esConsonante (char);

main() {
     char texto[1000];
     int cant,i,contv=0,contc=0,respv=0;
     printf ("Ingrese el texto: ");
     carga(texto,&cant);
     printf ("\n\nEl texto ingresado es: %s y su longitud es: %d \n\n",texto,cant);
     for (i=0;i<=cant;i++){
         esVocal(texto[i],&respv);
         contv=contv+respv;
         contc = contc + esConsonante(texto[i]);
     }
     printf ("Tiene %4.1f %c de vocales y", (float)contv*100/cant , 37);
     printf (" %4.1f %c de consonantes. \n\n",(float)contc*100/cant , 37);
     system("pause");
}


void carga (char * cad,int *cont) {
     *cont=0;
     while (*cont<=999 && (cad[*cont]=getchar())!=EOF) {
           *cont = *cont+1;
           }
     cad[*cont]='\0';

     }

void esVocal (char letra, int * est) {
     if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
               *est = 1;
               }
     else {
          *est=0;
          }
}


int esConsonante (char letra) {
    if (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' && !isspace (letra) && !ispunct(letra) && !isdigit(letra)) {
              return 1;
              }
    else {
         return 0;
         }
}

*/


/* ejercicio 10.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char * carga (int *);
char * cambia_texto (char *, int);

main () {
     char *po,*pc,copia[100];
     int cont;
     printf("Ingrese el texto a cargar: ");
     po = carga (&cont);
     strcpy(copia,po);
     pc = cambia_texto(copia,cont);
     printf ("\nEl texto: %s\n", po);
     printf ("\ncambiado se lee: %s\n", pc);
     system ("pause");
     }


char * carga (int *cant) {
     static char text[100];
     *cant=0;

    while (*cant<=99 && (text[*cant]=getchar())!= EOF) {
           *cant=*cant+1;
           }
     text[*cant]='\0';
     return text;
     }


char * cambia_texto (char * text , int cant) {
     int i=0;

     for (i=0;i<=cant;i++) {
         if (isdigit(text[i])) {
                               text[i]='*';
                               }
         }
     return text;
     }
*/



/* ejercicio 11.
#include <stdio.h>
#include <string.h>

struct dia_semana {
    int numero;
    char dia[10];
};

struct dias * cargaDiasSemana();

int main() {

char dias[7][10];

struct dia_semana * diasStruct;

strcpy(dias[0], "lunes");
strcpy(dias[1], "Martes");
strcpy(dias[2], "Miercoles");
strcpy(dias[3], "Jueves");
strcpy(dias[4], "Viernes");
strcpy(dias[5], "Sabado");
strcpy(dias[6], "Domingo");

int cont, i, j;

diasStruct = cargaDiasSemana();

for(i=0; i<7; i++) {
        cont=0;
        for(j=0 ; j<7; j++) {
            if ( strcmp(dias[i] , diasStruct[j].dia) == 0 ) {
                  printf("\n Se encontro el dia ingresado, es: %s", dias[i]);
            }
            else cont++;
            }

            if(cont==7) {
                printf("\n No se encuentra el dia %s del arreglo bidimensional en el arreglo de estructura\n", dias[i]);
            }
}
return 0;

}


struct dias * cargaDiasSemana() {

static struct dia_semana arreglo_dias[7];

arreglo_dias[0].numero=1;
strcpy(arreglo_dias[0].dia, "Lunes");

arreglo_dias[1].numero=2;
strcpy(arreglo_dias[1].dia,"Martes");

arreglo_dias[2].numero=3;
strcpy(arreglo_dias[2].dia,"Miercoles");

arreglo_dias[3].numero=4;
strcpy(arreglo_dias[3].dia,"Jueves");

arreglo_dias[4].numero=5;
strcpy(arreglo_dias[4].dia,"Viernes");

arreglo_dias[5].numero=6;
strcpy(arreglo_dias[5].dia,"Sabado");

arreglo_dias[6].numero = 7;
strcpy(arreglo_dias[6].dia, "Domingo");

return arreglo_dias;

}
*/


/* ejercicio 12.

#include <stdio.h>
#include <string.h>

struct dia_semana {
    int num;
    char dia[10];
};

char * cargaDiasSemana(struct dia_semana *);

int main() {
static struct dia_semana arreglo_dias[4];

arreglo_dias[0].numo=2;
strcpy(arreglo_dias[0].dia,"Lunes");
arreglo_dias[1].num=3;
strcpy(arreglo_dias[1].dia,"Martes");
arreglo_dias[2].num=5;
strcpy(arreglo_dias[2].dia,"Jueves");

char * respuesta;
respuesta=cargaDiasSemana(arreglo_dias);
printf("%s",respuesta);

return 0;
}

char * cargaDiasSemana(struct dia_semana * arregloStructDias) {
char dias[3][10;

strcpy(dias[0],"lunes");
strcpy(dias[1],"Martes");
strcpy(dias[2],"Jueves");
int cont=0;

for(int j=0;j<3;j++){
    for(int i=0;i<4;i++){
        if(strcmp(dias[j],arregloStructDias[i].dia)==0) {
            cont++;
        }
        else {
        }
    }
}

if(cont==3){
    return "todos los días son correctos";
}
else {
    return "algún dia es incorrecto";
}
}
*/