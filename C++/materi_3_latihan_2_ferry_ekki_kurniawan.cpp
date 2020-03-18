#include <iostream>
using namespace std;
int main ()
{
    int dasadharma;

    cout<<"Masukkan Dasadharma ke- : ";
    cin>>dasadharma;

    switch(dasadharma) {
    case 1:
        cout<<"Taqwa kepada Tuhan Yang Maha Esa"<<endl;
        break;
    case 2:
        cout<<"Cinta alam dan kasih sayang sesama manusia"<<endl;
        break;
    case 3:
        cout<<"Patriot yang sopan dan kesatria"<<endl;
        break;
    case 4:
        cout<<"Patuh dan suka bermusyawarah"<<endl;
        break;
    case 5:
        cout<<"Rela menolong dan tabah"<<endl;
        break;
    case 6:
        cout<<"Rajin, trampil dan gembira"<<endl;
        break;
    case 7:
        cout<<"Hemat, cepat dan bersahaja"<<endl;
        break;
    case 8:
        cout<<"Disiplin berani dan setia"<<endl;
        break;
    case 9:
        cout<<"Bertanggungjawab dan dapat dipercaya"<<endl;
        break;
    case 10:
        cout<<"Suci dalam pikiran perkataan dan perbuatan"<<endl;
        break;
    default :
        cout<<"tidak ada"<<endl;
        break;
        }
    system ("pause");
    return 0;
}

