#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string imie_pracownika(string imie){

    cout<<"Dane Pracownika: "<<endl<<endl;
    cout<<"Imie:     "<<"   ";
    cin>>imie;

    return imie;

}

string nazwisko_pracownika(string nazwisko){
    cout<<"Nazwisko: "<<"   ";
    cin>>nazwisko;

    return nazwisko;
}



string wprowadz_stanowisko( string stanowisko) {



    cout<<endl;
    cout<<"1.Kierownik"<<endl;
    cout<<"2.Starszy programista"<<endl;
    cout<<"3.Mlodszy programista"<<endl;
    cout<<"4.Tester"<<endl<<endl;

     cout<<"Wybierz stanowisko: "<<endl<<endl;
     cin>>stanowisko;


        if(stanowisko == "1"){
            stanowisko="Kierownik";
        }
            else if(stanowisko == "2"){
            stanowisko="Starszy programista";
        }
            else if(stanowisko == "3"){
            stanowisko="Mlodszy programista";
            }
                else {
                stanowisko="Tester";
                }

    return stanowisko;

}

string generuj_haslo(int dlugosc, bool male_litery, bool wielkie_litery, bool cyfry, bool znaki_specjalne) {
    string haslo = "";
    string male_litery_str = "abcdefghijklmnopqrstuvwxyz";
    string wielkie_litery_str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string cyfry_str = "0123456789";
    string znaki_specjalne_str = "!@#$%^&*()_+-={}[]|\\:;\"'<>,.?/";

    string dostepne_znaki = "";
     if(male_litery) dostepne_znaki += male_litery_str;
    if (wielkie_litery) dostepne_znaki += wielkie_litery_str;
    if (cyfry) dostepne_znaki += cyfry_str;
    if (znaki_specjalne) dostepne_znaki += znaki_specjalne_str;

    int dostepne_znaki_dlugosc = dostepne_znaki.length();
    srand(time(0));
    for (int i = 0; i < dlugosc; i++) {
        int indeks = rand() % dostepne_znaki_dlugosc;
        haslo += dostepne_znaki[indeks];
    }
    return haslo;

}



int main()
{
    string imie ;
    string nazwisko ;
    string stanowisko;

    int dlugosc;
    bool male_litery, wielkie_litery, cyfry, znaki_specjalne;

       imie = imie_pracownika(imie);
        nazwisko = nazwisko_pracownika(nazwisko);
        stanowisko = wprowadz_stanowisko(stanowisko);
        generuj_haslo(dlugosc, male_litery, wielkie_litery, cyfry, znaki_specjalne);


            cout << "Podaj dlugosc hasla: "<<endl<<endl;
                cin >> dlugosc;
            cout<<endl;

            cout << "Uzywac malych liter? (1-tak, 0-nie): "<<endl<<endl;
                cin>>male_litery;

            cout << "Uzywac wielkich liter? (1-tak, 0-nie): "<<endl<<endl;
                cin >> wielkie_litery;
            cout<<endl;

            cout << "Uzywac cyfr? (1-tak, 0-nie): "<<endl<<endl;
                cin >> cyfry;
            cout<<endl;

            cout << "Uzywac znakow specjalnych? (1-tak, 0-nie): "<<endl<<endl;
                cin >> znaki_specjalne;
            cout<<endl;

            string haslo = generuj_haslo(dlugosc, male_litery, wielkie_litery, cyfry, znaki_specjalne);
            cout << "Wygenerowane haslo: " << haslo << endl<<endl;

            cout<<"Dane pracownika: "<<imie<<", "<<nazwisko<<", "<<stanowisko<<", "<<haslo<<endl;


    return 0;
}
