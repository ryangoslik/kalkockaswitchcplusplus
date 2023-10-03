#include <iostream>

using namespace std;
float dodawanie(float liczba1, float liczba2);
float odejmowanie(float liczba1, float liczba2);
float mnożenie(float liczba1, float liczba2);
void dzielenie(float liczba1, float liczba2);
int main()
{
    setlocale(LC_ALL, "")
    float liczba1, liczba2;
    int menu;
    cout << "kalkulator z switch case\n";
    cout << "dodawanie 1, odejmowanie 2, mnożenie 3, dzielenie 4" << endl;
    cout << " wybierz operacje bambiku = "; cin >> menu;
    cout << "wprowadź liczba 1 = "; cin >> liczba1;
    cout << "wprowadź liczba 2 = "; cin >> liczba2;

    switch (menu) 
    {
    case 1:
        cout << "dodawanie = " << dodawanie(liczba1, liczba2) << endl;
        break;

    case 2:
        cout << "odejmowanie = " << odejmowanie(liczba1, liczba2) << endl;
        break;

    case 3:
        cout << "mnożenie = " << mnożenie(liczba1, liczba2) << endl;
        break;

    case 4:
       dzielenie(liczba1, liczba2) << endl;
        break;

    default:
        cout << " nie ma takiej operacju, zacznij od początku bambiku"

        break;
    }


    system("pause");
    return 0;
}



float dodawanie(float liczba1, float liczba2)
{
    return liczba1 + liczba2;
}

float odejmowanie(float liczba1, float liczba2)
{
    return liczba1 - liczba2;
}

float mnożenie(float liczba1, float liczba2)
{
    return liczba1 * liczba2;
}

void dzielenie(float liczba1, float liczba2)
{
    if (liczba1 != 0) {
        cout << "dzielenie = " << liczba1 / liczba2 << endl;
    }
    else {
        cout << "nie dziel bambiku prez zero" << endl;
    }
}
