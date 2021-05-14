#include "F.proveedor.h"
typedef struct
{
   int dia;
   int mes;
}fecha;
void proveedortabaco (void)
{
  char listatabaco[1000];
  FILE *t = fopen("listatabaco.txt","r");
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

   printf("Concretemos fecha y hora para el reabastecimiento.\n");
   printf("Rescuerde que la recogida de provisiones se realiza desde las 8:00h hasta las 11:00h.\n");
   fecha entrega;
   printf("Introduzca cuándo nos entregará las provisiones:\n");
   printf("Escriba la fecha de la siguiente manera: dd , mm (separado con coma).\n");
   scanf("%i , %i",&entrega.dia,&entrega.mes);



   printf("¿Qué cantidades de cada producto nos va a traer?");
   printf("Escriba el nombre del producto completo y a continuación\n");
   printf("(separado por un espacio)el número de paquetes que va a traernos.\n");
   FILE *tr = fopen("tabacotrae.txt","w");



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

