#include <iostream>
using namespace std;
#include <random>


//esercizio 1

int main()
{
    {
        string nome;
        int i, n;

        cout << "Quanti atleti ci sono in gara?" << endl;
        cin >> n;
        for (i = 1; i <= n; i++) 
        {
           cout << "Inserisci il nome dell'atleta" << endl;
           cin >> nome;
           cout << "Ciao " << nome << endl;
        }
    }

    //esercizio 2
    {
        srand(time(0));

        int i, n, contPari, contDispari, restoDue, x;

        do 
        {
         cout << "Quanti numeri da generare?" << endl;
         cin >> n;
        } 
        while (n < 0);
        contPari = 0;
        contDispari = 0;
        for (i = 0; i <= n; i=i+1) 
        {
           x = rand() % 1001;
           restoDue = x % 2;
           if (restoDue == 0)
        {
            contPari = contPari + 1;
        } 
        else
        {
            contDispari = contDispari + 1;
        }
        cout << "" << i + 1 << "° numero generato: " << x << endl;
        }
    cout << "Sono stati generati " << contPari << " numeri pari e " << contDispari << " numeri dispari." << endl;

    }
//esercizio 3
    {
        int n, m, i;

        cout << "Elenco i numeri da N a M con passo 2." << endl;
        cout << "Inserisci N." << endl;
        cin >> n;
        for (i = 0; i <= n; i=i+2) 
        {
           cout << i << endl;

        }
    }

}

