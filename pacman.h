#ifndef _PACMAN_H_
#define _PACMAN_H_

#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'

int acabou();
void move(char direcao);

int ehdirecao(char direcao);
void fantasmas();
int praondeofantasmavai(int xatual, int yatual,
	int* xdestino, int* ydestino);

void explodepilula();
void explodepilula2(int xatual, int yatual,
	int somax, int somay, int qtd);

#endif