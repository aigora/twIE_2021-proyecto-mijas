#include "F.clientes.h"

typedef struct{
char plato[20];
float precio;
}carta;

void carta(void);
{
   carta primero[11], segundo[11],postre[11];
   FILE *pPrimeros,*pSegundos,*pPostres;
   pCarta = fopen("carta.txt", "r");
   if (pCarta == NULL)
{
printf("Error al abrir el fichero.\n");
return -1;
}
else
{
    for(i=0;i<11;++i)
    {
         fscanf(pPrimeros, "%[^:];%[^;]",primero[i].plato,&primero[i].precio );
         fscanf(pSegundos, "%[^:];%[^;]",segundo[i].plato,&segundo[i].precio);
         fscanf(sPostres, "%[^:];%[^;]",postre[i].plato,&postre[i].precio);
    }





}


