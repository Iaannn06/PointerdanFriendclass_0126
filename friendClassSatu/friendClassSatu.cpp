using namespace std;
#include <iostream>
#include <string>

class siswa;
class orang;
{
private:
    string nama;

public:
    void setNama(string);
    friend class siswa;
};

