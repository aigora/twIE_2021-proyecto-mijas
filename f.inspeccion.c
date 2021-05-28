#include "F.cliente.h"
#include "cabeceras.h"
#include "F.inspeccion.h"


int compContrato(char nombre,int contra)
{
    if(contra == 0)
{
printf("Se ha encontrado una irregularidad.\n");
printf("No dispone de contrato o no esta en regla.\");
return 1;//el uno significa irregularidad
}
else if(contra == 1)
{
printf("Contrato exixtente\n");
return 0;
}



}

int compSalario(char nombre,char tipo,float saldo)

{
switch(tipo){

//{case 'L':
//printf("Para este tipo de contrato (libre) solo es necesario disponer de contrato en regla:\n");
//if(contra == 0)
//{
//printf("Se ha encontrado una irregularidad.\n");
//printf("No dispone de contrato o no esta en regla.\");
//return 1;//el uno significa irregularidad
//}
//else if(contra == 1)
//{
//printf("Contrato en regla\n");
//return 0;
//}

case 'N':
if(saldo < 1250)
{
printf("Irregularidad encontrada");
printf("El trabajador %s no cobra lo estipulado para su tipo de contrato.",nombre);
return 1;
}

else
printf("Salario correcto.\n")
return 0;

case 'R':
if(saldo < 750)
{
printf("Irregularidad encontrada");
printf("El trabajador %s no cobra lo estipulado para su tipo de contrato.",nombre);
return 1;

}

else
printf("Salario correcto.\n")
return 0;
}

}


int compVacaciones(int contra,char tipo,int vacas)
{

switch(tipo){

//case 'L':
//if(contra == 0)
//printf("No se ha encomtrado ninguna irregularidad\n");
//return 0;//el cero significa correcto
// if(contra == 1)
//printf("Se ha encontrado una irregularidad.\n");
//printf("No dispone de contrato o no esta en regla.\");
//return 1;// el 1 significa irregularidad

case 'N':
if(vacas < 40)
{
printf("Irregularidad encontrada");
printf("El trabajador %s no dispone del numero de dias estipulado para su tipo de contrato.",nombre);
return 1;
}
else
printf("Vacaciones en regla.\n")
return 0;


case 'R':
if(vacas < 30)
{
printf("Irregularidad encontrada");
printf("El trabajador %s no dispone del numero de dias estipulado para su tipo de contrato.",nombre);
return 1;
}
else
printf("Vacaciones en regla.\n")
return 0;

}//fin de funcion

