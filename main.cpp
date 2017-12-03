#include <iostream>
#include <string>
#include <fstream>

#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>        // front() checkt das 1. Element; priority_queue is included in queue
#include <map>

using namespace std;

int main() {

    ifstream datei("/Users/Armand/eclipse-workspace/container/texte.txt");
    string wort;
    map<string, int> ereignisse;
    while(datei >> wort)        // Wir lesen die Datei Wort für Wort
    {
        ++ereignisse[wort];     // man inkrementiert den Zaehler für das gelesene Wort
    }

    cout << "Das Wort 'Orange' existiert " << ereignisse["Orange"]
         << " mal in der Datei" << endl;


    /*
    priority_queue<int> schlange;
    schlange.push(5);
    schlange.push(8);
    schlange.push(3);

    cout << schlange.top() << endl;     // zeigt an das größte Element : 8
    */


    /*
    stack<int> stapel;
    stapel.push(3);
    stapel.push(4);
    stapel.push(5);

    cout << stapel.top() << endl;   // man checkt den oberen Teil des Stapels

    stapel.pop();       // man löscht das letzte hinzugefügte

    cout << stapel.top();   // man checkt den oberen Teil des Stapels
     */



    /*
    deque<int> d(4,5);
    d.push_front(2);    // 2 wird am Anfang hinzugefügt
    d.push_back(8);     // und 8 am Ende
    for(int i(0); i < d.size(); ++i)
    {
        cout << d[i] << endl;
    }
     */


    /*
    vector<int> tab(5,4);    // Ein Array mit 5 Ganzzahlen, deren Wert 4 ist
    tab.pop_back();     // man löscht die letzte Box des Arrays
    tab.push_back(6);   // 6 wird hinzugefügt am Ende des Arrays

    for(int i(0); i < tab.size(); ++i)      // size() um die Anzahl von Elementen im Vector zu erkennen
    {
        cout << tab[i] << endl;     // [] um zuzugreifen auf die Elementen
    }
    */

    /*
    list<double> a;
    if(a.empty())       // clear() um die Liste zu leeren
        cout << "Die Liste ist leer" << endl;
    else
        cout << "Die Liste ist nicht leer" << endl;
    */

    /*
    vector <double> a(8,3.14);
    vector <double> b(8,2.71);

    for(int i(0); i < a.size(); ++i)
    {
        cout << a[i] << endl;
    }

    a.swap(b);      // Wir tauschen den Inhalt der beiden Tabellen aus

    for(int i(0); i < a.size(); ++i)
    {
        cout << a[i] << endl;
    }
     */


    return 0;
}