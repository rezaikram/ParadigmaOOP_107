#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pid, string pNama, float pNilai) :id(pid), nama(pNama), nilai(pNilai) { //member initialization list

	}

	~mahasiswa() {
		cout << "id     = " << id << endl;
		cout << "id     = " << nama << endl;
		cout << "Nilai  = " << nilai << endl;
	}
};

int main() {
	mahasiswa mhs(12, "Asroni", 90.5);

	return 0;
}