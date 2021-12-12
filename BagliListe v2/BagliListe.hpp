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
	Dugum<Tur>* sondanBirOncekiniGetir() {

		Dugum<Tur>* gec = ilk;

		while (gec->sonraki->sonraki != 0) {
			gec = gec->sonraki;
		}
		return gec;
	}
	void yazdir() {
		cout << endl;
		cout << setw(10) << "adres" << setw(10) << "veri" << setw(15) << "sonraki" << endl;
		cout << "-------------------------------------------------------------------" << endl;
		Dugum<Tur>* gec = ilk;
		while (gec != 0) {
			cout << setw(10) << gec << setw(10) << gec->veri << setw(15) << gec->sonraki << endl;

			gec = gec->sonraki;
		}
		cout << endl;
	}

	void cikar() {
		if (ilk == 0) {
			return;
		}
		if (ilk->sonraki == 0) {
			delete ilk;
			ilk = 0;

		}
		else {
			Dugum<Tur>* gec = sondanBirOncekiniGetir();

				cout << gec << ". cikarildi" << endl;
				delete gec->sonraki;
				gec->sonraki = 0;
			
		}
	}
private:
	Dugum<Tur>* ilk;
};






#endif BagliListe_hpp