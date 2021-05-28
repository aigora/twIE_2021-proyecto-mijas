#include "F.cliente.h"
#include <stdio.h>


void cartas(void)
{
   //pedido1 = primero[N];
   // pedida2=segundo[N];
   //pedida3=ostre[N];
   FILE *elecFinal;
   FILE *pCalculadora;
   int eleccion1, eleccion2, eleccion3;
   carta primero[N], segundo[N],postre[N];
   int *pedido1,*pedido2,*pedido3;
   int pedidoprecio1,pedidoprecio2,pedidoprecio3;
   int i;
   //primero preguntamos cuantas personas son el la mesa,
   //para repetir el proceso siguiente tantas veces



FILE *pPrimeros,*pSegundos,*pPostres;
pPrimeros = fopen("Primeros.txt", "r");
pSegundos = fopen("Segundos.txt", "r");
pPostres = fopen("Postres.txt", "r");
if (pPrimeros == NULL)
{
printf("Error al abrir el fichero.\n");
return -1;
}
else
{
    while (feof(pPrimeros) == 0)
    {
         for(i=0;i<N;++i)
      {
         fscanf(pPrimeros, "%d:%s %d ",&primero[i].nCarta, primero[i].plato,&primero[i].precio);
      }
    }
fclose(pPrimeros);

 while (feof(pSegundos) == 0)
    {
         for(i=0;i<N;++i)
    {
         fscanf(pSegundos, "%d: %s %d ",&segundo[i].nCarta,segundo[i].plato,&segundo[i].precio);
    }
    }
fclose(pSegundos);

 while (feof(pPostres) == 0)
    {
         for(i=0;i<N;++i)
      {
         fscanf(pPostres, "%d: %s %d ",&postre[i].nCarta,postre[i].plato,&postre[i].precio);
    }
 fclose(pPostres);
}

printf("Que desea de primer plato, marque el numero de la izquierda:/n");
printf("Si no desea primero marque (0):/n");

     for(i=0;i<N;++i)
        {
            printf("%i:%s %d/n",primero[i].nCarta, primero[i].plato,primero[i].precio);
        }
scanf("%i",&eleccion1);
if(0<eleccion1<11)
{
    switch(eleccion1)
    {
  case '1':
     pedido1 = &primero[0].plato;
     pedidoprecio1 = &primero[0].precio;


     break;
  case '2':
     pedido1 = &primero[1].plato;
     pedidoprecio1 = &primero[1].precio;
     break;
  case '3':
     pedido1 = &primero[2].plato;
     pedidoprecio1 = &primero[2].precio;
     break;
  case '4':
     pedido1 = &primero[3].plato;
     pedidoprecio1 = &primero[3].precio;
     break;
  case '5':
     pedido1 = &primero[4].plato;
     pedidoprecio1 = &primero[4].precio;
  case '6':
     pedido1 = &primero[5].plato;
     pedidoprecio1 = &primero[5].precio;
     break;
  case '7':
     pedido1 = &primero[6].plato;
     pedidoprecio1 = &primero[6].precio;
     break;
  case '8':
     pedido1 = &primero[7].plato;
     pedidoprecio1 = &primero[7].precio;
     break;
  case '9':
     pedido1 = &primero[8].plato;
     pedidoprecio1 = &primero[8].precio;
     break;
  case '10':
     pedido1 = &primero[9].plato;
     pedidoprecio1 = &primero[9].precio;
     break;
    }
}

else if(eleccion1 == 0)
{
  printf("Vale, pasemos a los segundos./n");
}

printf("Que desea de segundo plato, marque el numero de la izquierda:/n");
printf("Si no desea segundo marque (0):/n");

     for(i=0;i<N;++i)
        {
            printf("%i:%s %d/n",segundo[i].nCarta, segundo[i].plato,segundo[i].precio);
        }
scanf("%i",&eleccion2);
if(0<eleccion2<11)
{
    switch(eleccion2)
    {
  case '1':
     pedido2 = &segundo[0].plato;
     pedidoprecio2 = &segundo[0].precio;

     break;
  case '2':
     pedido2 = &segundo[1].plato;
     pedidoprecio2 = &segundo[1].precio;
     break;
  case '3':
     pedido2 = &segundo[2].plato;
     pedidoprecio2 = &segundo[2].precio;
     break;
  case '4':
     pedido2 = &segundo[3].plato;
     pedidoprecio2 = &segundo[3].precio;
     break;
  case '5':
     pedido2 = &segundo[4].plato;
     pedidoprecio2 = &segundo[4].precio;
  case '6':
     pedido2 = &segundo[5].plato;
     pedidoprecio2 = &segundo[5].precio;
     break;
  case '7':
     pedido2 = &segundo[6].plato;
     pedidoprecio2 = &segundo[6].precio;
     break;
  case '8':
     pedido2 = &segundo[7].plato;
     pedidoprecio2 = &segundo[7].precio;
     break;
  case '9':
     pedido2 = &segundo[8].plato;
     pedidoprecio2 = &segundo[8].precio;
     break;
  case '10':
     pedido2 = &segundo[9].plato;
     pedidoprecio2 = &segundo[9].precio;
     break;
    }
}

else if(eleccion2 == 0)
{
  printf("Vale, pasemos a los postres./n");
}


printf("Que desea de postre, marque el numero de la izquierda:/n");
printf("Si no desea postre marque (0):/n");

     for(i=0;i<N;++i)
        {
            printf("%i:%s %d/n",postre[i].nCarta, postre[i].plato,postre[i].precio);
        }
scanf("%i",&eleccion2);
if(0<eleccion2<11)
{
    switch(eleccion2)
    {
  case '1':
     pedido3 = &postre[0].plato;
     pedidoprecio3 = &postre[0].precio;
     break;
  case '2':
     pedido3 = &postre[1].plato;
     pedidoprecio2 = &segundo[1].precio;
     break;
  case '3':
     pedido3 = &postre[2].plato;
     pedidoprecio2 = &segundo[2].precio;
     break;
  case '4':
     pedido3 = &postre[3].plato;
     pedidoprecio2 = &segundo[3].precio;
     break;
  case '5':
     pedido3 = &postre[4].plato;
     pedidoprecio2 = &segundo[4].precio;
  case '6':
     pedido3 = &postre[5].plato;
     pedidoprecio2 = &segundo[5].precio;
     break;
  case '7':
     pedido3 = &postre[6].plato;
     pedidoprecio2 = &segundo[6].precio;
     break;
  case '8':
     pedido3 = &postre[7].plato;
     pedidoprecio2 = &segundo[7].precio;
     break;
  case '9':
     pedido3 = &postre[8].plato;
     pedidoprecio2 = &segundo[8].precio;
     break;
  case '10':
     pedido3 = &postre[9].plato;
     pedidoprecio2 = &segundo[9].precio;
     break;
    }
}

else if(eleccion3 = 0)
{
  printf("Que disfrute de la comida./n");
}



 }

//fichero con todo el menu elegigo

elecFinal = fopen("Eleccion final.txt","a");

fprintf(elecFinal,"Usted ha elegigo\n");
fprintf(elecFinal,"Primero:%s\t", pedido1);
fprintf(elecFinal,"Segundo:%s\t",pedido2);
fprintf(elecFinal,"Postre:%s\n",pedido3);

pCalculadora = fopen("Cuenta.txt","a");
fprintf(pCalculadora,"%f\t %f\t %f\n",&pedidoprecio1,&pedidoprecio2,&pedidoprecio3);
fclose(elecFinal);
fclose(pCalculadora);

}



float calculadora(int nP)
{
FILE *pPedido;
float pri[nP],seg[nP],pos[nP],cuenta=0;
int i=0;
pPedido = fopen("Cuenta.txt","r");
if (pPedido == NULL)
{
printf("Todavia no has pedido.\n");
printf("Debes realizar un pedido.\n");
return -1;
}

else
{
printf("Procedemos a mostrarle la cuenta.\n");
pPedido = fopen("Cuenta.txt","r");

while(fscanf(pPedido,"%f %f %f",&pri[i],&seg[i],&pos[i]) != EOF)
    ++i;

fclose(pPedido);
for(i=0;i<nP;++i)
cuenta += pri[i] + seg[i] + pos[i];


}//del else
return cuenta;
}
