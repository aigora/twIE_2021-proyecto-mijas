#include <stdio.h>

int main()
{

  
char c;
char bienvenida;
	
printf("Buenos dias, bienvenido al restarante Mijas.\n");
printf("Conque identidad se relaciona:\n");
printf("Cliente 'C',Proveedor 'P', Publicista 'Pu', Gobierno 'G':\t");
scanf("%c",&bienvenida);

switch(bienvenida) {
	
	case 'C':
	case 'c':
	printf("Que desea:");
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
