#include <iostream>

using namespace std;

class Kulamek
{
    private:
    int licznik, mianownik;

    public:
    Kulamek()
    {
        licznik = 0;
        mianownik = 1;
    }

    Kulamek(int l, int m)
    {
        licznik = l;
        if(m==0) mianownik = 1;
        else mianownik = m;
    }

    double Wartosc() 
    { 
      return (double)licznik/mianownik; 
    }

    void Licznik (int l) 
    { 
      licznik = l; 
    }

    void Mianownik (int m)
    {
        if(m == 0) mianownik = 1;
        else mianownik = m;
    }

    void Wypisz() 
    { 
      cout << licznik << "/" << mianownik << endl; 
    }
};

int main()
{
    Kulamek A;
    Kulamek B(2,5);
    Kulamek C;
    C.Licznik(4);
    C.Mianownik(3);
    cout<<"A:"<<endl<<A.Wartosc()<<endl;
    A.Wypisz();
    cout<<endl<<"B:"<<endl<<B.Wartosc()<<endl;
    B.Wypisz();
    cout<<endl<<"C:"<<endl<<C.Wartosc()<<endl;
    C.Wypisz();
    
    
    return 0;
}
