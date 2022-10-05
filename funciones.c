#include "libreria.h"


//funcion para llenar struct punto
void crear_punto(struct recta *r1, struct recta *r2, float *ptos)
{
	r1->p1.x=ptos[0];
	r1->p1.y=ptos[1];
	r1->p2.x=ptos[2];
	r1->p2.y=ptos[3];
	r2->p1.x=ptos[4];
	r2->p1.y=ptos[5];
	r2->p2.x=ptos[6];
	r2->p2.y=ptos[7];
}
//funcion para encontrar la pendiente y el corte de la recta
void encontrar_recta(struct recta *r)
{
	r->m=(r->p1.y - r->p2.y)/(r->p1.x - r->p2.x);
	r->b=r->p1.y-(r->m*r->p1.x);
}

//funcion que imprime la ec. de la recta
void imprimir_recta(struct recta r)
{
	if(r.b>0)
	{
		printf("\ny su recta correspondiente es: y=%.3fx+%.3f\n",r.m,r.b);
	}
	else if (r.b<0)
	{
		printf("\ny su recta correspondiente es: y=%.3fx%.3f\n",r.m,r.b);
	}
	else
	{
		printf("\ny su recta correspondiente es: y=%.3fx\n", r.m);
	}
}

//funcion que imprime los puntos ingresados 
void imprimir_punto(struct recta r, char *comment)
{
	printf("\nLos puntos ingresados para la %s recta son: P1(%.2f,%.2f) y P2(%.2f,%.2f)", comment,r.p1.x,r.p1.y,r.p2.x,r.p2.y);
}

/*Funcion que retorna un char que verifica la relacion entre las rectas,
 si son paralelas c=0, si son perpendiculares c=-1, si no tienen relacion c=0,
 de igual forma se hallan los cortes.*/

char cruce_rectas(struct recta r1, struct recta r2, float *x_c, float *y_c)
{
	char c;
	*x_c=(r2.b-r1.b)/(r1.m-r2.m);
	*y_c=r1.m*(*x_c)+r1.b;
	if (r1.m==r2.m)
	{
		c=0;
	}
	else if (r1.m*r2.m==-1)
	{
		c=-1;
	}
	else
	{
		c=1;
	}
	return c;
}
