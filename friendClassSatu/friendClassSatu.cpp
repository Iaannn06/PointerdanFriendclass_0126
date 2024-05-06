using namespace std;
#include <iostream>
#include <string>

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string);
    friend class siswa;
};

class siswa
{
private:
    int id;
public:
    void setId(int pId);
    void displayAll(orang& a);
};

void siswa::displayAll(orang& a)
{
    cout << id << endl
    << a.nama;
}

int main()

{

}
