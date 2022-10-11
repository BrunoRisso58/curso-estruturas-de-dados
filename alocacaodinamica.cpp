#include <iostream>
#include <stdlib.h>

struct Ponto {
	float x;
	float y;
};

int main() {
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));
	p->x = 1;
	p->y = 5;
	
	std::cout << "Ponto = (" << p->x << ", " << p->y << ")";
}
