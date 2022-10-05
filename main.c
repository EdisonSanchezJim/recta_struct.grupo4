#include"libreria.h"


int main(int argc, char *argv[])
{
	if (argc!=9)
	{
		printf("\nError de cantidad de argumentos\nUsage: \n\t%s integer_value\n\tej factorial of 5: %s 5\n\n", argv[0],argv[0]);
		exit(1);
	}

//declaracion de variables locales

	char c;
	char comment1[TAMpalabra]={"primera"}, comment2[TAMpalabra]={"segunda"};
	//se crea vector de 8 posiciones para guardar los datos del argv
	float ptos[TAMvector],x_c,y_c;
	//se crea arreglo para puntos y rectas 
	struct punto p[TAMpunto];
	struct recta r[TAMrecta];
	//se pasan los datos al vector ptos[]
	ptos[0]=atof(argv[1]);
	ptos[1]=atof(argv[2]);
	ptos[2]=atof(argv[3]);
        ptos[3]=atof(argv[4]);
	ptos[4]=atof(argv[5]);
	ptos[5]=atof(argv[6]);
	ptos[6]=atof(argv[7]);
	ptos[7]=atof(argv[8]);

	//se llaman las funciones
	crear_punto(&r[0],&r[1],&ptos[0]);
	encontrar_recta(&r[0]);
	encontrar_recta(&r[1]);
        imprimir_punto(r[0],&comment1[0]);
        imprimir_recta(r[0]);
	imprimir_punto(r[1],&comment2[0]);
	imprimir_recta(r[1]);
	
	//conclusion con cruce_rectas
	c=cruce_rectas(r[0],r[1],&x_c,&y_c);
	if(c==0)
	{
		printf("\nlas rectas son paralelas.\n");
	}
	else if (c==-1)
	{
		printf("\nlas rectas son perpendiculares y se intersecan en el punto (%.3f,%.3f)\n",x_c,y_c);
	}
	else
	{
		printf("\nlas rectas se intersecan en (%.3f,%.3f)\n", x_c, y_c);
	}
	return 0;
}
