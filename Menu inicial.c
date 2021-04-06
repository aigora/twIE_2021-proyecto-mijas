#include <stdio.h>

int main()
{

  
char c;
char bienvenida,carta,calcular,suplementos,local,alergia,seleccion11;
	
printf("Buenos dias, bienvenido al restarante Mijas.\n");
printf("Conque identidad se relaciona:\n");
printf("Cliente 'C',Proveedor 'P', Publicista 'Pu', Gobierno 'G':\t");
scanf("%c",&bienvenida);

switch(bienvenida) {
	
	case 'C':
	case 'c':
		{ printf("Buenas cliente, escriba qué quiere consultar o realizar:\n");
    printf("consultar la carta, 'carta';\n");
    printf("calculadora de precios, 'calcular';\n");
    printf("consultar suplementos, 'suplementos';\n");
    printf("localización del restaurante, 'local';\n");
    printf("informe de alergenos, 'alergia';\n");
    scanf("%c",&seleccion11);
    do
    {
      switch (seleccion11)
    {
    case 'carta':
        printf("carta\n");
        break;
    case 'calcular':
        printf("calculadora\n");
        break;
    case 'suplementos':
        printf("suplementos\n");
        break;
    case 'local':
        printf("localización\n");
        break;
    case 'alergia':
        printf("alergenos\n");
        break;
    default:
        printf("Escriba su seleccion tal y como se le indica.\n");
        break;
    }
    }
    while (seleccion11!=carta && seleccion11!=calcular && seleccion11!=suplementos && seleccion11!=local && seleccion11!=alergia);
    printf ("\n");
		}
	break;
	
	case 'P':
	case 'p':
	
	break;
	
	case 'Pu':
	case 'pu':
	
	break;
	
	case 'G':
	case 'g':
	
	break;	
		
	default:
	printf("No disponemos de ese servicio.");
	break;	
}
	
return 0;	
}
