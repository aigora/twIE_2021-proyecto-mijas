#include "F.proveedor.h"
#include <time.h>
typedef struct
{
   int dd;
   int mm;
   int yy;
}fecha;
void proveedortabaco (void)
{
  char listatabaco[1000];
  FILE *t = fopen("listatabaco.txt","r");
  do
  {
    printf("Le adjuntamos nuestras necesidades actuales de TABACO:\n");
    if (t == NULL)
    {
        printf("Error al abrir el documento, inténtelo de nuevo.\n");
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



   FILE *tr = fopen("tabacotrae.txt","w");
   do
   {
      printf("¿Qué cantidades de cada producto nos va a traer?");
      if (tr == NULL)
   {
     printf("Error.");
   }
   else
   {
      printf("Fijese que a cada producto le corresponde un numero (x),\n");
      printf("escriba dicho numero y a continuación el numero de bloques\n");
      printf("que nos va a traer, separado por una coma los dos numeros, por ejemplo:\n");
      printf("si nos quiere traer 2 bloques de Marlboro, escriba: 11,2\n");
      printf("Escriba ahora ")
   }
   }
   while (tr == NULL)


   time_t rawtime = time(NULL);
   struct tm *now = localtime(&rawtime);
   fecha actual;
   actual.dd = now->tm_mday;
   actual.mm = now->tm_mon;
   actual.yy = now->tm_year+1900;

   printf("Concretemos fecha y hora para el reabastecimiento.\n");
   printf("Rescuerde que la recogida de provisiones se realiza desde las 8:00h hasta las 11:00h.\n");
   printf("Introduzca cuándo nos entregará las provisiones:\n");
   printf("Escriba la fecha de la siguiente manera: dd/mm (separado con barra):\t");
   fecha entrega;
   scanf("%i/%i/%i",&entrega.dd,&entrega.mm,&entrega.yy);

   fecha rango;
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

    do
    {
       scanf("%i , %i",&entrega.dd,&entrega.mes);
       if ()
    }
    while (entrega.dd!>31 || entrega.dd!<0 || entrega.mm!>12 || entrega.mm!<0)
    {
       if (entrega.dia > fechaactual[0]+3)
    {
        do
        {
          printf("No podemos permitirmos tantos dias sin reponer tabaco.\n");
          printf("Como máximo admitimos una semana por reabastecimiento.");
          printf("Puede consultar las condiciones en el apartado de contrato.");
          printf("Por favor, corrija la fecha de entrega:\t")
          scanf("%i , %i",&entrega.dia,&entrega.mes);
        }





}
void proveedorbebida(void)
{
  char listabebida[1000];
  FILE *b = fopen("listabebida.txt","r");
  printf("Le adjuntamos nuestras provisiones actuales de BEBIDA:\n");
  if (b == NULL)
    {
        printf("Error al abrir el documento, inténtelo de nuevo.\n");
    }
  else
    {
       while ((feof(b)) == 0)
        {
            fscanf(b,"%s",listabebida);
            printf("%s\n",listabebida);
        }
        printf("\n\n");
    }
   fclose(b);
}
void proveedorpescado (void)
{
  char listapescado[1000];
  FILE *p = fopen("listapescado.txt","r");
  printf("Le adjuntamos nuestras provisiones actuales de PESCADO/MARISCO:\n");
  if (p == NULL)
    {
        printf("Error al abrir el documento, inténtelo de nuevo.\n");
    }
  else
    {
       while ((feof(p)) == 0)
        {
            fscanf(p,"%s",listapescado);
            printf("%s\n",listapescado);
        }
        printf("\n\n");
    }
   fclose(p);
}
void proveedorcarne (void)
{
        char listacarnes[1000];
  FILE *c = fopen("listatabaco.txt","r");
  printf("Le adjuntamos nuestras provisiones actuales de CARNES:\n");
  if (c == NULL)
    {
        printf("Error al abrir el documento, inténtelo de nuevo.\n");
    }
  else
    {
       while ((feof(c)) == 0)
        {
            fscanf(c,"%s",listacarnes);
            printf("%s\n",listacarnes);
        }
        printf("\n\n");
    }
   fclose(c);
}

