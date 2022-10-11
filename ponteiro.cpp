#include <iostream>
using namespace std;

int *p;
int val = 5;

int main() {
	
	p = &val; // p aponta para o endereço de val (&)
	cout << "O valor apontado por 'p' e: " << *p; // *p imprime o valor do endereço que p aponta
}
