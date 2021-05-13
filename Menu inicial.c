#include <stdio.h>
#include <stdlib.h>

int main(){
    char op1, op2, op3, op4;


    do{

    system("cls");
    printf("Bienvenido al Restaurante Mijas\n\n");
    printf("Con que identidad se relaciona?: \n");
    printf("Cliente 'C',Proveedor 'P', Publicista 'U', Gobierno 'G', Salir 'S':");
    scanf("%c", &op1);

      switch (op1)
      {

      case 'C':
      case 'c':
            cliente();
          break;

      case 'P':
      case 'p':
          proveedor();
        break;

      case 'u':
      case 'U':
        publicista();
      break;

      case 'G':
      case 'g':
          gobierno();

break;
        default:
          printf("\n");
      }

    printf("\n");
    }while (op1!='C'  &&  op1!='U' &&  op1!='P' &&  op1!='G' &&  op1!='S' && op1!='c'  &&  op1!='u' &&  op1!='p' &&  op1!='g' &&  op1!='s');

    return 0;
}
