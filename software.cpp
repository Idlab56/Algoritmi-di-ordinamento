#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string scelta()
{
    string s;

    cout << "inserisci un nome di un algoritmo di ordinamento: ";
    getline(cin, s);
    return s;
}

void programma()
{
    string algoritmo_p,algoritmo_s;

    algoritmo_p = scelta();

    cout << algoritmo_p << endl;

    bool flag = false;
    ifstream mioFile("algoritmi.txt");

    if(mioFile.is_open())
    {
        cout << "Dio merda"<<endl;
        while(getline(mioFile, algoritmo_s))
        {
            if(algoritmo_s== algoritmo_p || flag == true)
            {
                flag = true;
                cout << algoritmo_s << endl;
                if(algoritmo_s == "___") break;
            }
            if(algoritmo_s == "___") break;
        }
        mioFile.close();
    }
    else cerr << "File non creato" << endl;
}

int main(void)
{
    programma();
}
