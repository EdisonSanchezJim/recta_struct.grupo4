#ifndef LIBRERIA_H
#define LIBRERIA_H

//librerias

#include<stdio.h> //inclusion de librerias para entradas y salidas estandar
#include<stdint.h> //para intN_t
#include<stdlib.h> //para atoi y exit()
#define TAMvector 7
#define TAMpunto 4
#define TAMrecta 1
#define TAMpalabra

//declaraciones


//estructuras de variables


//para llenar los puntos
struct punto
{
	float x;
	float y;
};

//para establecer las ecuaciones de las rectas
struct recta
{
	float m;
	float b;
	struct punto p1, p2;
};

//Prototipos

void crear_punto(struct recta *r1, struct recta *r2, float *ptos);
void encontrar_recta(struct recta *r);
void imprimir_recta(struct recta r);
void imprimir_punto(struct recta r, char *comment);
char cruce_rectas(struct recta r1, struct recta r2, float *x_c, float *y_c);


#endif

