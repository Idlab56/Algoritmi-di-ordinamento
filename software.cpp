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

    bool flag = false;
    ifstream mioFile("algoritmi.txt");

    if(mioFile.is_open())
    {
        while(getline(mioFile, algoritmo_s))
        {
            if(algoritmo_s== algoritmo_p || flag == true)
            {
                if(algoritmo_s == "___") break;
                flag = true;
                cout << algoritmo_s << endl;
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
