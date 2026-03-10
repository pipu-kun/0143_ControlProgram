#include <iostream>
using namespace std;

float rata_rata(float a, float b) {
    return (a + b) / 2;
}

string Status_lulus(float r){
    if (r >= 60)
        return "Lulus";
    else if (r >= 50)
        return "Lulus Dipertimbangkan";
    else if (r >= 40)
        return "Lulus tetapi martikulasi 1 tahun";
     else
        return "Gagal";
}

int main(){
    float nilBI, nilMT, rerata;
    string status;

    cout << "Masukkan nilai Bahasa Inggris: ";
    cin >> nilBI;
    cout << "Masukkan nilai Matematika: ";
    cin >> nilMT;
    rerata = rata_rata(nilBI, nilMT);
    cout << "Status kelulusan = " << Status_lulus(rerata) << ", dengan nilai rerata = " << rerata << endl;
}