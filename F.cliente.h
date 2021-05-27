#define N 11
typedef struct{
char plato[20];
float precio;
int nCarta;
}carta;

typedef struct{
char type;
float pago;
int holiday;

}datos;

typedef struct{
char name[15];
char surename[15];
char work[15];
int cont;
datos people;
}infoEmpleados;

void cartas(void);
float calculadora(int nP);
void inspecTrabajo(void);
