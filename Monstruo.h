
#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

typedef struct TipoMonstruo{
  int vida;
  int ataque;
  int puntaje;
  int estado;//El estado se refiere a aqu el monstruo puede estar despierto o dormido//
}Monstruo;
