#ifndef Dugum_hpp
#define Dugum_hpp
#include <iostream>
using namespace std;
template<typename Tur>
class Dugum {
public:
	Dugum(Tur veri) {
		this->veri = veri;
		this->sonraki = 0;

	}
	~Dugum() {
		cout << veri << " : dugumu silindi ----->";
	}

	Tur veri;
	Dugum* sonraki;
};
#endif Dugum_hpp