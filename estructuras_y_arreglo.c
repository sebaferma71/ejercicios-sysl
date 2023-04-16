/* ejercicio 1.
#include <stdio.h>
#include <string.h>
struct alumnos {
    char nombre[50];
    int legajo;
    char domicilio[60];
    char turno;
};
main() {
    struct alumnos alu;
    strcpy(alu.nombre,"Juan Gomez");
    alu.legajo = 12245;
    strcpy(alu.domicilio,"San Juan 1056");
    alu.turno = 'M';
    printf("\n\n");
    printf("Nombre: %s, Legajo: %d, Domicilio: %s, Turno: %c.",alu.nombre, alu.legajo, alu.domicilio, alu.turno);
    printf("\n\n");
} 
*/

/* ejercicio 2.
#include <stdio.h>

struct alumnos {
int cod;
char nom[10];
}alum;

main()
{
 alum.cod=34;

printf("%d", alum.cod);
}

R: El alcance de la variable es global

*/


/* ejercicio 3.
#include <stdio.h>

struct alumnos {
char nom[20];
char turno;
};


main() {
    
struct alumnos alum,alum1;

alum.turno='b';
strcpy(alum.nom,"esteban");
alum1.turno='b';
strcpy(alum1.nom,"esteban");

if(alum1.turno==alum.turno){
    printf("Los alumnos pertenecen al mismo turno");
}
else{
    printf("Los alumnos no pertenecen al mismo turno");
}

}
*/


/* ejercicio 4.
#include <stdio.h>
#include <string.h>
struct alumnos {
    char nombre[50];
    char legajo [15];
    char domicilio[60];
    char turno;
};
main() {
    struct alumnos alu[300];
    strcpy(alu[0].nombre,"Juan Gomez");
    strcpy(alu[0].legajo,"12245");	    
    strcpy(alu[0].domicilio,"San Juan 1056");
    alu[0].turno = 'M';
    printf("\n\n");
    printf("Nombre: %s, Legajo: %d, Domicilio: %s, Turno: %c.",alu[0].nombre, alu[0].legajo, alu[0].domicilio, alu[0].turno);
    printf("\n\n");
} */

/* ejercicio 5.
#include <stdio.h>
#include <string.h>
struct alumnos {
    char apellido[50];
    char nombre[50];
    int altura;
};

main() {
    struct alumnos alu[400];
    int i, cant_alu, m_masalto, p_masalto;

    // carga de datos
    for (i=0; i<400; i++) {
        printf("\n\nAlumno Nro. %d   (ingrese FIN en Apellido para terminar la carga de alumnos)\nApellido: ", i+1);
        scanf("%s",alu[i].apellido);
        if (strcmp(alu[i].apellido,"FIN") == 0) break;
        printf("Nombre: ");
        scanf("%s",alu[i].nombre);
        printf("Altura (cm): ");
        scanf("%d",&alu[i].altura);
        fflush(stdin);
    }
    cant_alu = i; //guardo la cantidad de alumnos cargados

    // determino la posicion en el arreglo de estructuras que contiene el alumno mas alto
    m_masalto = alu[0].altura;
    p_masalto = 0;
    for (i=1 ; i<cant_alu ; i++) {
        if (alu[i].altura > m_masalto) {
            m_masalto = alu[i].altura;
            p_masalto = i;
        }
    }

    // muestro los datos del alumno mas alto
    printf("\n\nApellido: %s, Nombre: %s, Altura: %d.",alu[p_masalto].apellido, alu[p_masalto].nombre, alu[p_masalto].altura);
    system("pause");
} */

/* ejercicio 6.
#include <stdio.h>
#include <string.h>
struct clientes {
    char codigo[5];
    char nombre[20];
    char domicilio[20];
    float saldo;
};

main() {
    struct clientes cli[500];
    char cod_cli[5];
    int i, cant_cli, band;

    // carga de datos
    for (i=0; i<500; i++) {
        printf("\n\nCliente Nro. %d   (ingrese 0 en Codigo para terminar la carga de clientes)\nCodigo: ", i+1);
        scanf("%s",cli[i].codigo);
        if (strcmp(cli[i].codigo,"0") == 0) break;
        printf("Nombre: ");
        fflush(stdin);
        gets(cli[i].nombre);
        printf("Domicilio: ");
        fflush(stdin);
        gets(cli[i].domicilio);
        printf("Saldo: ");
        fflush(stdin);
        scanf("%f",&cli[i].saldo);
    }

    cant_cli = i; //guardo la cantidad de clientes cargados

    // consulta de saldo iterativa
    do {
        band=0;
        system("cls");
        printf("Ingrese el codigo del cliente a consultar (0 para finalizar) ");
        scanf("%s",cod_cli);
        if (strcmp(cod_cli,"0") == 0) break;
        for (i=0 ; i<cant_cli ; i++) {
            if (strcmp(cli[i].codigo,cod_cli)==0) {
                    printf("\n\nCodigo: %s, Nombre: %s, Domicilio: %s, Saldo: %5.2f\n\n",cli[i].codigo, cli[i].nombre, cli[i].domicilio, cli[i].saldo);
                    system("pause");
                    band=1;
                    break;
            }
        }
        if (band==0 && strcmp(cod_cli,"0")!=0) {
            printf("\n\nCodigo de cliente inexistente\n\n");
            system("pause");
        }
    } while (strcmp(cod_cli,"0") != 0);
} */


/* ejercicio 7.
#include <stdio.h>
#include <string.h>

struct alumnos {
    char apellido[50];
    int nota;
    int legajo;
};

main() {
    int i, j, k, cant_alu, band, legajo, nota;
    char apellido[50];
    struct alumnos alu[30];
    // carga de datos
    for (i=0; i<30; i++) {
        printf("\n\nAlumno Nro. %d   (ingrese 0 en Legajo para terminar la carga de alumnos)\n", i+1);
        printf("Legajo: ");
        scanf("%d", &alu[i].legajo);
        if (alu[i].legajo == 0) break;
		printf("Apellido: ");
		scanf("%s", alu[i].apellido);
        fflush(stdin);
        printf("Nota: ");
        scanf("%d", &alu[i].nota);        
    }
    
	cant_alu = i; //guardo la cantidad de alumnos cargados
    
	do {
        band=0;
        system("cls");
        printf("Ingrese el legajo del alumno a modificar (0 para finalizar) ");
        scanf("%d", &legajo);
        if (legajo == 0) break;
        for (i=0 ; i<cant_alu ; i++) {
            if (alu[i].legajo == legajo) {
                    do {
                        printf("\nNueva nota: ");
                        fflush(stdin);
                        scanf("%d",&nota);
                    } while (nota < 1 || nota > 10);
                    alu[i].nota = nota;
                    band=1;
                    break;
            }
        }
        if (band==0 && legajo!=0) {
            printf("\n\nLegajo de alumno inexistente\n\n");
            system("pause");
        }
    } while (legajo!=0);

    //ORDENAMIENTO 
    for(j=0 ; j<cant_alu-1 ; j++) {
        for(k=j+1 ; k<cant_alu ; k++) {
                    if (alu[j].legajo > alu[k].legajo) { //compara los legajos y cambia de lugar al mayor
                        legajo = alu[k].legajo;
                        alu[k].legajo = alu[j].legajo;
                        alu[j].legajo=legajo;
                        nota = alu[k].nota;
                        alu[k].nota = alu[j].nota;
                        alu[j].nota = nota;
                        strcpy(apellido, alu[k].apellido);
                        strcpy(alu[k].apellido, alu[j].apellido);
                        strcpy(alu[j].apellido, apellido);
                    }
        }
     }

     //muestro los datos de los alumnos ordenado por legajo
     printf("\n\nLegajo\tApellido\tNota");
     for (i=0 ; i<cant_alu ; i++) {
         printf("\n%d\t%s\t\t%d", alu[i].legajo, alu[i].apellido, alu[i].nota);
     }
     getche();
} */


/* ejercicio 8.
#include <stdio.h>
struct alumnos {
    int legajo;
    char nombre[50];
    float promedio;
};
main() {
    int i, cant_alu, p_promedio;
    float promedio;
    int cant_apro, cant_dic, cant_marzo;
    cant_apro = cant_dic = cant_marzo = 0;
    struct alumnos alu[200];
    // carga de datos
    for (i=0; i<200; i++) {
        printf("\n\nAlumno Nro. %d   (ingrese 0 en Legajo para terminar la carga de alumnos)\nLegajo: ", i+1);
        scanf("%d",&alu[i].legajo);
        if (alu[i].legajo == 0) break;
        printf("Nombre: ");
        scanf("%s",alu[i].nombre);
        do {
            printf("Promedio: ");
            scanf("%f",&promedio);
            fflush(stdin);
        } while (promedio < 1 || promedio > 10);
        alu[i].promedio = promedio;
    }
    cant_alu = i; //guardo la cantidad de alumnos cargados
    p_promedio=0;
    promedio = alu[0].promedio;
    for (i=0; i<cant_alu; i++) {
        if (alu[i].promedio>=7) cant_apro++;
        if (alu[i].promedio>=4 && alu[i].promedio<7) cant_dic++;
        if (alu[i].promedio<4) cant_marzo++;
        if (alu[i].promedio > promedio) {
            promedio = alu[i].promedio;
            p_promedio = i;
        }
    }
    printf("\n\nCantidad de Aprobados: %d, Rinden en Diciembre: %d, Rinden en Marzo: %d.",cant_apro, cant_dic, cant_marzo);
    printf("\n\nAlumno con mejor promedio");
    printf("\nLegajo:%d\nNombre:%s\nPromedio:%5.2f\n",alu[p_promedio].legajo,alu[p_promedio].nombre,alu[p_promedio].promedio);
} */

/* ejercicio 9.
#include <stdio.h>
#include <string.h>

struct dia_semana {
int num;
char dia[10];
};

int main() {

char dia[10];
struct dia_semana arreglo_dias[4];

arreglo_dias[0].num=2;
strcpy(arreglo_dias[0].dia,"Martes");
arreglo_dias[1].num=3;
strcpy(arreglo_dias[1].dia,"Miercoles");
arreglo_dias[2].num=5;
strcpy(arreglo_dias[2].dia,"Viernes");
arreglo_dias[3].num=7;
strcpy(arreglo_dias[3].dia,"Domingo");

printf("Ingrese un d�a de la semana\n");

scanf("%s",dia);

int cont=0;
for(int i=0;i<4;i++) {
if(strcmp(dia,arreglo_dias[i].dia)==0) {
printf("se encontro el dia ingresado, es:\n");
printf("%d----%s",arreglo_dias[i].num,arreglo_dias[i].dia);
}
else {
cont++;
}
if(cont==4) {
printf("No se encuentra en el arreglo el d�a ingresado");
}
}

return 0;
}
*/

/* ejercicio 10
#include <stdio.h>
#include <string.h>

struct dia_semana {
int num;
char dia[10];
};

int main() {

char dias[3][10];
struct dia_semana arreglo_dias[4];

arreglo_dias[0].num=2;
strcpy(arreglo_dias[0].dia,"Martes");
arreglo_dias[1].num=3;
strcpy(arreglo_dias[1].dia,"Miercoles");
arreglo_dias[2].num=5;
strcpy(arreglo_dias[2].dia,"Viernes");
arreglo_dias[3].num=7;
strcpy(arreglo_dias[3].dia,"Domingo");

strcpy(dias[0],"Lunes");
strcpy(dias[1],"Martes");
strcpy(dias[2],"Jueves");
int cont;
for(int j=0;j<3;j++) {
    cont=0;
    for(int i=0;i<4;i++){
        if(strcmp(dias[j],arreglo_dias[i].dia)==0) {
            printf("se encontro el dia ingresado, es:\n");
            printf("%s",dias[j]);
        }
        else{
            cont++;
        }
    }
    if(cont==4) {
        printf("\nNo se encuentra el d�a %s del arreglo bidimensional en el arreglo de estructura\n",dias[j]);
    }
}

return 0;
}
*/