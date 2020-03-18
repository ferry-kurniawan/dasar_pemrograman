#include <iostream>
using namespace std;
int main(    ) {
        char m;
        int y=1234, x;
        do
        {
         cout<< "Masukkan password lama"<<endl;
         cin>>x;

         if(x==y)
         {
         cout<<"Masukkan password baru"<<endl;
          cin>>x;
           if(x>=1000&&x<=9999)
            {
             y=x;
            cout<<"Anda berhasil mengubah kata sandi "<<y<<endl;
            }
            else {
           cout<<"kata sandi harus terdiri dari empat angka"<<endl;
          }
          }
         else{
         cout<<"kata sandi salah saat ini coba lagi"<<endl;
         cin>>x;
         }


        cout<<"pilih y untuk mengubah lagi kata sandi"<<endl;
        cin>>m;
        }
        while(m=='y'||m=='Y');


    return 0;
}
