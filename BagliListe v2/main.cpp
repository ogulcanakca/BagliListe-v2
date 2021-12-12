
#include <iostream>
#include "BagliListe.hpp"
using namespace std;
int main()
{
	BagliListe<int>* b = new BagliListe<int>();
	b->ekle(1);
	b->ekle(2);
	b->ekle(3);
	b->ekle(4);
	
	b->yazdir();
	b->cikar();
	b->ekle(5);
	b->ekle(6);
	b->ekle(7);
	b->ekle(8);
	b->ekle(9);
	b->yazdir();
	delete b;
	
}

