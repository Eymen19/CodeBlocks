#include <iostream>
#include <string>

using namespace std;

string isim,soyisim;
float pg,pdp,wp,ndp;

int main()
{
    cout << "Isminizi giriniz:" << endl;
    cin >> isim;
    cout << "Soyisminizi giriniz:" << endl;
    cin >> soyisim;
    cout << "Programlamaya Giris notu:" << endl;
    cin >> pg;
    cout << "Nesneye Dayali Proglama notu:" << endl;
    cin >> ndp;
    cout << "Web Proglama notu:" << endl;
    cin >> wp;
    cout << "Programlama Dillerinin Prensipleri notu:" << endl;
    cin >> pdp;
    float ortalama = ((pg*6)+(ndp*6)+(wp*4)+(pdp*5))/21;
    cout << isim << " " << soyisim << endl;
    cout << ortalama << endl;
    return 0;
}
