#ifndef BagliListe_hpp
#define BagliListe_hpp
#include "Dugum.hpp"
#include<iomanip>
using namespace std;
template<typename Tur>
class BagliListe {
public:
	BagliListe() {
		ilk = 0;
	}
	~BagliListe() {
		Dugum<Tur>* gec = ilk;
		while (gec != 0) {
			Dugum<Tur>* sil = gec;
			cout << "siradaki dugum: " << gec->veri << endl;

			gec = gec->sonraki;
			delete sil;
		}
	}
	void ekle(Tur veri) {
		Dugum<Tur>* yeni = new Dugum<Tur>(veri);

		if (ilk == 0) {
			ilk = yeni;

		}
		else {
			Dugum<Tur>* gec = ilk;
			while (gec->sonraki != 0) {
				gec = gec->sonraki;
			}
			gec->sonraki = yeni;
		}
	}
	void yazdir() {
		cout << setw(10) << "adres" << setw(10) << "veri" << setw(15) << "sonraki" << endl;
		cout << "-------------------------------------------------------------------" << endl;
		Dugum<Tur>* gec = ilk;
		while (gec != 0) {
			cout << setw(10) << gec << setw(10) << gec->veri << setw(15) << gec->sonraki << endl;

			gec = gec->sonraki;
		}
		cout << endl;
	}
private:
	Dugum<Tur>* ilk;
};






#endif BagliListe_hpp