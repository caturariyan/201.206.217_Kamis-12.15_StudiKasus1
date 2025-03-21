#include <iostream>
#include <string>
using namespace std;

class DataPenduduk {
private:
    string nik, nama, tempatLahir, keldes, pekerjaan, agama, statusPernikahan, statusKewarganegaraan, kabupaten, provinsi, alamat, kecamatan, jenisk;
    int rt, rw;
    char golDarah;

public:
    void inputData() {
        cout << "Masukkan NIK Anda: ";
        getline(cin, nik);
        
        cout << "Masukkan Provinsi: ";
        getline(cin, provinsi);
        
        cout << "Masukkan Kabupaten/Kecamatan: ";
        getline(cin, kabupaten);

        cout << "Masukkan Nama Anda: ";
        getline(cin, nama);

        cout << "Masukkan Tempat/Tgl Lahir Anda: ";
        getline(cin, tempatLahir);

        cout << "Masukkan Jenis Kelamin Anda: ";
        cin >> jenisk;
        cin.ignore();
        
        cout << "Masukkan Golongan Darah Anda: ";
        cin >> golDarah;
        cin.ignore();

    	cout << "Masukkan Alamat anda: ";
        cin >> alamat;
        cin.ignore();

        cout << "Masukkan RT Anda: ";
        cin >> rt;
        cin.ignore();

        cout << "Masukkan RW Anda: ";
        cin >> rw;
        cin.ignore();

        cout << "Masukkan Kelurahan/Desa Anda: ";
        getline(cin, keldes);

        cout << "Masukkan Kecamatan Anda: ";
        getline(cin, kecamatan);

        cout << "Masukkan Agama Anda: ";
        getline(cin, agama);

        cout << "Masukkan Status Pernikahan Anda (Menikah/Belum Menikah): ";
        getline(cin, statusPernikahan);

        cout << "Masukkan Pekerjaan Anda: ";
        getline(cin, pekerjaan);
        
        cout << "Masukkan Status Kewarganegaraan Anda: ";
        getline(cin, statusKewarganegaraan);
    }

    void tampilkanData() {
	cout<<"==================================================================="<<endl;
		cout << "\n\t\t\tPROVINSI "<<provinsi;
        cout << "\n\t\tKABUPATEN "<<kecamatan<<endl<<endl;
        cout << "NIK               : " << nik << endl;
        cout << "Nama              : " << nama << endl;
        cout << "Tempat/Tgl Lahir  : " << tempatLahir << endl;
        cout << "Jenis Kelamin     : " << jenisk << "\tGol Darah    : " << golDarah << endl;
        cout << "Alamat    		: " << alamat << endl;
        cout << "\tRT/RW           : " << rt << "/" << rw << endl;
        cout << "\tKel/Desa        : " << keldes << endl;
        cout << "\tKecamatan       : " << kecamatan << endl;
        cout << "Agama             : " << agama << endl;
        cout << "Status Pernikahan : " << statusPernikahan << endl;
        cout << "Kewarganegaraan   : " << statusKewarganegaraan << endl;
        cout << "Berlaku Hingga    :  SEUMUR HIDUP";
    }
};

int main() {
    DataPenduduk penduduk;
    penduduk.inputData();
    penduduk.tampilkanData();

    return 0;
}
