using namespace std;
#include <iostream>
#include <string>

class mahasiswa
{
private:
    string nama;

public:
    friend void setNama(mahasiswa& a, string);
};

void setNama(mahasiswa& a, string pNama)
{
    a.nama = pNama;
}
int main()
{
    
}

