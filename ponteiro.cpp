#include <iostream>
using namespace std;

int *p;
int val = 5;

int main() {
	
	p = &val; // p aponta para o endere�o de val (&)
	cout << "O valor apontado por 'p' e: " << *p; // *p imprime o valor do endere�o que p aponta
}
