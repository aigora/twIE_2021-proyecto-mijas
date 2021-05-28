#include "F.proveedor.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void proveedortabaco (void)
{
    char elec[15];
    char terminar[15];
    int marca,bloques;
    time_t rawtime = time(NULL);
    struct tm *now = localtime(&rawtime);
    fecha actual;
    actual.dd = now->tm_mday;
    actual.mm = now->tm_mon;
    actual.yy = now->tm_year+1900;
    fecha entrega,rango;
    int repetir;
    char otraop[15];
    char salirseguir[15];
    int qc;
    int rango2;
    float impres;
    int cambio;
    char resp[15];
    char resp2[15];
    char resp3[15];



    printf("¿Quiere realizar una entrega de tabaco o consultar el contrato vigente?\n");
    printf("Si quiere realizar una entrega escriba: entrega;\n");
    printf("Si quiere consultar el contrato escriba: contrato.\n");
    do
    {
        printf("Asegurese de escribir ortográficamente bien la respuesta.\n");
        printf("Escriba:\t");
        scanf("%s",elec);
        if ((elec[15]=="Entrega") || (elec[15]=="entrega") || (elec[15]=="ENTREGA"))
        {

            char listatabaco[1000];
            FILE *t;
            t = fopen("listatabaco.txt","r");
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

            printf("¿Qué cantidades de cada producto nos va a traer?");
            printf("Fijese que a cada producto le corresponde un numero (x),\n");
            printf("escriba dicho numero y a continuación el numero de bloques\n");
            printf("que nos va a traer, separado por una coma los dos numeros, por ejemplo:\n");
            printf("si nos quiere traer 2 bloques de Marlboro, escriba: 11,2\n");

            do
                {
                    do
                    {
                       printf("Escriba los numeros requeridos:\t");
                       scanf("%i,%i\n",&marca,&bloques);
                       if ((marca=3) || (marca=5) || (marca=7) || (marca=8) || (marca=10) || (marca=13) || (marca=14) || (marca=15))
                        {
                            printf("No necesitamos de este tipo de tabaco,\n");
                            printf("lea la lista facilitada e intentelo de nuevo.\n");
                            terminar[15]="no";
                        }
                        else
                        {
                            switch (marca)
                            {
                            case '1':
                                {
                                    if ((bloques=1) || (bloques=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '2':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '4':
                                {
                                    if ((bloques=1) || (bloques=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '6':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '9':
                                {
                                    if ((bloques=1) || (bloques=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 bloques.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '11':
                                {
                                    if ((bloques=1) || (bloques=2) || (bloques=3))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 3 bloques.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '12':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloque.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '16':
                                {
                                    if (bloques=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 bloques.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;
                            }
                        }
                    }
                    while(terminar[15]="no");

                    printf("¿Ha terminado? Escriba (si), si quiere pasar a concretar la fecha de entrega;\n");
                    printf("o (no), si aun nos va a entregar más tipos de tabaco:\t");
                    do
                        {
                            scanf("%s",terminar);
                        }
                    while(terminar!="si" && terminar!="Si" && terminar!="SI" && terminar!='sí' && terminar!='Sí' && terminar!='SÍ' && terminar!="no" && terminar!="No" && terminar!="NO");
                }
                while ((marca<1) || (marca>16) || (bloques<=0) || (terminar[15]="no") || (terminar[15]="No") || (terminar[15]="NO"));


            printf("Concretemos la fecha para el reabastecimiento.\n");
            printf("Rescuerde que la recogida de provisiones se realiza desde las 8:00h hasta las 11:00h.\n");
            printf("Introduzca cuándo nos entregará las provisiones.\n");

            do
                {
                    printf("Escriba la fecha de la siguiente manera: dd/mm/yy (separado con barra):\t");
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
                            printf("Perfecto.\n");
                            repetir=0;
                        }
                    else
                        {
                            printf("No podemos permitirmos tantos dias sin reponer tabaco.\n");
                            printf("Como máximo admitimos una semana por reabastecimiento.");
                            printf("Puede consultar las condiciones en el apartado de contrato.");
                            printf("Por favor, corrija la fecha de entrega:\t");
                            repetir=1;
                        }
                }
            while ((entrega.dd > 31) || (entrega.dd < 0) || (entrega.mm > 12) || (entrega.mm < 0) || (entrega.yy < actual.yy) || (repetir=1));

        printf("Gracias. Hemos registrado los datos de la entrega.");
        do
        {
          printf("¿Quiere realizar otra operacion como proveedor? (si/no):\t");
          scanf("%s",otraop);
            if ((otraop[15]="no") || (otraop[15]="No") || (otraop[15]="NO"))
            {
              printf("¿Quiere volver al MENU PRINCIPAL o SALIR de nuestra plataforma?\n");

              do
              {
                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                  scanf("%s",salirseguir);
                if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                {
                    printf("Volviendo al menu principal...");
                    main();
                }
                else
                {
                    printf("Gracias por usar nuestra plataforma. Buen día.");
                }

              }
              while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
            }
        }
        while(otraop[15]!="no" && otraop[15]!="No" && otraop[15]!="NO" && otraop[15]!="si" && otraop[15]!="Si" && otraop[15]!="SI" && otraop[15]!='sí' && otraop[15]!='Sí' && otraop[15]!='SÍ');

        }
        else//antepenultimo corchete
        {
            tcondicion condicion;
            char contratotabaco[1000];
            FILE *c = fopen("contratotabaco.txt","r");
            do
                {
                    printf("Le mostramos el contrato vigente con PROVEEDOR-TABACO:\n");
                    if (c == NULL)
                        {
                            printf("Error, inténtelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(c)) == 0)
                            {
                                fscanf(c,"%s",contratotabaco);
                                printf("%s\n",contratotabaco);
                            }
                            printf("\n\n");
                        }
                    fclose(c);
                }
            while (c == NULL);



            printf("Le exponemos a continuación las opciones que tiene.\n");
            printf("A cada opción le corresponde un numero, escriba dicho\n");
            printf("número cuando se le requiera elegir su opción.\n\n");
            printf("ESCRIBA:\n\n");
            printf("1: Si quiere consultar cuántos meses activos restan hasta\n");
            printf("posible renovación o fin de contrato y consultar por tanto el\n");
            printf("importe restante a pagar (mensual).\n\n");
            printf("2: Si quiere solicitar algún cambio en las condiciones del contrato:\n");
            printf(" suprimir alguna condición, negociar precio de la actividad o consultar las\n");
            printf("condiciones para cancelar el contrato.\n\n");
            printf("3: Ampliar el contrato (añadir plazo activo o nuevos tipos de tabaco\n");
            printf("de los que pueda abastecernos).\n\n");
            do
            {
              scanf("%i",&qc);
            }
            while ((qc>0)&&(qc<4));

            switch (qc)
            {
            case '1':
                {
                  rango2 = 12 - actual.mm;
                  if (rango2 = 0);
                  {
                      impres = 23.232;
                      if ((actual.mm=01) || (actual.mm=03) || (actual.mm=05) || (actual.mm=07) || (actual.mm=8) || (actual.mm=10) || (actual.mm=12))
                      {
                         printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                         printf("en %i día(s).\n",31-actual.dd);
                         printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                      }
                      else if ((actual.mm=04) || (actual.mm=06) || (actual.mm=9) || (actual.mm=11))
                      {
                         printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                         printf("en %i día(s).\n",30-actual.dd);
                         printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                      }
                      else
                      {
                          if (((actual.yy%4 == 0) && (actual.yy%100 != 0)) || (actual.yy%400 == 0))
                          {
                            printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                            printf("en %i día(s)\n.",29-actual.dd);
                            printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                          }
                          else
                          {
                            printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                            printf("en %i día(s)\n.",28-actual.dd);
                            printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                          }
                      }
                  }
                  if (rango2>0)
                  {
                      impres = 23.232 * rango2;
                      printf("El contrato finaliza en %i mes(es).\n",rango2);
                      printf("Se le pagarán en total %f € al final de los %i mes(es) restantes.\n\n", impres,rango2);
                  }
                }
            case 2:
                {
                  printf("Escriba/añada más condiciones que sugiera según cada punto, le explicamos cómo hacerlo:\n\n");
                  printf("Primero escriba de a que tipo de condición se va a referir (abastecimiento, recogida o seguro).\n");
                  printf("Escriba después el importe mensual que desea que tenga dicho servicio.\n");
                  printf("Por último, escriba cuántos meses activos desea que el servicio esté activo.\n\n");

                      FILE *e;
                      e = fopen("condicionestabaco.txt","ab");
                      if (e==NULL)
                        printf("Error.\n");
                      tcondicion condicion;
                      printf("Ingrese (literalmente) el tipo de condición (abastecimiento/recogida/seguro):\t");
                      do
                      {
                          scanf("%s",condicion.tipo);
                      }
                      while((condicion.tipo!='abastecimiento') && (condicion.tipo!='recogida') && (condicion.tipo!='seguro'));
                      fflush(stdin);
                      printf("Ingrese el importe mensual en € que sugiere del servicio:\t");
                      do
                      {
                        scanf("%f",&condicion.importe);
                      }
                      while(condicion.importe>0);
                      printf("Ingrese el tiempo mensual que sugiere que el servicio esté activo:\t");
                      do
                      {
                        scanf("%i",condicion.tiempo);
                      }
                      while(condicion.tiempo>0);
                      fwrite(&condicion, sizeof(tcondicion), 1, e);
                      fclose (e);


                  printf("Usted ha escrito:\n\n");
                  e=fopen("condicionestabaco.txt","rb");
                  if(e==NULL)
                    printf("Error.\n");
                  else
                  {
                      tcondicion condicion;
                      fread(&condicion,sizeof(tcondicion),1,e);
                      while(!feof(e));
                      {
                          printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                          fread(&condicion,sizeof(tcondicion),1,e);
                      }
                      fclose(e);
                  }
                  printf("¿Quiere realizar algun cambio? (si/no):\t");
                  do
                  {
                    scanf("%s",resp);
                  }
                  while((resp!="si") && (resp!="no"));
                  if (resp[15]="si")
                  {
                      FILE *e;
                      e=fopen("condicionestabaco.txt","r+b");
                      if (e==NULL)
                        printf("Error.\n");
                      else
                      {
                         printf("¿En qué tipo de condición desea realizar un cambio?\n");
                         printf("abastecimiento/recogida/seguro\n");
                         do
                            {
                                scanf("%s",resp2);
                            }
                        while((resp2!='abastecimiento') && (resp2!='recogida') && (resp2!='seguro'));
                        tcondicion condicion;
                        int existe=0;
                        fread(&condicion,sizeof(tcondicion),1,e);
                        while (!feof(e))
                        {
                          if (resp2==condicion.tipo)
                            {
                          printf("Ingrese nuevo importe y tiempo activo separado por coma:\n");
                            do
                            {
                              scanf("%f,%i",&condicion.importe,&condicion.tiempo);
                            }
                            while ((condicion.importe<0) || (condicion.tiempo<0));
                            int pos=ftell(e)-sizeof(tcondicion);
                            fseek(e,pos,SEEK_SET);
                            fwrite(&condicion,sizeof(tcondicion),1,e);
                            printf("Se han realizado los cambios requeridos.\n");
                            existe=1;
                            break;
                            }
                          fread(&condicion,sizeof(tcondicion),1,e);
                        }
                        if(existe==0)
                            printf("Ese tipo de condición no existe.\n");
                        fclose(e);
                      }
                  }
                  printf("Examinemos sus sugerencias...");
                  if ((condicion.tipo=='abastecimiento')&&(condicion.importe>13.34))
                  {
                      printf("Creemos que %f € no es un precio que pagaríamos por %s...\n",condicion.importe,condicion.tipo);
                      printf("Otro proveedor podría facilitarnos el mismo servicio por un precio menor,\n");
                      printf("como por ejemplo 9 €, pero aceptaríamos un importe mensual de 11 € de su parte.\n",condicion.importe-4,condicion.importe-2);
                      printf("¿Le parece bien? (si/no):\t");
                      do
                      {
                          scanf("%s",resp3);
                      }
                      while ((resp3[15]!="si") && (resp3[15]!="no"));
                      switch(resp3[15])
                      {
                      case 'si':
                        {
                        printf("Perfecto, corregiremos a continuación el importe:\n\n");
                        condicion.importe=11.00;
                        FILE *e;
                        e=fopen("condicionestabaco.txt","rb");
                        if(e==NULL)
                            printf("Error.\n");
                        else
                            {
                                tcondicion condicion;
                                fread(&condicion,sizeof(tcondicion),1,e);
                                while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                fclose(e);
                            }
                        }
                      case 'no':
                        {
                          float nimp;
                          printf("No podemos ofrecerle tal cantidad de dinero.\n");
                          printf("Introduzca un importe más negociable:\t");
                          do
                          {
                              scanf("%f",&nimp);
                          }
                          while(nimp>13.34);
                          if(nimp<=9.56)
                            {
                              printf("Por supuesto que aceptamos su oferta, corregimos ahora mismo el importe:\n\n");
                              condicion.importe=nimp;
                              FILE *e;
                              e=fopen("condicionestabaco.txt","rb");
                              if(e==NULL)
                              printf("Error.\n");
                              else
                               {
                                  tcondicion condicion;
                                  fread(&condicion,sizeof(tcondicion),1,e);
                                  while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                  fclose(e);
                               }
                            }
                          if (nimp>9.56)
                            {
                                printf("Es un precio más asequible, pero tengamos en cuenta que le pagamos más servicios\n");
                                printf("¿qué le parece si lo dejamos en %f? (si/no)\t",nimp-1.34);
                                char resp4[15];
                                do
                                {
                                    scanf("%s",resp4);
                                }
                                while ((resp4[15]!="si")&&(resp4[15]!="no"));
                                switch(resp4[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=nimp-1.34;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                            }
                          }
                        }
                      }

                  }
                  if((condicion.tipo=='abastecimiento')&&(condicion.importe<=13.34)&&(condicion.importe>10.13));
                  {
                      printf("Es un precio considerable, pero tengamos en cuenta que le pagamos más servicios\n");
                      printf("¿qué le parece si lo dejamos en %f? (si/no)\t",condicion.importe-1.13);
                      char resp5[15];
                                do
                                {
                                    scanf("%s",resp5);
                                }
                                while ((resp5[15]!="si")&&(resp5[15]!="no"));
                                switch(resp5[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=condicion.importe-1.13;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                  }
                  if((condicion.tipo=='abastecimiento')&&(condicion.importe<=10.13))
                  {
                    printf("Por supuesto aceptaremos su oferta, ccorrijamos el cambio:\n\n");
                                      condicion.importe;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe>13.34))
                  {
                    printf("Creemos que %f € no es un precio que pagaríamos por %s...\n",condicion.importe,condicion.tipo);
                    printf("Otro proveedor podría facilitarnos el mismo servicio por un precio menor,\n");
                    printf("como por ejemplo 9 €, pero aceptaríamos un importe mensual de 11 € de su parte.\n",condicion.importe-4,condicion.importe-2);
                    printf("¿Le parece bien? (si/no):\t");
                    do
                      {
                          scanf("%s",resp3);
                      }
                    while ((resp3[15]!="si") && (resp3[15]!="no"));
                    switch(resp3[15])
                      {
                      case 'si':
                        {
                         printf("Perfecto, corregiremos a continuación el importe:\n\n");
                         condicion.importe=11.00;
                         FILE *e;
                         e=fopen("condicionestabaco.txt","rb");
                         if(e==NULL)
                            printf("Error.\n");
                         else
                            {
                                tcondicion condicion;
                                fread(&condicion,sizeof(tcondicion),1,e);
                                while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                fclose(e);
                            }
                        }
                      case 'no':
                        {
                          float nimp;
                          printf("No podemos ofrecerle tal cantidad de dinero.\n");
                          printf("Introduzca un importe más negociable:\t");
                          do
                          {
                              scanf("%f",&nimp);
                          }
                          while(nimp>13.34);
                          if(nimp<=9.56)
                            {
                              printf("Por supuesto que aceptamos su oferta, corregimos ahora mismo el importe:\n\n");
                              condicion.importe=nimp;
                              FILE *e;
                              e=fopen("condicionestabaco.txt","rb");
                              if(e==NULL)
                              printf("Error.\n");
                              else
                               {
                                  tcondicion condicion;
                                  fread(&condicion,sizeof(tcondicion),1,e);
                                  while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                  fclose(e);
                               }
                            }
                          if(nimp>9.56)
                            {
                                printf("Es un precio más asequible, pero tengamos en cuenta que le pagamos más servicios\n");
                                printf("¿qué le parece si lo dejamos en %f? (si/no)\t",nimp-1.34);
                                char resp4[15];
                                do
                                {
                                    scanf("%s",resp4);
                                }
                                while ((resp4[15]!="si")&&(resp4[15]!="no"));
                                switch(resp4[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=nimp-1.34;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                            }
                          }
                        }
                      }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe<=13.34)&&(condicion.importe>10.13));
                  {
                      printf("Es un precio considerable, pero tengamos en cuenta que le pagamos más servicios\n");
                      printf("¿qué le parece si lo dejamos en %f? (si/no)\t",condicion.importe-1.13);
                      char resp5[15];
                                do
                                {
                                    scanf("%s",resp5);
                                }
                                while ((resp5[15]!="si")&&(resp5[15]!="no"));
                                switch(resp5[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=condicion.importe-1.13;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe<=10.13))
                  {
                    printf("Por supuesto aceptaremos su oferta, corrijamos el cambio:\n\n");
                                      condicion.importe;
                                      FILE *e;
                                      e=fopen("condicionestabaco.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                  }
                  if (condicion.tipo[15]='seguro');
                  {
                      printf("Para negociar las características del seguro, es necesario\n");
                      printf("concretar una reunión junto a nuestro gestor, llame nuestro numero para\n");
                      printf("fechar la reunión. Gracias.\n\n");
                  }
                  printf("¿desea salir o volver al menu principal?");
                  do
                    {
                        printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                        scanf("%s",salirseguir);
                        if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                            {
                               printf("Volviendo al menu principal...");
                               main();
                            }
                        else
                            {
                               printf("Gracias por usar nuestra plataforma. Buen día.");
                               return 0;
                            }
                    }
                  while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
    }

}
while(elec[15]!='entrega' && elec[15]!='Entrega' && elec[15]!='ENTREGA' && elec[15]!='contrato' && elec[15]!='Contrato' && elec[15]!='CONTRATO');
}





void proveedorbebida(void)
{
    char elec[15];
    srand(time(NULL));
    int nums = rand()%4;
    char terminar[15];
    int marca,cajas;
    time_t rawtime = time(NULL);
    struct tm *now = localtime(&rawtime);
    fecha actual;
    actual.dd = now->tm_mday;
    actual.mm = now->tm_mon;
    actual.yy = now->tm_year+1900;
    fecha entrega,rango;
    int repetir;
    char otraop[15];
    char salirseguir[15];
    int qc;
    int rango2;
    float impres;
    int cambio;
    char resp[15];
    char resp2[15];
    char resp3[15];



    printf("¿Quiere realizar una entrega de bebida o consultar el contrato vigente?\n");
    printf("Si quiere realizar una entrega escriba: entrega;\n");
    printf("Si quiere consultar el contrato escriba: contrato.\n");
    do
    {
        printf("Asegurese de escribir ortográficamente bien la respuesta.\n");
        printf("Escriba:\t");
        scanf("%s",elec);
        if ((elec[15]='Entrega') || (elec[15]='entrega') || (elec[15]='ENTREGA'))
        {

            char listabebida[1000];
            FILE *t;
            t = fopen("listabebida.txt","r");
            do
                {
                    printf("Le adjuntamos nuestras necesidades actuales de BEBIDA:\n");
                    if (t == NULL)
                        {
                            printf("Error al abrir el documento, inténtelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(t)) == 0)
                            {
                                fscanf(t,"%s",listabebida);
                                printf("%s\n",listabebida);
                            }
                            printf("\n\n");
                        }
                    fclose(t);
                }
            while (t == NULL);

            printf("¿Qué cantidades de cada producto nos va a traer?");
            printf("Fijese que a cada producto le corresponde un numero (x),\n");
            printf("escriba dicho numero y a continuación el numero de cajas\n");
            printf("que nos va a traer, separado por una coma los dos numeros, por ejemplo:\n");
            printf("si nos quiere traer 2 bloques de Fanta Naranja, escriba: 2,2\n");

            do
                {
                    do
                    {
                       printf("Escriba los numeros requeridos:\t");
                       scanf("%i,%i\n",&marca,&cajas);
                       if ((marca=4) || (marca=6) || (marca=7) || (marca=12) || (marca=13) || (marca=14))
                        {
                            printf("No necesitamos de este tipo de bebida,\n");
                            printf("lea la lista facilitada e intentelo de nuevo.\n");
                            terminar[15]="no";
                        }
                        else
                        {
                            switch (marca)
                            {
                            case '2':
                                {
                                    if ((cajas=1) || (cajas=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 cajas.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '5':
                                {
                                    if (cajas=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 caja.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '3':
                                {
                                    if ((cajas=1) || (cajas=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 cajas.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '8':
                                {
                                    if (cajas=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 caja.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '9':
                                {
                                    if ((cajas=1) || (cajas=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 cajas.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '1':
                                {
                                    if ((cajas=1) || (cajas=2) || (cajas=3))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 3 cajas.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '11':
                                {
                                    if (cajas=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 caja.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '12':
                                {
                                    if (cajas=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 caja.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;
                            }
                        }
                    }
                    while(terminar[15]="no");

                    printf("¿Ha terminado? Escriba (si), si quiere pasar a concretar la fecha de entrega;\n");
                    printf("o (no), si aun nos va a entregar más tipos de bebida:\t");
                    do
                        {
                            scanf("%s",terminar);
                        }
                    while(terminar!="si" && terminar!="Si" && terminar!="SI" && terminar!='sí' && terminar!='Sí' && terminar!='SÍ' && terminar!="no" && terminar!="No" && terminar!="NO");
                }
                while ((marca<1) || (marca>16) || (cajas<=0) || (terminar[15]="no") || (terminar[15]="No") || (terminar[15]="NO"));


            printf("Concretemos la fecha para el reabastecimiento.\n");
            printf("Rescuerde que la recogida de provisiones se realiza desde las 8:00h hasta las 11:00h.\n");
            printf("Introduzca cuándo nos entregará las provisiones.\n");

            do
                {
                    printf("Escriba la fecha de la siguiente manera: dd/mm/yy (separado con barra):\t");
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
                            printf("Perfecto.\n");
                            repetir=0;
                        }
                    else
                        {
                            printf("No podemos permitirmos tantos dias sin reponer bebida.\n");
                            printf("Como máximo admitimos una semana por reabastecimiento.");
                            printf("Puede consultar las condiciones en el apartado de contrato.");
                            printf("Por favor, corrija la fecha de entrega:\t");
                            repetir=1;
                        }
                }
            while ((entrega.dd > 31) || (entrega.dd < 0) || (entrega.mm > 12) || (entrega.mm < 0) || (entrega.yy < actual.yy) || (repetir=1));

        printf("Gracias. Hemos registrado los datos de la entrega.");
        do
        {
          printf("¿Quiere realizar otra operacion como proveedor? (si/no):\t");
          scanf("%s",otraop);
            if ((otraop[15]="no") || (otraop[15]="No") || (otraop[15]="NO"))
            {
              printf("¿Quiere volver al MENU PRINCIPAL o SALIR de nuestra plataforma?\n");

              do
              {
                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                  scanf("%s",salirseguir);
                if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                {
                    printf("Volviendo al menu principal...");
                    main();
                }
                else
                {
                    printf("Gracias por usar nuestra plataforma. Buen día.");
                    return 0;
                }

              }
              while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
            }
        }
        while(otraop[15]!="no" && otraop[15]!="No" && otraop[15]!="NO" && otraop[15]!="si" && otraop[15]!="Si" && otraop[15]!="SI" && otraop[15]!='sí' && otraop[15]!='Sí' && otraop[15]!='SÍ');

        }
        else
        {
            tcondicion condicion;
            char contratobebida[1000];
            FILE *c = fopen("contratobebida.txt","r");
            do
                {
                    printf("Le mostramos el contrato vigente con PROVEEDOR-BEBIDA:\n");
                    if (c == NULL)
                        {
                            printf("Error, inténtelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(c)) == 0)
                            {
                                fscanf(c,"%s",contratobebida);
                                printf("%s\n",contratobebida);
                            }
                            printf("\n\n");
                        }
                    fclose(c);
                }
            while (c == NULL);



            printf("Le exponemos a continuación las opciones que tiene.\n");
            printf("A cada opción le corresponde un numero, escriba dicho\n");
            printf("número cuando se le requiera elegir su opción.\n\n");
            printf("ESCRIBA:\n\n");
            printf("1: Si quiere consultar cuántos meses activos restan hasta\n");
            printf("posible renovación o fin de contrato y consultar por tanto el\n");
            printf("importe restante a pagar (mensual).\n\n");
            printf("2: Si quiere solicitar algún cambio en las condiciones del contrato:\n");
            printf(" suprimir alguna condición, negociar precio de la actividad o consultar las\n");
            printf("condiciones para cancelar el contrato.\n\n");
            printf("3: Ampliar el contrato (añadir plazo activo o nuevos tipos de bebida\n");
            printf("de los que pueda abastecernos).\n\n");
            do
            {
              scanf("%i",&qc);
            }
            while ((qc>0)&&(qc<4));

            switch (qc)
            {
            case '1':
                {
                  rango2 = 10 - actual.mm;
                  if(rango2=-1)
                  {
                      printf("El contrato ha sido renovado el mes pasado, restan 11 y por tanto\n");
                      printf("%f € faltan por pagar.\n",impres*11);
                  }
                  if(rango2=-2)
                  {
                      printf("El contrato ha sido renovado hace dos meses, restan 10 y por tanto\n");
                      printf("%f € faltan por pagar.\n",impres*10);
                  }
                  if (rango2 = 0);
                  {
                      impres = 43.464;
                      if ((actual.mm=01) || (actual.mm=03) || (actual.mm=05) || (actual.mm=07) || (actual.mm=8) || (actual.mm=10) || (actual.mm=12))
                      {
                         printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                         printf("en %i día(s).\n",31-actual.dd);
                         printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                      }
                      else if ((actual.mm=04) || (actual.mm=06) || (actual.mm=9) || (actual.mm=11))
                      {
                         printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                         printf("en %i día(s).\n",30-actual.dd);
                         printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                      }
                      else
                      {
                          if (((actual.yy%4 == 0) && (actual.yy%100 != 0)) || (actual.yy%400 == 0))
                          {
                            printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                            printf("en %i día(s)\n.",29-actual.dd);
                            printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                          }
                          else
                          {
                            printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                            printf("en %i día(s)\n.",28-actual.dd);
                            printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                          }
                      }
                  }
                  if (rango2>0)
                  {
                      impres = 23.232 * rango2;
                      printf("El contrato finaliza en %i mes(es).\n",rango2);
                      printf("Se le pagarán en total %f € al final de los %i mes(es) restantes.\n\n", impres,rango2);
                  }
                }
            case 2:
                {
                  printf("Escriba/añada más condiciones que sugiera según cada punto, le explicamos cómo hacerlo:\n\n");
                  printf("Primero escriba de a que tipo de condición se va a referir (abastecimiento, recogida o seguro).\n");
                  printf("Escriba después el importe mensual que desea que tenga dicho servicio.\n");
                  printf("Por último, escriba cuántos meses activos desea que el servicio esté activo.\n\n");

                      FILE *e;
                      e = fopen("condicionesbebida.txt","ab");
                      if (e==NULL)
                        printf("Error.\n");
                      tcondicion condicion;
                      printf("Ingrese (literalmente) el tipo de condición (abastecimiento/recogida/seguro):\t");
                      do
                      {
                          scanf("%s",condicion.tipo);
                      }
                      while((condicion.tipo!='abastecimiento') && (condicion.tipo!='recogida') && (condicion.tipo!='seguro'));
                      fflush(stdin);
                      printf("Ingrese el importe mensual en € que sugiere del servicio:\t");
                      do
                      {
                        scanf("%f",&condicion.importe);
                      }
                      while(condicion.importe>0);
                      printf("Ingrese el tiempo mensual que sugiere que el servicio esté activo:\t");
                      do
                      {
                        scanf("%i",condicion.tiempo);
                      }
                      while(condicion.tiempo>0);
                      fwrite(&condicion, sizeof(tcondicion), 1, e);
                      fclose (e);


                  printf("Usted ha escrito:\n\n");
                  e=fopen("condicionesbebida.txt","rb");
                  if(e==NULL)
                    printf("Error.\n");
                  else
                  {
                      tcondicion condicion;
                      fread(&condicion,sizeof(tcondicion),1,e);
                      while(!feof(e));
                      {
                          printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                          fread(&condicion,sizeof(tcondicion),1,e);
                      }
                      fclose(e);
                  }
                  printf("¿Quiere realizar algun cambio? (si/no):\t");
                  do
                  {
                    scanf("%s",resp);
                  }
                  while((resp[15]!="si") && (resp[15]!="no"));
                  if (resp[15]="si")
                  {
                      FILE *e;
                      e=feopen("condicionesbebida.txt","r+b");
                      if (e==NULL)
                        printf("Error.\n");
                      else
                      {
                         printf("¿En qué tipo de condición desea realizar un cambio?\n");
                         printf("abastecimiento/recogida/seguro\n");
                         do
                            {
                                scanf("%s",resp2);
                            }
                        while((resp2!='abastecimiento') && (resp2!='recogida') && (resp2!='seguro'));
                        tcondicion condicion;
                        int existe=0;
                        fread(&condicion,sizeof(tcondicion),1,e);
                        while (!feof(e))
                        {
                          if (resp2==condicion.tipo)
                            {
                          printf("Ingrese nuevo importe y tiempo activo separado por coma:\n");
                            do
                            {
                              scanf("%f,%i",&condicion.importe,&condicion.tiempo);
                            }
                            while ((condicion.importe<0) || (condicion.tiempo<0));
                            int pos=ftell(e)-sizeof(tcondicion);
                            fseek(e,pos,SEEK_SET);
                            fwrite(&condicion,sizeof(tcondicion),1,e);
                            printf("Se han realizado los cambios requeridos.\n");
                            existe=1;
                            break;
                            }
                          fread(&condicion,sizeof(tcondicion),1,e);
                        }
                        if(existe==0)
                            printf("Ese tipo de condición no existe.\n");
                        fclose(e);
                      }
                  }
                  printf("Examinemos sus sugerencias...");
                  if ((condicion.tipo=='abastecimiento')&&(condicion.importe>13.34))
                  {
                      printf("Creemos que %f € no es un precio que pagaríamos por %s...\n",condicion.importe,condicion.tipo);
                      printf("Otro proveedor podría facilitarnos el mismo servicio por un precio menor,\n");
                      printf("como por ejemplo 9 €, pero aceptaríamos un importe mensual de 11 € de su parte.\n",condicion.importe-4,condicion.importe-2);
                      printf("¿Le parece bien? (si/no):\t");
                      do
                      {
                          scanf("%s",resp3);
                      }
                      while ((resp3[15]!="si") && (resp3[15]!="no"));
                      switch(resp3[15])
                      {
                      case 'si':
                        {
                        printf("Perfecto, corregiremos a continuación el importe:\n\n");
                        condicion.importe=11.00;
                        FILE *e;
                        e=fopen("condicionesbebida.txt","rb");
                        if(e==NULL)
                            printf("Error.\n");
                        else
                            {
                                tcondicion condicion;
                                fread(&condicion,sizeof(tcondicion),1,e);
                                while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                fclose(e);
                            }
                        }
                      case 'no':
                        {
                          float nimp;
                          printf("No podemos ofrecerle tal cantidad de dinero.\n");
                          printf("Introduzca un importe más negociable:\t");
                          do
                          {
                              scanf("%f",&nimp);
                          }
                          while(nimp>13.34);
                          if(nimp<=9.56)
                            {
                              printf("Por supuesto que aceptamos su oferta, corregimos ahora mismo el importe:\n\n");
                              condicion.importe=nimp;
                              FILE *e;
                              e=fopen("condicionesbebida.txt","rb");
                              if(e==NULL)
                              printf("Error.\n");
                              else
                               {
                                  tcondicion condicion;
                                  fread(&condicion,sizeof(tcondicion),1,e);
                                  while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                  fclose(e);
                               }
                            }
                          if (nimp>9.56)
                            {
                                printf("Es un precio más asequible, pero tengamos en cuenta que le pagamos más servicios\n");
                                printf("¿qué le parece si lo dejamos en %f? (si/no)\t",nimp-1.34);
                                char resp4[15];
                                do
                                {
                                    scanf("%s",resp4);
                                }
                                while ((resp4[15]!="si")&&(resp4[15]!="no"));
                                switch(resp4[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=nimp-1.34;
                                      FILE *e;
                                      e=fopen("condicionesbebida.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                            }
                          }
                        }
                      }

                  }
                  if((condicion.tipo=='abastecimiento')&&(condicion.importe<=13.34)&&(condicion.importe>10.13));
                  {
                      printf("Es un precio considerable, pero tengamos en cuenta que le pagamos más servicios\n");
                      printf("¿qué le parece si lo dejamos en %f? (si/no)\t",condicion.importe-1.13);
                      char resp5[15];
                                do
                                {
                                    scanf("%s",resp5);
                                }
                                while ((resp5[15]!="si")&&(resp5[15]!="no"));
                                switch(resp5[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=condicion.importe-1.13;
                                      FILE *e;
                                      e=fopen("condicionesbebida.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                  }
                  if((condicion.tipo=='abastecimiento')&&(condicion.importe<=10.13))
                  {
                    printf("Por supuesto aceptaremos su oferta, ccorrijamos el cambio:\n\n");
                                      condicion.importe;
                                      FILE *e;
                                      e=fopen("condicionesbebida.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe>13.34))
                  {
                    printf("Creemos que %f € no es un precio que pagaríamos por %s...\n",condicion.importe,condicion.tipo);
                    printf("Otro proveedor podría facilitarnos el mismo servicio por un precio menor,\n");
                    printf("como por ejemplo 9 €, pero aceptaríamos un importe mensual de 11 € de su parte.\n",condicion.importe-4,condicion.importe-2);
                    printf("¿Le parece bien? (si/no):\t");
                    do
                      {
                          scanf("%s",resp3);
                      }
                    while ((resp3[15]!="si") && (resp3[15]!="no"));
                    switch(resp3[15])
                      {
                      case 'si':
                        {
                         printf("Perfecto, corregiremos a continuación el importe:\n\n");
                         condicion.importe=11.00;
                         FILE *e;
                         e=fopen("condicionesbebida.txt","rb");
                         if(e==NULL)
                            printf("Error.\n");
                         else
                            {
                                tcondicion condicion;
                                fread(&condicion,sizeof(tcondicion),1,e);
                                while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                fclose(e);
                            }
                        }
                      case 'no':
                        {
                          float nimp;
                          printf("No podemos ofrecerle tal cantidad de dinero.\n");
                          printf("Introduzca un importe más negociable:\t");
                          do
                          {
                              scanf("%f",&nimp);
                          }
                          while(nimp>13.34);
                          if(nimp<=9.56)
                            {
                              printf("Por supuesto que aceptamos su oferta, corregimos ahora mismo el importe:\n\n");
                              condicion.importe=nimp;
                              FILE *e;
                              e=fopen("condicionesbebida.txt","rb");
                              if(e==NULL)
                              printf("Error.\n");
                              else
                               {
                                  tcondicion condicion;
                                  fread(&condicion,sizeof(tcondicion),1,e);
                                  while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                  fclose(e);
                               }
                            }
                          if(nimp>9.56)
                            {
                                printf("Es un precio más asequible, pero tengamos en cuenta que le pagamos más servicios\n");
                                printf("¿qué le parece si lo dejamos en %f? (si/no)\t",nimp-1.34);
                                char resp4[15];
                                do
                                {
                                    scanf("%s",resp4);
                                }
                                while ((resp4[15]!="si")&&(resp4[15]!="no"));
                                switch(resp4[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=nimp-1.34;
                                      FILE *e;
                                      e=fopen("condicionesbebida.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                            }
                          }
                        }
                      }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe<=13.34)&&(condicion.importe>10.13));
                  {
                      printf("Es un precio considerable, pero tengamos en cuenta que le pagamos más servicios\n");
                      printf("¿qué le parece si lo dejamos en %f? (si/no)\t",condicion.importe-1.13);
                      char resp5[15];
                                do
                                {
                                    scanf("%s",resp5);
                                }
                                while ((resp5[15]!="si")&&(resp5[15]!="no"));
                                switch(resp5[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=condicion.importe-1.13;
                                      FILE *e;
                                      e=fopen("condicionesbebida.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe<=10.13))
                  {
                    printf("Por supuesto aceptaremos su oferta, corrijamos el cambio:\n\n");
                                      condicion.importe;
                                      FILE *e;
                                      e=fopen("condicionesbebida.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                  }
                  if (condicion.tipo[15]='seguro');
                  {
                      printf("Para negociar las características del seguro, es necesario\n");
                      printf("concretar una reunión junto a nuestro gestor, llame nuestro numero para\n");
                      printf("fechar la reunión. Gracias.\n\n");
                  }
                  printf("¿desea salir o volver al menu principal?");
                  do
                    {
                        printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                        scanf("%s",salirseguir);
                        if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                            {
                               printf("Volviendo al menu principal...");
                               main();
                            }
                        else
                            {
                               printf("Gracias por usar nuestra plataforma. Buen día.");
                               return 0;
                            }
                    }
                  while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
    }

}
while(elec[15]!='entrega' && elec[15]!='Entrega' && elec[15]!='ENTREGA' && elec[15]!='contrato' && elec[15]!='Contrato' && elec[15]!='CONTRATO');
}


void proveedorpescado (void)
{
    char elec[15];
    srand(time(NULL));
    int nums = rand()%4;
    char terminar[15];
    int marca,cajas;
    time_t rawtime = time(NULL);
    struct tm *now = localtime(&rawtime);
    fecha actual;
    actual.dd = now->tm_mday;
    actual.mm = now->tm_mon;
    actual.yy = now->tm_year+1900;
    fecha entrega,rango;
    int repetir;
    char otraop[15];
    char salirseguir[15];
    int qc;
    int rango2;
    float impres;
    int cambio;
    char resp[15];
    char resp2[15];
    char resp3[15];



    printf("¿Quiere realizar una entrega de productos marinos o consultar el contrato vigente?\n");
    printf("Si quiere realizar una entrega escriba: entrega;\n");
    printf("Si quiere consultar el contrato escriba: contrato.\n");
    do
    {
        printf("Asegurese de escribir ortográficamente bien la respuesta.\n");
        printf("Escriba:\t");
        scanf("%s",elec);
        if ((elec[15]='Entrega') || (elec[15]='entrega') || (elec[15]='ENTREGA'))
        {

            char listapescado[1000];
            FILE *t;
            t = fopen("listapescado.txt","r");
            do
                {
                    printf("Le adjuntamos nuestras necesidades actuales de productos marinos:\n");
                    if (t == NULL)
                        {
                            printf("Error al abrir el documento, inténtelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(t)) == 0)
                            {
                                fscanf(t,"%s",listapescado);
                                printf("%s\n",listapescado);
                            }
                            printf("\n\n");
                        }
                    fclose(t);
                }
            while (t == NULL);

            printf("¿Qué cantidades de cada producto nos va a traer?");
            printf("Fijese que a cada producto le corresponde un numero (x),\n");
            printf("escriba dicho numero y a continuación el numero de cajas\n");
            printf("que nos va a traer, separado por una coma los dos numeros, por ejemplo:\n");
            printf("si nos quiere traer 2 cajas de Atún, escriba: 9,2\n");

            do
                {
                    do
                    {
                       printf("Escriba los numeros requeridos:\t");
                       scanf("%i,%i\n",&marca,&cajas);
                       if ((marca=3) || (marca=5) || (marca=7) || (marca=8) || (marca=10))
                        {
                            printf("No necesitamos de este tipo de productos marinos,\n");
                            printf("lea la lista facilitada e intentelo de nuevo.\n");
                            terminar[15]="no";
                        }
                        else
                        {
                            switch (marca)
                            {
                            case '1':
                                {
                                    if ((cajas=1) || (cajas=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 cajas.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '2':
                                {
                                    if (cajas=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 caja.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '4':
                                {
                                    if ((cajas=1) || (cajas=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 cajas.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '6':
                                {
                                    if (cajas=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 caja.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '9':
                                {
                                    if ((cajas=1) || (cajas=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 cajas.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;
                            }
                        }
                    }
                    while(terminar[15]="no");

                    printf("¿Ha terminado? Escriba (si), si quiere pasar a concretar la fecha de entrega;\n");
                    printf("o (no), si aun nos va a entregar más tipos de productos marinos:\t");
                    do
                        {
                            scanf("%s",terminar);
                        }
                    while(terminar!="si" && terminar!="Si" && terminar!="SI" && terminar!='sí' && terminar!='Sí' && terminar!='SÍ' && terminar!="no" && terminar!="No" && terminar!="NO");
                }
                while ((marca<1) || (marca>16) || (cajas<=0) || (terminar[15]="no") || (terminar[15]="No") || (terminar[15]="NO"));


            printf("Concretemos la fecha para el reabastecimiento.\n");
            printf("Rescuerde que la recogida de provisiones se realiza desde las 8:00h hasta las 11:00h.\n");
            printf("Introduzca cuándo nos entregará las provisiones.\n");

            do
                {
                    printf("Escriba la fecha de la siguiente manera: dd/mm/yy (separado con barra):\t");
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
                            printf("Perfecto.\n");
                            repetir=0;
                        }
                    else
                        {
                            printf("No podemos permitirmos tantos dias sin reponer productos marinos.\n");
                            printf("Como máximo admitimos una semana por reabastecimiento.");
                            printf("Puede consultar las condiciones en el apartado de contrato.");
                            printf("Por favor, corrija la fecha de entrega:\t");
                            repetir=1;
                        }
                }
            while ((entrega.dd > 31) || (entrega.dd < 0) || (entrega.mm > 12) || (entrega.mm < 0) || (entrega.yy < actual.yy) || (repetir=1));

        printf("Gracias. Hemos registrado los datos de la entrega.");
        do
        {
          printf("¿Quiere realizar otra operacion como proveedor? (si/no):\t");
          scanf("%s",otraop);
            if ((otraop[15]="no") || (otraop[15]="No") || (otraop[15]="NO"))
            {
              printf("¿Quiere volver al MENU PRINCIPAL o SALIR de nuestra plataforma?\n");

              do
              {
                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                  scanf("%s",salirseguir);
                if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                {
                    printf("Volviendo al menu principal...");
                    main();
                }
                else
                {
                    printf("Gracias por usar nuestra plataforma. Buen día.");
                    return 0;
                }

              }
              while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="PRINCIPAL" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
            }
        }
        while(otraop[15]!="no" && otraop[15]!="No" && otraop[15]!="NO" && otraop[15]!="si" && otraop[15]!="Si" && otraop[15]!="SI" && otraop[15]!='sí' && otraop[15]!='Sí' && otraop[15]!='SÍ');
        }
        else
        {
            tcondicion condicion;
            char contratopescado[1000];
            FILE *c = fopen("contratopescado.txt","r");
            do
                {
                    printf("Le mostramos el contrato vigente con PROVEEDOR-PRODUCTOS MARINOS:\n");
                    if (c == NULL)
                        {
                            printf("Error, inténtelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(c)) == 0)
                            {
                                fscanf(c,"%s",contratopescado);
                                printf("%s\n",contratopescado);
                            }
                            printf("\n\n");
                        }
                    fclose(c);
                }
            while (c == NULL);



            printf("Le exponemos a continuación las opciones que tiene.\n");
            printf("A cada opción le corresponde un numero, escriba dicho\n");
            printf("número cuando se le requiera elegir su opción.\n\n");
            printf("ESCRIBA:\n\n");
            printf("1: Si quiere consultar cuántos meses activos restan hasta\n");
            printf("posible renovación o fin de contrato y consultar por tanto el\n");
            printf("importe restante a pagar (mensual).\n\n");
            printf("2: Si quiere solicitar algún cambio en las condiciones del contrato:\n");
            printf(" suprimir alguna condición, negociar precio de la actividad o consultar las\n");
            printf("condiciones para cancelar el contrato.\n\n");
            printf("3: Ampliar el contrato (añadir plazo activo o nuevos tipos de productos marinos\n");
            printf("de los que pueda abastecernos).\n\n");
            do
            {
              scanf("%i",&qc);
            }
            while ((qc>0)&&(qc<4));

            switch (qc)
            {
            case '1':
                {
                  rango2 = 12 - actual.mm;
                  if (rango2 = 0);
                  {
                      impres = 32.112;
                      if ((actual.mm=01) || (actual.mm=03) || (actual.mm=05) || (actual.mm=07) || (actual.mm=8) || (actual.mm=10) || (actual.mm=12))
                      {
                         printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                         printf("en %i día(s).\n",31-actual.dd);
                         printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                      }
                      else if ((actual.mm=04) || (actual.mm=06) || (actual.mm=9) || (actual.mm=11))
                      {
                         printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                         printf("en %i día(s).\n",30-actual.dd);
                         printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                      }
                      else
                      {
                          if (((actual.yy%4 == 0) && (actual.yy%100 != 0)) || (actual.yy%400 == 0))
                          {
                            printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                            printf("en %i día(s)\n.",29-actual.dd);
                            printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                          }
                          else
                          {
                            printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                            printf("en %i día(s)\n.",28-actual.dd);
                            printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                          }
                      }
                  }
                  if (rango2>0)
                  {
                      impres = 23.232 * rango2;
                      printf("El contrato finaliza en %i mes(es).\n",rango2);
                      printf("Se le pagarán en total %f € al final de los %i mes(es) restantes.\n\n", impres,rango2);
                  }
                }
            case 2:
                {
                  printf("Escriba/añada más condiciones que sugiera según cada punto, le explicamos cómo hacerlo:\n\n");
                  printf("Primero escriba de a que tipo de condición se va a referir (abastecimiento, recogida o seguro).\n");
                  printf("Escriba después el importe mensual que desea que tenga dicho servicio.\n");
                  printf("Por último, escriba cuántos meses activos desea que el servicio esté activo.\n\n");

                      FILE *e;
                      e = fopen("condicionespescado.txt","ab");
                      if (e==NULL)
                        printf("Error.\n");
                      tcondicion condicion;
                      printf("Ingrese (literalmente) el tipo de condición (abastecimiento/recogida/seguro):\t");
                      do
                      {
                          scanf("%s",condicion.tipo);
                      }
                      while((condicion.tipo!='abastecimiento') && (condicion.tipo!='recogida') && (condicion.tipo!='seguro'));
                      fflush(stdin);
                      printf("Ingrese el importe mensual en € que sugiere del servicio:\t");
                      do
                      {
                        scanf("%f",&condicion.importe);
                      }
                      while(condicion.importe>0);
                      printf("Ingrese el tiempo mensual que sugiere que el servicio esté activo:\t");
                      do
                      {
                        scanf("%i",condicion.tiempo);
                      }
                      while(condicion.tiempo>0);
                      fwrite(&condicion, sizeof(tcondicion), 1, e);
                      fclose (e);


                  printf("Usted ha escrito:\n\n");
                  e=fopen("condicionespescado.txt","rb");
                  if(e==NULL)
                    printf("Error.\n");
                  else
                  {
                      tcondicion condicion;
                      fread(&condicion,sizeof(tcondicion),1,e);
                      while(!feof(e));
                      {
                          printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                          fread(&condicion,sizeof(tcondicion),1,e);
                      }
                      fclose(e);
                  }
                  printf("¿Quiere realizar algun cambio? (si/no):\t");
                  do
                  {
                    scanf("%s",resp);
                  }
                  while((resp!="si") && (resp!="no"));
                  if (resp[15]="si")
                  {
                      FILE *e;
                      e=feopen("condicionespescado.txt","r+b");
                      if (e==NULL)
                        printf("Error.\n");
                      else
                      {
                         printf("¿En qué tipo de condición desea realizar un cambio?\n");
                         printf("abastecimiento/recogida/seguro\n");
                         do
                            {
                                scanf("%s",resp2);
                            }
                        while((resp2!='abastecimiento') && (resp2!='recogida') && (resp2!='seguro'));
                        tcondicion condicion;
                        int existe=0;
                        fread(&condicion,sizeof(tcondicion),1,e);
                        while (!feof(e))
                        {
                          if (resp2==condicion.tipo)
                            {
                          printf("Ingrese nuevo importe y tiempo activo separado por coma:\n");
                            do
                            {
                              scanf("%f,%i",&condicion.importe,&condicion.tiempo);
                            }
                            while ((condicion.importe<0) || (condicion.tiempo<0));
                            int pos=ftell(e)-sizeof(tcondicion);
                            fseek(e,pos,SEEK_SET);
                            fwrite(&condicion,sizeof(tcondicion),1,e);
                            printf("Se han realizado los cambios requeridos.\n");
                            existe=1;
                            break;
                            }
                          fread(&condicion,sizeof(tcondicion),1,e);
                        }
                        if(existe==0)
                            printf("Ese tipo de condición no existe.\n");
                        fclose(e);
                      }
                  }
                  printf("Examinemos sus sugerencias...");
                  if ((condicion.tipo=='abastecimiento')&&(condicion.importe>13.34))
                  {
                      printf("Creemos que %f € no es un precio que pagaríamos por %s...\n",condicion.importe,condicion.tipo);
                      printf("Otro proveedor podría facilitarnos el mismo servicio por un precio menor,\n");
                      printf("como por ejemplo 9 €, pero aceptaríamos un importe mensual de 11 € de su parte.\n",condicion.importe-4,condicion.importe-2);
                      printf("¿Le parece bien? (si/no):\t");
                      do
                      {
                          scanf("%s",resp3);
                      }
                      while ((resp3[15]!="si") && (resp3[15]!="no"));
                      switch(resp3[15])
                      {
                      case 'si':
                        {
                        printf("Perfecto, corregiremos a continuación el importe:\n\n");
                        condicion.importe=11.00;
                        FILE *e;
                        e=fopen("condicionespescado.txt","rb");
                        if(e==NULL)
                            printf("Error.\n");
                        else
                            {
                                tcondicion condicion;
                                fread(&condicion,sizeof(tcondicion),1,e);
                                while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                fclose(e);
                            }
                        }
                      case 'no':
                        {
                          float nimp;
                          printf("No podemos ofrecerle tal cantidad de dinero.\n");
                          printf("Introduzca un importe más negociable:\t");
                          do
                          {
                              scanf("%f",&nimp);
                          }
                          while(nimp>13.34);
                          if(nimp<=9.56)
                            {
                              printf("Por supuesto que aceptamos su oferta, corregimos ahora mismo el importe:\n\n");
                              condicion.importe=nimp;
                              FILE *e;
                              e=fopen("condicionespescado.txt","rb");
                              if(e==NULL)
                              printf("Error.\n");
                              else
                               {
                                  tcondicion condicion;
                                  fread(&condicion,sizeof(tcondicion),1,e);
                                  while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                  fclose(e);
                               }
                            }
                          if (nimp>9.56)
                            {
                                printf("Es un precio más asequible, pero tengamos en cuenta que le pagamos más servicios\n");
                                printf("¿qué le parece si lo dejamos en %f? (si/no)\t",nimp-1.34);
                                char resp4[15];
                                do
                                {
                                    scanf("%s",resp4);
                                }
                                while ((resp4[15]!="si")&&(resp4[15]!="no"));
                                switch(resp4[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=nimp-1.34;
                                      FILE *e;
                                      e=fopen("condicionespescado.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="Principal") || (salirseguir[15]="PRINCIPAL"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                            }
                          }
                        }
                      }

                  }
                  if((condicion.tipo=='abastecimiento')&&(condicion.importe<=13.34)&&(condicion.importe>10.13));
                  {
                      printf("Es un precio considerable, pero tengamos en cuenta que le pagamos más servicios\n");
                      printf("¿qué le parece si lo dejamos en %f? (si/no)\t",condicion.importe-1.13);
                      char resp5[15];
                                do
                                {
                                    scanf("%s",resp5);
                                }
                                while ((resp5[15]!="si")&&(resp5[15]!="no"));
                                switch(resp5[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=condicion.importe-1.13;
                                      FILE *e;
                                      e=fopen("condicionespescado.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                  }
                  if((condicion.tipo=='abastecimiento')&&(condicion.importe<=10.13))
                  {
                    printf("Por supuesto aceptaremos su oferta, ccorrijamos el cambio:\n\n");
                                      condicion.importe;
                                      FILE *e;
                                      e=fopen("condicionespescado.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe>13.34))
                  {
                    printf("Creemos que %f € no es un precio que pagaríamos por %s...\n",condicion.importe,condicion.tipo);
                    printf("Otro proveedor podría facilitarnos el mismo servicio por un precio menor,\n");
                    printf("como por ejemplo 9 €, pero aceptaríamos un importe mensual de 11 € de su parte.\n",condicion.importe-4,condicion.importe-2);
                    printf("¿Le parece bien? (si/no):\t");
                    do
                      {
                          scanf("%s",resp3);
                      }
                    while ((resp3[15]!="si") && (resp3[15]!="no"));
                    switch(resp3[15])
                      {
                      case 'si':
                        {
                         printf("Perfecto, corregiremos a continuación el importe:\n\n");
                         condicion.importe=11.00;
                         FILE *e;
                         e=fopen("condicionespescado.txt","rb");
                         if(e==NULL)
                            printf("Error.\n");
                         else
                            {
                                tcondicion condicion;
                                fread(&condicion,sizeof(tcondicion),1,e);
                                while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                fclose(e);
                            }
                        }
                      case 'no':
                        {
                          float nimp;
                          printf("No podemos ofrecerle tal cantidad de dinero.\n");
                          printf("Introduzca un importe más negociable:\t");
                          do
                          {
                              scanf("%f",&nimp);
                          }
                          while(nimp>13.34);
                          if(nimp<=9.56)
                            {
                              printf("Por supuesto que aceptamos su oferta, corregimos ahora mismo el importe:\n\n");
                              condicion.importe=nimp;
                              FILE *e;
                              e=fopen("condicionespescado.txt","rb");
                              if(e==NULL)
                              printf("Error.\n");
                              else
                               {
                                  tcondicion condicion;
                                  fread(&condicion,sizeof(tcondicion),1,e);
                                  while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                  fclose(e);
                               }
                            }
                          if(nimp>9.56)
                            {
                                printf("Es un precio más asequible, pero tengamos en cuenta que le pagamos más servicios\n");
                                printf("¿qué le parece si lo dejamos en %f? (si/no)\t",nimp-1.34);
                                char resp4[15];
                                do
                                {
                                    scanf("%s",resp4);
                                }
                                while ((resp4[15]!="si")&&(resp4[15]!="no"));
                                switch(resp4[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=nimp-1.34;
                                      FILE *e;
                                      e=fopen("condicionespescado.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                            }
                          }
                        }
                      }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe<=13.34)&&(condicion.importe>10.13));
                  {
                      printf("Es un precio considerable, pero tengamos en cuenta que le pagamos más servicios\n");
                      printf("¿qué le parece si lo dejamos en %f? (si/no)\t",condicion.importe-1.13);
                      char resp5[15];
                                do
                                {
                                    scanf("%s",resp5);
                                }
                                while ((resp5[15]!="si")&&(resp5[15]!="no"));
                                switch(resp5[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=condicion.importe-1.13;
                                      FILE *e;
                                      e=fopen("condicionespescado.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe<=10.13))
                  {
                    printf("Por supuesto aceptaremos su oferta, corrijamos el cambio:\n\n");
                                      condicion.importe;
                                      FILE *e;
                                      e=fopen("condicionespescado.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                  }
                  if (condicion.tipo[15]='seguro');
                  {
                      printf("Para negociar las características del seguro, es necesario\n");
                      printf("concretar una reunión junto a nuestro gestor, llame nuestro numero para\n");
                      printf("fechar la reunión. Gracias.\n\n");
                  }
                  printf("¿desea salir o volver al menu principal?");
                  do
                    {
                        printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                        scanf("%s",salirseguir);
                        if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                            {
                               printf("Volviendo al menu principal...");
                               main();
                            }
                        else
                            {
                               printf("Gracias por usar nuestra plataforma. Buen día.");
                               return 0;
                            }
                    }
                  while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
    }
}
while(elec[15]!='entrega' && elec[15]!='Entrega' && elec[15]!='ENTREGA' && elec[15]!='contrato' && elec[15]!='Contrato' && elec[15]!='CONTRATO');
}


void proveedorcarne (void)
{
    char elec[15];
    srand(time(NULL));
    int nums = rand()%4;
    char terminar[15];
    int marca,cajas;
    time_t rawtime = time(NULL);
    struct tm *now = localtime(&rawtime);
    fecha actual;
    actual.dd = now->tm_mday;
    actual.mm = now->tm_mon;
    actual.yy = now->tm_year+1900;
    fecha entrega,rango;
    int repetir;
    char otraop[15];
    char salirseguir[15];
    int qc;
    int rango2;
    float impres;
    int cambio;
    char resp[15];
    char resp2[15];
    char resp3[15];



    printf("¿Quiere realizar una entrega de carnes o consultar el contrato vigente?\n");
    printf("Si quiere realizar una entrega escriba: entrega;\n");
    printf("Si quiere consultar el contrato escriba: contrato.\n");
    do
    {
        printf("Asegurese de escribir ortográficamente bien la respuesta.\n");
        printf("Escriba:\t");
        scanf("%s",elec);
        if ((elec[15]='Entrega') || (elec[15]='entrega') || (elec[15]='ENTREGA'))
        {

            char listacarnes[1000];
            FILE *t;
            t = fopen("listacarnes.txt","r");
            do
                {
                    printf("Le adjuntamos nuestras necesidades actuales de carnes:\n");
                    if (t == NULL)
                        {
                            printf("Error al abrir el documento, inténtelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(t)) == 0)
                            {
                                fscanf(t,"%s",listacarnes);
                                printf("%s\n",listacarnes);
                            }
                            printf("\n\n");
                        }
                    fclose(t);
                }
            while (t == NULL);

            printf("¿Qué cantidades de cada producto nos va a traer?");
            printf("Fijese que a cada producto le corresponde un numero (x),\n");
            printf("escriba dicho numero y a continuación el numero de cajas\n");
            printf("que nos va a traer, separado por una coma los dos numeros, por ejemplo:\n");
            printf("si nos quiere traer 2 cajas de Filetes de Ternera, escriba: 1,2\n");

            do
                {
                    do
                    {
                       printf("Escriba los numeros requeridos:\t");
                       scanf("%i,%i\n",&marca,&cajas);
                       if ((marca=3) || (marca=5) || (marca=7) || (marca=8))
                        {
                            printf("No necesitamos de este tipo de carnes,\n");
                            printf("lea la lista facilitada e intentelo de nuevo.\n");
                            terminar[15]="no";
                        }
                        else
                        {
                            switch (marca)
                            {
                            case '1':
                                {
                                    if ((cajas=1) || (cajas=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 cajas.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '2':
                                {
                                    if (cajas=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 caja.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '4':
                                {
                                    if ((cajas=1) || (cajas=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 cajas.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '6':
                                {
                                    if (cajas=1)
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 1 caja.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;

                            case '9':
                                {
                                    if ((cajas=1) || (cajas=2))
                                    {
                                        printf("Perfecto.\n");
                                        terminar[15]="si";
                                    }
                                    else
                                    {
                                        printf("No necesitamos tantas unidades de este tipo,\n");
                                        printf("admitiriamos como maximo 2 cajas.\n");
                                        terminar[15]="no";
                                    }
                                }
                            break;
                            }
                        }
                    }
                    while(terminar[15]="no");

                    printf("¿Ha terminado? Escriba (si), si quiere pasar a concretar la fecha de entrega;\n");
                    printf("o (no), si aun nos va a entregar más tipos de carnes:\t");
                    do
                        {
                            scanf("%s",terminar);
                        }
                    while(terminar!="si" && terminar!="Si" && terminar!="SI" && terminar!='sí' && terminar!='Sí' && terminar!='SÍ' && terminar!="no" && terminar!="No" && terminar!="NO");
                }
                while ((marca<1) || (marca>16) || (cajas<=0) || (terminar[15]="no") || (terminar[15]="No") || (terminar[15]="NO"));


            printf("Concretemos la fecha para el reabastecimiento.\n");
            printf("Rescuerde que la recogida de provisiones se realiza desde las 8:00h hasta las 11:00h.\n");
            printf("Introduzca cuándo nos entregará las provisiones.\n");

            do
                {
                    printf("Escriba la fecha de la siguiente manera: dd/mm/yy (separado con barra):\t");
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
                            printf("Perfecto.\n");
                            repetir=0;
                        }
                    else
                        {
                            printf("No podemos permitirmos tantos dias sin reponer carnes.\n");
                            printf("Como máximo admitimos una semana por reabastecimiento.");
                            printf("Puede consultar las condiciones en el apartado de contrato.");
                            printf("Por favor, corrija la fecha de entrega:\t");
                            repetir=1;
                        }
                }
            while ((entrega.dd > 31) || (entrega.dd < 0) || (entrega.mm > 12) || (entrega.mm < 0) || (entrega.yy < actual.yy) || (repetir=1));

        printf("Gracias. Hemos registrado los datos de la entrega.");
        do
        {
          printf("¿Quiere realizar otra operacion como proveedor? (si/no):\t");
          scanf("%s",otraop);
            if ((otraop[15]="no") || (otraop[15]="No") || (otraop[15]="NO"))
            {
              printf("¿Quiere volver al MENU PRINCIPAL o SALIR de nuestra plataforma?\n");

              do
              {
                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                  scanf("%s",salirseguir);
                if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                {
                    printf("Volviendo al menu principal...");
                    main();
                }
                else
                {
                    printf("Gracias por usar nuestra plataforma. Buen día.");
                    return 0;
                }

              }
              while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
            }
        }
        while(otraop[15]!="no" && otraop[15]!="No" && otraop[15]!="NO" && otraop[15]!="si" && otraop[15]!="Si" && otraop[15]!="SI" && otraop[15]!='sí' && otraop[15]!='Sí' && otraop[15]!='SÍ');

        }
        else
        {
            tcondicion condicion;
            char contratocarne[1000];
            FILE *c = fopen("contratocarne.txt","r");
            do
                {
                    printf("Le mostramos el contrato vigente con PROVEEDOR-CARNES:\n");
                    if (c == NULL)
                        {
                            printf("Error, inténtelo de nuevo.\n");
                        }
                    else
                        {
                            while ((feof(c)) == 0)
                            {
                                fscanf(c,"%s",contratocarne);
                                printf("%s\n",contratocarne);
                            }
                            printf("\n\n");
                        }
                    fclose(c);
                }
            while (c == NULL);



            printf("Le exponemos a continuación las opciones que tiene.\n");
            printf("A cada opción le corresponde un numero, escriba dicho\n");
            printf("número cuando se le requiera elegir su opción.\n\n");
            printf("ESCRIBA:\n\n");
            printf("1: Si quiere consultar cuántos meses activos restan hasta\n");
            printf("posible renovación o fin de contrato y consultar por tanto el\n");
            printf("importe restante a pagar (mensual).\n\n");
            printf("2: Si quiere solicitar algún cambio en las condiciones del contrato:\n");
            printf(" suprimir alguna condición, negociar precio de la actividad o consultar las\n");
            printf("condiciones para cancelar el contrato.\n\n");
            printf("3: Ampliar el contrato (añadir plazo activo o nuevos tipos de carnes\n");
            printf("de los que pueda abastecernos).\n\n");
            do
            {
              scanf("%i",&qc);
            }
            while ((qc>0)&&(qc<4));

            switch (qc)
            {
            case '1':
                {
                  rango2 = 12 - actual.mm;
                  if (rango2 = 0);
                  {
                      impres = 32.112;
                      if ((actual.mm=01) || (actual.mm=03) || (actual.mm=05) || (actual.mm=07) || (actual.mm=8) || (actual.mm=10) || (actual.mm=12))
                      {
                         printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                         printf("en %i día(s).\n",31-actual.dd);
                         printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                      }
                      else if ((actual.mm=04) || (actual.mm=06) || (actual.mm=9) || (actual.mm=11))
                      {
                         printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                         printf("en %i día(s).\n",30-actual.dd);
                         printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                      }
                      else
                      {
                          if (((actual.yy%4 == 0) && (actual.yy%100 != 0)) || (actual.yy%400 == 0))
                          {
                            printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                            printf("en %i día(s)\n.",29-actual.dd);
                            printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                          }
                          else
                          {
                            printf("El contrato finaliza este mismo mes, el importe se pagará\n");
                            printf("en %i día(s)\n.",28-actual.dd);
                            printf("A final del mes recibirán los %f € restantes.\n\n",impres);
                          }
                      }
                  }
                  if (rango2>0)
                  {
                      impres = 23.232 * rango2;
                      printf("El contrato finaliza en %i mes(es).\n",rango2);
                      printf("Se le pagarán en total %f € al final de los %i mes(es) restantes.\n\n", impres,rango2);
                  }
                }
            case 2:
                {
                  printf("Escriba/añada más condiciones que sugiera según cada punto, le explicamos cómo hacerlo:\n\n");
                  printf("Primero escriba de a que tipo de condición se va a referir (abastecimiento, recogida o seguro).\n");
                  printf("Escriba después el importe mensual que desea que tenga dicho servicio.\n");
                  printf("Por último, escriba cuántos meses activos desea que el servicio esté activo.\n\n");

                      FILE *e;
                      e = fopen("condicionescarne.txt","ab");
                      if (e==NULL)
                        printf("Error.\n");
                      tcondicion condicion;
                      printf("Ingrese (literalmente) el tipo de condición (abastecimiento/recogida/seguro):\t");
                      do
                      {
                          scanf("%s",condicion.tipo);
                      }
                      while((condicion.tipo!='abastecimiento') && (condicion.tipo!='recogida') && (condicion.tipo!='seguro'));
                      fflush(stdin);
                      printf("Ingrese el importe mensual en € que sugiere del servicio:\t");
                      do
                      {
                        scanf("%f",&condicion.importe);
                      }
                      while(condicion.importe>0);
                      printf("Ingrese el tiempo mensual que sugiere que el servicio esté activo:\t");
                      do
                      {
                        scanf("%i",condicion.tiempo);
                      }
                      while(condicion.tiempo>0);
                      fwrite(&condicion, sizeof(tcondicion), 1, e);
                      fclose (e);


                  printf("Usted ha escrito:\n\n");
                  e=fopen("condicionescarne.txt","rb");
                  if(e==NULL)
                    printf("Error.\n");
                  else
                  {
                      tcondicion condicion;
                      fread(&condicion,sizeof(tcondicion),1,e);
                      while(!feof(e));
                      {
                          printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                          fread(&condicion,sizeof(tcondicion),1,e);
                      }
                      fclose(e);
                  }
                  printf("¿Quiere realizar algun cambio? (si/no):\t");
                  do
                  {
                    scanf("%s",resp);
                  }
                  while((resp!="si") && (resp!="no"));
                  if (resp[15]="si")
                  {
                      FILE *e;
                      e=feopen("condicionescarne.txt","r+b");
                      if (e==NULL)
                        printf("Error.\n");
                      else
                      {
                         printf("¿En qué tipo de condición desea realizar un cambio?\n");
                         printf("abastecimiento/recogida/seguro\n");
                         do
                            {
                                scanf("%s",resp2);
                            }
                        while((resp2!='abastecimiento') && (resp2!='recogida') && (resp2!='seguro'));
                        tcondicion condicion;
                        int existe=0;
                        fread(&condicion,sizeof(tcondicion),1,e);
                        while (!feof(e))
                        {
                          if (resp2==condicion.tipo)
                            {
                          printf("Ingrese nuevo importe y tiempo activo separado por coma:\n");
                            do
                            {
                              scanf("%f,%i",&condicion.importe,&condicion.tiempo);
                            }
                            while ((condicion.importe<0) || (condicion.tiempo<0));
                            int pos=ftell(e)-sizeof(tcondicion);
                            fseek(e,pos,SEEK_SET);
                            fwrite(&condicion,sizeof(tcondicion),1,e);
                            printf("Se han realizado los cambios requeridos.\n");
                            existe=1;
                            break;
                            }
                          fread(&condicion,sizeof(tcondicion),1,e);
                        }
                        if(existe==0)
                            printf("Ese tipo de condición no existe.\n");
                        fclose(e);
                      }
                  }
                  printf("Examinemos sus sugerencias...");
                  if ((condicion.tipo=='abastecimiento')&&(condicion.importe>13.34))
                  {
                      printf("Creemos que %f € no es un precio que pagaríamos por %s...\n",condicion.importe,condicion.tipo);
                      printf("Otro proveedor podría facilitarnos el mismo servicio por un precio menor,\n");
                      printf("como por ejemplo 9 €, pero aceptaríamos un importe mensual de 11 € de su parte.\n",condicion.importe-4,condicion.importe-2);
                      printf("¿Le parece bien? (si/no):\t");
                      do
                      {
                          scanf("%s",resp3);
                      }
                      while ((resp3[15]!="si") && (resp3[15]!="no"));
                      switch(resp3[15])
                      {
                      case 'si':
                        {
                        printf("Perfecto, corregiremos a continuación el importe:\n\n");
                        condicion.importe=11.00;
                        FILE *e;
                        e=fopen("condicionescarne.txt","rb");
                        if(e==NULL)
                            printf("Error.\n");
                        else
                            {
                                tcondicion condicion;
                                fread(&condicion,sizeof(tcondicion),1,e);
                                while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                fclose(e);
                            }
                        }
                      case 'no':
                        {
                          float nimp;
                          printf("No podemos ofrecerle tal cantidad de dinero.\n");
                          printf("Introduzca un importe más negociable:\t");
                          do
                          {
                              scanf("%f",&nimp);
                          }
                          while(nimp>13.34);
                          if(nimp<=9.56)
                            {
                              printf("Por supuesto que aceptamos su oferta, corregimos ahora mismo el importe:\n\n");
                              condicion.importe=nimp;
                              FILE *e;
                              e=fopen("condicionescarne.txt","rb");
                              if(e==NULL)
                              printf("Error.\n");
                              else
                               {
                                  tcondicion condicion;
                                  fread(&condicion,sizeof(tcondicion),1,e);
                                  while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                  fclose(e);
                               }
                            }
                          if (nimp>9.56)
                            {
                                printf("Es un precio más asequible, pero tengamos en cuenta que le pagamos más servicios\n");
                                printf("¿qué le parece si lo dejamos en %f? (si/no)\t",nimp-1.34);
                                char resp4[15];
                                do
                                {
                                    scanf("%s",resp4);
                                }
                                while ((resp4[15]!="si")&&(resp4[15]!="no"));
                                switch(resp4[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=nimp-1.34;
                                      FILE *e;
                                      e=fopen("condicionescarne.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                            }
                          }
                        }
                      }

                  }
                  if((condicion.tipo=='abastecimiento')&&(condicion.importe<=13.34)&&(condicion.importe>10.13));
                  {
                      printf("Es un precio considerable, pero tengamos en cuenta que le pagamos más servicios\n");
                      printf("¿qué le parece si lo dejamos en %f? (si/no)\t",condicion.importe-1.13);
                      char resp5[15];
                                do
                                {
                                    scanf("%s",resp5);
                                }
                                while ((resp5[15]!="si")&&(resp5[15]!="no"));
                                switch(resp5[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=condicion.importe-1.13;
                                      FILE *e;
                                      e=fopen("condicionescarne.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                  }
                  if((condicion.tipo=='abastecimiento')&&(condicion.importe<=10.13))
                  {
                    printf("Por supuesto aceptaremos su oferta, ccorrijamos el cambio:\n\n");
                                      condicion.importe;
                                      FILE *e;
                                      e=fopen("condicionescarne.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe>13.34))
                  {
                    printf("Creemos que %f € no es un precio que pagaríamos por %s...\n",condicion.importe,condicion.tipo);
                    printf("Otro proveedor podría facilitarnos el mismo servicio por un precio menor,\n");
                    printf("como por ejemplo 9 €, pero aceptaríamos un importe mensual de 11 € de su parte.\n",condicion.importe-4,condicion.importe-2);
                    printf("¿Le parece bien? (si/no):\t");
                    do
                      {
                          scanf("%s",resp3);
                      }
                    while ((resp3[15]!="si") && (resp3[15]!="no"));
                    switch(resp3[15])
                      {
                      case 'si':
                        {
                         printf("Perfecto, corregiremos a continuación el importe:\n\n");
                         condicion.importe=11.00;
                         FILE *e;
                         e=fopen("condicionescarne.txt","rb");
                         if(e==NULL)
                            printf("Error.\n");
                         else
                            {
                                tcondicion condicion;
                                fread(&condicion,sizeof(tcondicion),1,e);
                                while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                fclose(e);
                            }
                        }
                      case 'no':
                        {
                          float nimp;
                          printf("No podemos ofrecerle tal cantidad de dinero.\n");
                          printf("Introduzca un importe más negociable:\t");
                          do
                          {
                              scanf("%f",&nimp);
                          }
                          while(nimp>13.34);
                          if(nimp<=9.56)
                            {
                              printf("Por supuesto que aceptamos su oferta, corregimos ahora mismo el importe:\n\n");
                              condicion.importe=nimp;
                              FILE *e;
                              e=fopen("condicionescarne.txt","rb");
                              if(e==NULL)
                              printf("Error.\n");
                              else
                               {
                                  tcondicion condicion;
                                  fread(&condicion,sizeof(tcondicion),1,e);
                                  while(!feof(e));
                                      {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                      }
                                  fclose(e);
                               }
                            }
                          if(nimp>9.56)
                            {
                                printf("Es un precio más asequible, pero tengamos en cuenta que le pagamos más servicios\n");
                                printf("¿qué le parece si lo dejamos en %f? (si/no)\t",nimp-1.34);
                                char resp4[15];
                                do
                                {
                                    scanf("%s",resp4);
                                }
                                while ((resp4[15]!="si")&&(resp4[15]!="no"));
                                switch(resp4[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=nimp-1.34;
                                      FILE *e;
                                      e=fopen("condicionescarne.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                            }
                          }
                        }
                      }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe<=13.34)&&(condicion.importe>10.13));
                  {
                      printf("Es un precio considerable, pero tengamos en cuenta que le pagamos más servicios\n");
                      printf("¿qué le parece si lo dejamos en %f? (si/no)\t",condicion.importe-1.13);
                      char resp5[15];
                                do
                                {
                                    scanf("%s",resp5);
                                }
                                while ((resp5[15]!="si")&&(resp5[15]!="no"));
                                switch(resp5[15])
                                   {
                                    case 'si':
                                    {
                                      printf("Perfecto, corregiremos a continuación el importe:\n\n");
                                      condicion.importe=condicion.importe-1.13;
                                      FILE *e;
                                      e=fopen("condicionescarne.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                                    }
                                     case 'no':
                                         {
                                             printf("Le sugermos contactar por telefono y concretar una reunión para negociar el importe.\n");
                                             printf("¿desea salir o volver al menu principal?\n");
                                             do
                                                {
                                                  printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                                                  scanf("%s",salirseguir);
                                                  if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                                                     {
                                                       printf("Volviendo al menu principal...");
                                                       main();
                                                     }
                                                  else
                                                     {
                                                       printf("Gracias por usar nuestra plataforma. Buen día.");
                                                       return 0;
                                                     }
                                                }
                                             while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
                                         }
                                   }
                  }
                  if((condicion.tipo=='recogida')&&(condicion.importe<=10.13))
                  {
                    printf("Por supuesto aceptaremos su oferta, corrijamos el cambio:\n\n");
                                      condicion.importe;
                                      FILE *e;
                                      e=fopen("condicionescarne.txt","rb");
                                      if(e==NULL)
                                        printf("Error.\n");
                                      else
                                        {
                                           tcondicion condicion;
                                           fread(&condicion,sizeof(tcondicion),1,e);
                                      while(!feof(e));
                                        {
                                         printf("%s / %0.2f €/ %i mes(es)\n\n",condicion.tipo,condicion.importe,condicion.tiempo);
                                         fread(&condicion,sizeof(tcondicion),1,e);
                                        }
                                      fclose(e);
                                        }
                  }
                  if (condicion.tipo[15]='seguro');
                  {
                      printf("Para negociar las características del seguro, es necesario\n");
                      printf("concretar una reunión junto a nuestro gestor, llame nuestro numero para\n");
                      printf("fechar la reunión. Gracias.\n\n");
                  }
                  printf("¿desea salir o volver al menu principal?");
                  do
                    {
                        printf("Escriba (principal) para volver o (salir) para salir de la plataforma:\t");
                        scanf("%s",salirseguir);
                        if ((salirseguir[15]="principal") || (salirseguir[15]="PRINCIPAL") || (salirseguir[15]="Principal"))
                            {
                               printf("Volviendo al menu principal...");
                               main();
                            }
                        else
                            {
                               printf("Gracias por usar nuestra plataforma. Buen día.");
                               return 0;
                            }
                    }
                  while(salirseguir!="principal" && salirseguir!="PRINCIPAL" && salirseguir!="Principal" && salirseguir!='salir' && salirseguir!='SALIR' && salirseguir!='Salir');
    }

}
while(elec[15]!='entrega' && elec[15]!='Entrega' && elec[15]!='ENTREGA' && elec[15]!='contrato' && elec[15]!='Contrato' && elec[15]!='CONTRATO');
}
