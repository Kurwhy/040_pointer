#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void ShowNim(); //deklarasi method
};

void mahasiswa::ShowNim() { //implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}
