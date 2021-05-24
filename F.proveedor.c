#include "F.proveedor.h"
#include <time.h>
#include <stdlib.h>
typedef struct
{
   int dd;
   int mm;
   int yy;
}fecha;
void proveedortabaco (void)
{
    char elecci�n;
    printf("�Quiere realizar una entrega de tabaco o consultar el contrato vigente?\n");
    printf("Si quiere realizar una entrega escriba: entrega;\n");
    printf("Si quiere consultar el contrato escriba: contrato.\n");
    do
    {
        printf("Asegurese de escribir ortogr�ficamente bien la respuesta.\n");
        printf("Escriba:\t");
        scanf("%c",elecci�n);
        if (elecci�n='Entrega' || elecci�n='entrega' || elecci�n='ENTREGA')
        {
            srand(time(NULL));
            int nums = rand()%4;
            char listatabaco[1000];
            FILE *t = fopen("listatabaco.txt","r");
            do
                {
                    printf("Le adjuntamos nuestras necesidades actuales de TABACO:\n");
                    if (t == NULL)
                        {
                            printf("Error al abrir el documento, int�ntelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(t)) == 0)
                            {
                                fscanf(t,"%s",listatabaco);
                                printf("%s\n",listatabaco);
                            }
                            printf("\n\n");
                        }
                    fclose(t);
                }
            while (t == NULL);

            printf("�Qu� cantidades de cada producto nos va a traer?");
            printf("Fijese que a cada producto le corresponde un numero (x),\n");
            printf("escriba dicho numero y a continuaci�n el numero de bloques\n");
            printf("que nos va a traer, separado por una coma los dos numeros, por ejemplo:\n");
            printf("si nos quiere traer 2 bloques de Marlboro, escriba: 11,2\n");
            char terminar;
            int marca,bloques;
            do
                {
                    do
                    {
                       printf("Escriba los numeros requeridos:\t");
                    scanf("%i,%i\n",&marca,&bloques);
                    if (marca=3 || marca=5 || marca=7 || marca=8 || marca=10 || marca=13 || marca=14 || marca=15)
                        {
                            printf("No necesitamos de este tipo de tabaco,\n");
                            printf("lea la lista facilitada e intentelo de nuevo.\n");
                            terminar='no';
                        }
                    else
                        {
                            switch (marca)
                            {
                            case '1':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '2':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '4':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '6':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '9':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '11':
                                {
                                    if (bloques=1 || bloques=2 || bloques=3)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 3 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '12':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '16':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;
                            }
                        }
                    }
                    while(terminar='no');

                    printf("�Ha terminado? Escriba (si), si quiere pasar a concretar la fecha de entrega;\n");
                    printf("o (no), si aun nos va a entregar m�s tipos de tabaco:\t");
                    do
                        {
                            scanf("%c",terminar);
                        }
                    while(terminar!='si' || terminar!='Si' || terminar!='SI' || terminar!='s�' || terminar!='S�' || terminar!='S�' || terminar!='no' || terminar!='No' || terminar!='NO');
                }
                while (marca<1 || marca>16 || bloques<=0 || terminar='no' || terminar='No' || terminar='NO');

            time_t rawtime = time(NULL);
            struct tm *now = localtime(&rawtime);
            fecha actual;
            actual.dd = now->tm_mday;
            actual.mm = now->tm_mon;
            actual.yy = now->tm_year+1900;

            printf("Concretemos la fecha para el reabastecimiento.\n");
            printf("Rescuerde que la recogida de provisiones se realiza desde las 8:00h hasta las 11:00h.\n");
            printf("Introduzca cu�ndo nos entregar� las provisiones:\n");
            printf("Escriba la fecha de la siguiente manera: dd/mm/yy (separado con barra):\t");
            fecha entrega,rango;
            int repetir;
            do
                {
                    scanf("%i/%i/%i",&entrega.dd,&entrega.mm,&entrega.yy);
                    if (actual.dd>=entrega.dd)
                        rango.dd = actual.dd - entrega.dd;
                    else
                        {
                            actual.dd+=30;
                            actual.mm-=1;
                            rango.dd = actual.dd - entrega.dd;
                        }
                    if (actual.mm>=entrega.mm)
                        rango.mm = actual.mm - entrega.mm;
                    else
                        {
                            actual.mm+=12;
                            actual.yy-=1;
                            rango.mm = actual.mm - entrega.mm;
                        }
                    rango.yy = actual.yy-entrega.yy;

                    if (rango.dd<8 && rango.mm<1 && rango.yy<1)
                        {
                            printf("Perfecto.\n")
                            repetir=0;
                        }
                    else
                        {
                            printf("No podemos permitirmos tantos dias sin reponer tabaco.\n");
                            printf("Como m�ximo admitimos una semana por reabastecimiento.");
                            printf("Puede consultar las condiciones en el apartado de contrato.");
                            printf("Por favor, corrija la fecha de entrega:\t")
                            repetir=1;
                        }
                }
            while (entrega.dd!>31 || entrega.dd!<0 || entrega.mm!>12 || entrega.mm!<0 || repetir=1);

        printf("Gracias. Hemos registrado los datos de la entrega.");
        char otraoperaci�n;
        char salirseguir;
        do
        {
          printf("�Quiere realizar otra operacion como proveedor? (si/no):\t");
          scanf("%c",otraoperaci�n);
          do
          {
            if (otraoperaci�n='no' || otraoperaci�n='No' || otraoperaci�n='NO')
            {
              printf("�Quiere volver al MENU PRINCIPAL o SALIR de nuestra plataforma?\n");
              printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
              scanf("%c",salirseguir);
              do
              {
                if (salirseguir='principal' || salirseguir='PRINCIPAL' || salirseguir='Principal')
                    reset_
              }
            }
            else
            {

            }
          }


        }

        }
        else
        {
            printf("Le mostramos en pantalla las condiciones vigentes del contrato:\n");
        }
    }
    while(elecci�n!='entrega' && elecci�n!='Entrega' && elecci�n!='ENTREGA' && elecci�n!='contrato' && elecci�n!='Contrato' && elecci�n!='CONTRATO');
}






void proveedorbebida(void)
{
    char elecci�n;
    printf("�Quiere realizar una entrega de tabaco o consultar el contrato vigente?\n");
    printf("Si quiere realizar una entrega escriba: entrega;\n");
    printf("Si quiere consultar el contrato escriba: contrato.\n");
    do
    {
        printf("Asegurese de escribir ortogr�ficamente bien la respuesta.\n");
        printf("Escriba:\t");
        scanf("%c",elecci�n);
        if (elecci�n='Entrega' || elecci�n='entrega' || elecci�n='ENTREGA')
        {
            srand(time(NULL));
            int nums = rand()%4;
            char listatabaco[1000];
            FILE *t = fopen("listatabaco.txt","r");
            do
                {
                    printf("Le adjuntamos nuestras necesidades actuales de TABACO:\n");
                    if (t == NULL)
                        {
                            printf("Error al abrir el documento, int�ntelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(t)) == 0)
                            {
                                fscanf(t,"%s",listatabaco);
                                printf("%s\n",listatabaco);
                            }
                            printf("\n\n");
                        }
                    fclose(t);
                }
            while (t == NULL);

            printf("�Qu� cantidades de cada producto nos va a traer?");
            printf("Fijese que a cada producto le corresponde un numero (x),\n");
            printf("escriba dicho numero y a continuaci�n el numero de bloques\n");
            printf("que nos va a traer, separado por una coma los dos numeros, por ejemplo:\n");
            printf("si nos quiere traer 2 bloques de Marlboro, escriba: 11,2\n");
            char terminar;
            int marca,bloques;
            do
                {
                    printf("Escriba los numeros requeridos:\t");
                    scanf("%i,%i\n",&marca,&bloques);
                    if (marca=3 || marca=5 || marca=7 || marca=8 || marca=10 || marca=13 || marca=14 || marca=15)
                        {
                            printf("No necesitamos de este tipo de tabaco,\n");
                            printf("lea la lista facilitada e intentelo de nuevo.\n");
                            terminar='no';
                        }
                    else
                        {
                            switch (marca)
                            {
                            case '1':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '2':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '4':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '6':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '9':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '11':
                                {
                                    if (bloques=1 || bloques=2 || bloques=3)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 3 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '12':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                            printf("No necesitamos tantas unidades de este tipo,\n");
                                            printf("admitiriamos como maximo 1 bloque.\n");
                                            terminar='no';
                                    }
                                }
                            break;

                            case '16':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;
                            }
                        }
                    printf("�Ha terminado? Escriba (si), si quiere pasar a concretar la fecha de entrega;\n");
                    printf("o (no), si aun nos va a entregar m�s tipos de tabaco:\t");
                    do
                        {
                            scanf("%c",terminar);
                        }
                    while(terminar!='si' || terminar!='Si' || terminar!='SI' || terminar!='s�' || terminar!='S�' || terminar!='S�' || terminar!='no' || terminar!='No' || terminar!='NO');
                }
            while (marca<1 || marca>16 || bloques<=0 || terminar='no' || terminar='No' || terminar='NO');

            time_t rawtime = time(NULL);
            struct tm *now = localtime(&rawtime);
            fecha actual;
            actual.dd = now->tm_mday;
            actual.mm = now->tm_mon;
            actual.yy = now->tm_year+1900;

            printf("Concretemos la fecha para el reabastecimiento.\n");
            printf("Rescuerde que la recogida de provisiones se realiza desde las 8:00h hasta las 11:00h.\n");
            printf("Introduzca cu�ndo nos entregar� las provisiones:\n");
            printf("Escriba la fecha de la siguiente manera: dd/mm/yy (separado con barra):\t");
            fecha entrega,rango;
            int repetir;
            do
                {
                    scanf("%i/%i/%i",&entrega.dd,&entrega.mm,&entrega.yy);
                    if (actual.dd>=entrega.dd)
                        rango.dd = actual.dd - entrega.dd;
                    else
                        {
                            actual.dd+=30;
                            actual.mm-=1;
                            rango.dd = actual.dd - entrega.dd;
                        }
                    if (actual.mm>=entrega.mm)
                        rango.mm = actual.mm - entrega.mm;
                    else
                        {
                            actual.mm+=12;
                            actual.yy-=1;
                            rango.mm = actual.mm - entrega.mm;
                        }
                    rango.yy = actual.yy-entrega.yy;

                    if (rango.dd<8 && rango.mm<1 && rango.yy<1)
                        {
                            printf("Perfecto.\n")
                            repetir=0;
                        }
                    else
                        {
                            printf("No podemos permitirmos tantos dias sin reponer tabaco.\n");
                            printf("Como m�ximo admitimos una semana por reabastecimiento.");
                            printf("Puede consultar las condiciones en el apartado de contrato.");
                            printf("Por favor, corrija la fecha de entrega:\t")
                            repetir=1;
                        }
                }
            while (entrega.dd!>31 || entrega.dd!<0 || entrega.mm!>12 || entrega.mm!<0 || repetir=1);
        }
        else
        {
            printf("Le mostramos en pantalla las condiciones vigentes del contrato:\n");
        }
    }
    while(elecci�n!='entrega' && elecci�n!='Entrega' && elecci�n!='ENTREGA' && elecci�n!='contrato' && elecci�n!='Contrato' && elecci�n!='CONTRATO');
}






void proveedorpescado (void)
{
    char elecci�n;
    printf("�Quiere realizar una entrega de tabaco o consultar el contrato vigente?\n");
    printf("Si quiere realizar una entrega escriba: entrega;\n");
    printf("Si quiere consultar el contrato escriba: contrato.\n");
    do
    {
        printf("Asegurese de escribir ortogr�ficamente bien la respuesta.\n");
        printf("Escriba:\t");
        scanf("%c",elecci�n);
        if (elecci�n='Entrega' || elecci�n='entrega' || elecci�n='ENTREGA')
        {
            srand(time(NULL));
            int nums = rand()%4;
            char listatabaco[1000];
            FILE *t = fopen("listatabaco.txt","r");
            do
                {
                    printf("Le adjuntamos nuestras necesidades actuales de TABACO:\n");
                    if (t == NULL)
                        {
                            printf("Error al abrir el documento, int�ntelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(t)) == 0)
                            {
                                fscanf(t,"%s",listatabaco);
                                printf("%s\n",listatabaco);
                            }
                            printf("\n\n");
                        }
                    fclose(t);
                }
            while (t == NULL);

            printf("�Qu� cantidades de cada producto nos va a traer?");
            printf("Fijese que a cada producto le corresponde un numero (x),\n");
            printf("escriba dicho numero y a continuaci�n el numero de bloques\n");
            printf("que nos va a traer, separado por una coma los dos numeros, por ejemplo:\n");
            printf("si nos quiere traer 2 bloques de Marlboro, escriba: 11,2\n");
            char terminar;
            int marca,bloques;
            do
                {
                    printf("Escriba los numeros requeridos:\t");
                    scanf("%i,%i\n",&marca,&bloques);
                    if (marca=3 || marca=5 || marca=7 || marca=8 || marca=10 || marca=13 || marca=14 || marca=15)
                        {
                            printf("No necesitamos de este tipo de tabaco,\n");
                            printf("lea la lista facilitada e intentelo de nuevo.\n");
                            terminar='no';
                        }
                    else
                        {
                            switch (marca)
                            {
                            case '1':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '2':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '4':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '6':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '9':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '11':
                                {
                                    if (bloques=1 || bloques=2 || bloques=3)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 3 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '12':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                            printf("No necesitamos tantas unidades de este tipo,\n");
                                            printf("admitiriamos como maximo 1 bloque.\n");
                                            terminar='no';
                                    }
                                }
                            break;

                            case '16':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;
                            }
                        }
                    printf("�Ha terminado? Escriba (si), si quiere pasar a concretar la fecha de entrega;\n");
                    printf("o (no), si aun nos va a entregar m�s tipos de tabaco:\t");
                    do
                        {
                            scanf("%c",terminar);
                        }
                    while(terminar!='si' || terminar!='Si' || terminar!='SI' || terminar!='s�' || terminar!='S�' || terminar!='S�' || terminar!='no' || terminar!='No' || terminar!='NO');
                }
            while (marca<1 || marca>16 || bloques<=0 || terminar='no' || terminar='No' || terminar='NO');

            time_t rawtime = time(NULL);
            struct tm *now = localtime(&rawtime);
            fecha actual;
            actual.dd = now->tm_mday;
            actual.mm = now->tm_mon;
            actual.yy = now->tm_year+1900;

            printf("Concretemos la fecha para el reabastecimiento.\n");
            printf("Rescuerde que la recogida de provisiones se realiza desde las 8:00h hasta las 11:00h.\n");
            printf("Introduzca cu�ndo nos entregar� las provisiones:\n");
            printf("Escriba la fecha de la siguiente manera: dd/mm/yy (separado con barra):\t");
            fecha entrega,rango;
            int repetir;
            do
                {
                    scanf("%i/%i/%i",&entrega.dd,&entrega.mm,&entrega.yy);
                    if (actual.dd>=entrega.dd)
                        rango.dd = actual.dd - entrega.dd;
                    else
                        {
                            actual.dd+=30;
                            actual.mm-=1;
                            rango.dd = actual.dd - entrega.dd;
                        }
                    if (actual.mm>=entrega.mm)
                        rango.mm = actual.mm - entrega.mm;
                    else
                        {
                            actual.mm+=12;
                            actual.yy-=1;
                            rango.mm = actual.mm - entrega.mm;
                        }
                    rango.yy = actual.yy-entrega.yy;

                    if (rango.dd<8 && rango.mm<1 && rango.yy<1)
                        {
                            printf("Perfecto.\n")
                            repetir=0;
                        }
                    else
                        {
                            printf("No podemos permitirmos tantos dias sin reponer tabaco.\n");
                            printf("Como m�ximo admitimos una semana por reabastecimiento.");
                            printf("Puede consultar las condiciones en el apartado de contrato.");
                            printf("Por favor, corrija la fecha de entrega:\t")
                            repetir=1;
                        }
                }
            while (entrega.dd!>31 || entrega.dd!<0 || entrega.mm!>12 || entrega.mm!<0 || repetir=1);
        }
        else
        {
            printf("Le mostramos en pantalla las condiciones vigentes del contrato:\n");
        }
    }
    while(elecci�n!='entrega' && elecci�n!='Entrega' && elecci�n!='ENTREGA' && elecci�n!='contrato' && elecci�n!='Contrato' && elecci�n!='CONTRATO');
}






void proveedorcarne (void)
{
    char elecci�n;
    printf("�Quiere realizar una entrega de tabaco o consultar el contrato vigente?\n");
    printf("Si quiere realizar una entrega escriba: entrega;\n");
    printf("Si quiere consultar el contrato escriba: contrato.\n");
    do
    {
        printf("Asegurese de escribir ortogr�ficamente bien la respuesta.\n");
        printf("Escriba:\t");
        scanf("%c",elecci�n);
        if (elecci�n='Entrega' || elecci�n='entrega' || elecci�n='ENTREGA')
        {
            srand(time(NULL));
            int nums = rand()%4;
            char listatabaco[1000];
            FILE *t = fopen("listatabaco.txt","r");
            do
                {
                    printf("Le adjuntamos nuestras necesidades actuales de TABACO:\n");
                    if (t == NULL)
                        {
                            printf("Error al abrir el documento, int�ntelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(t)) == 0)
                            {
                                fscanf(t,"%s",listatabaco);
                                printf("%s\n",listatabaco);
                            }
                            printf("\n\n");
                        }
                    fclose(t);
                }
            while (t == NULL);

            printf("�Qu� cantidades de cada producto nos va a traer?");
            printf("Fijese que a cada producto le corresponde un numero (x),\n");
            printf("escriba dicho numero y a continuaci�n el numero de bloques\n");
            printf("que nos va a traer, separado por una coma los dos numeros, por ejemplo:\n");
            printf("si nos quiere traer 2 bloques de Marlboro, escriba: 11,2\n");
            char terminar;
            int marca,bloques;
            do
                {
                    printf("Escriba los numeros requeridos:\t");
                    scanf("%i,%i\n",&marca,&bloques);
                    if (marca=3 || marca=5 || marca=7 || marca=8 || marca=10 || marca=13 || marca=14 || marca=15)
                        {
                            printf("No necesitamos de este tipo de tabaco,\n");
                            printf("lea la lista facilitada e intentelo de nuevo.\n");
                            terminar='no';
                        }
                    else
                        {
                            switch (marca)
                            {
                            case '1':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '2':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '4':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '6':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '9':
                                {
                                    if (bloques=1 || bloques=2)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '11':
                                {
                                    if (bloques=1 || bloques=2 || bloques=3)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 3 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;

                            case '12':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                            printf("No necesitamos tantas unidades de este tipo,\n");
                                            printf("admitiriamos como maximo 1 bloque.\n");
                                            terminar='no';
                                    }
                                }
                            break;

                            case '16':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar='si';
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloques.\n");
                                        terminar='no';
                                    }
                                }
                            break;
                            }
                        }
                    printf("�Ha terminado? Escriba (si), si quiere pasar a concretar la fecha de entrega;\n");
                    printf("o (no), si aun nos va a entregar m�s tipos de tabaco:\t");
                    do
                        {
                            scanf("%c",terminar);
                        }
                    while(terminar!='si' || terminar!='Si' || terminar!='SI' || terminar!='s�' || terminar!='S�' || terminar!='S�' || terminar!='no' || terminar!='No' || terminar!='NO');
                }
            while (marca<1 || marca>16 || bloques<=0 || terminar='no' || terminar='No' || terminar='NO');

            time_t rawtime = time(NULL);
            struct tm *now = localtime(&rawtime);
            fecha actual;
            actual.dd = now->tm_mday;
            actual.mm = now->tm_mon;
            actual.yy = now->tm_year+1900;

            printf("Concretemos la fecha para el reabastecimiento.\n");
            printf("Rescuerde que la recogida de provisiones se realiza desde las 8:00h hasta las 11:00h.\n");
            printf("Introduzca cu�ndo nos entregar� las provisiones:\n");
            printf("Escriba la fecha de la siguiente manera: dd/mm/yy (separado con barra):\t");
            fecha entrega,rango;
            int repetir;
            do
                {
                    scanf("%i/%i/%i",&entrega.dd,&entrega.mm,&entrega.yy);
                    if (actual.dd>=entrega.dd)
                        rango.dd = actual.dd - entrega.dd;
                    else
                        {
                            actual.dd+=30;
                            actual.mm-=1;
                            rango.dd = actual.dd - entrega.dd;
                        }
                    if (actual.mm>=entrega.mm)
                        rango.mm = actual.mm - entrega.mm;
                    else
                        {
                            actual.mm+=12;
                            actual.yy-=1;
                            rango.mm = actual.mm - entrega.mm;
                        }
                    rango.yy = actual.yy-entrega.yy;

                    if (rango.dd<8 && rango.mm<1 && rango.yy<1)
                        {
                            printf("Perfecto.\n")
                            repetir=0;
                        }
                    else
                        {
                            printf("No podemos permitirmos tantos dias sin reponer tabaco.\n");
                            printf("Como m�ximo admitimos una semana por reabastecimiento.");
                            printf("Puede consultar las condiciones en el apartado de contrato.");
                            printf("Por favor, corrija la fecha de entrega:\t")
                            repetir=1;
                        }
                }
            while (entrega.dd!>31 || entrega.dd!<0 || entrega.mm!>12 || entrega.mm!<0 || repetir=1);
        }
        else
        {
            printf("Le mostramos en pantalla las condiciones vigentes del contrato:\n");
        }
    }
    while(elecci�n!='entrega' && elecci�n!='Entrega' && elecci�n!='ENTREGA' && elecci�n!='contrato' && elecci�n!='Contrato' && elecci�n!='CONTRATO');
}

