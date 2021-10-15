#include <iostream>
#include <vector>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    int number, n, d, a, b;
    bool end = true;
    vector <int> split;
    vector <int> Progess;
    vector <int> Fibb;
    vector <int> Porydok;
    vector <int> ChNech;
    while (end == true) {
        cout << "Выберите задание для проверки, вам понравится :))\n" <<
            "1. Дано целое число N (> 0).\nСформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, . . . .\n" <<
            "2. Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии.\nСформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D2 , A·D3 , . . .\n" <<
            "3. Даны целые числа N (> 2), A и B.\nСформировать и вывести целочисленный массив размера N, первый элемент которого равен A,\nвторой равен B, а каждый последующий элемент равен сумме всех предыдущих.\n" <<
            "4. Дан массив A размера N.\nВывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2,...\n" <<
            "5. Дан массив A размера N.\nВывести вначале его элементы с нечетными номерами в порядке возрастания номеров,\nа затем — элементы с четными номерами в порядке убывания номеров.\n" <<
            "Для завершения программы нажмите любую другую цифру :)\n\n" <<
            "Введите цифру: ";
        cin >> number;
        if (number >= 0 and number <= 5) {
            switch (number)
            {
            case 1:
                cout << "Введите целое число N: ";
                cin >> n;
                if (n > 0) {
                    system("cls");
                    cout << "Вы просматриваете " << number << " задание))\n\n";
                    d = 1;
                    split.reserve(n);
                    cout << "{ ";
                    for (int i = 0; i < n; i++) {
                        split.push_back(d);
                        cout << split[i] << " ";
                        d += 2;
                    }
                    cout << "}\n";
                    split.clear();
                    split.shrink_to_fit();
                }
                else
                    cout << "Зачем вы издеваетесь над программой?!\nКик с позором\n";
                break;
            case 2:
                system("cls");
                cout << "Вы просматриваете " << number << " задание))\n\n";
                cout << "Введите размер массива: ";
                cin >> n;
                if (n > 1) {
                    cout << "Введите первый член геометрической прогрессии (A): ";
                    cin >> a;
                    cout << "Введите знаменатель D геометрической прогрессии (D): ";
                    cin >> d;
                    cout << "{ ";
                    Progess.reserve(n);
                    for (int i = 0; i < n; i++) {
                        Progess.push_back(a*pow(d, i));
                        cout << Progess[i] << " ";
                    }
                    cout << "}\n";
                    Progess.clear();
                    Progess.shrink_to_fit();
                }
                else
                    cout << "И снова данные введены некорректны...\n";

                break;
            case 3:
                system("cls");
                cout << "Вы просматриваете " << number << " задание))\n\n";
                cout << "Введите размер массива: ";
                cin >> n;
                if (n > 2) {
                    Fibb.reserve(n);
                    cout << "Введите первый элемент массива (A): ";
                    cin >> a;
                    cout << "Введите второй элемент масссива (B): ";
                    cin >> b;
                    Fibb.push_back(a);
                    Fibb.push_back(b);
                    d = Fibb[0] + Fibb[1];
                    cout << "{ " << Fibb[0] << " " << Fibb[1] << " ";
                    for (int i = 2; i < n; i++) {
                        Fibb.push_back(d);
                        d += Fibb[i];
                        cout << Fibb[i] << " ";
                    }
                    cout << "}\n";
                    Fibb.clear();
                    Fibb.shrink_to_fit();
                }
                else
                    cout << "А мне уже нравится, что вы ошибаетесь))\n";
                break;
            case 4:
                system("cls");
                cout << "Вы просматриваете " << number << " задание))\n\n";
                cout << "Введите размер массива: ";
                cin >> n;
                if (n > 0) {
                    Porydok.reserve(n);
                    for (int i = 0; i < n; i++) {
                        cin >> d;
                        Porydok.push_back(d);
                    }
                    cout << "{ ";
                    for (int i = 0; i < n; i++) {
                        cout << Porydok[i] << " " << Porydok[n - i - 1] << " ";
                    }
                    cout << "}\n";
                    Porydok.clear();
                    Porydok.shrink_to_fit();
                }
                else
                    cout << "А массив может состоять из отрицательных элементов?!\n";
                break;
            case 5:
                system("cls");
                cout << "Вы просматриваете " << number << " задание))\n\n";
                cout << "Введите размер массива A (N): ";
                cin >> n;
                if (n > 0) {
                    ChNech.reserve(n);
                    cout << "Введите значения в массив: ";
                    for (int i = 0; i < n; i++) {
                        cin >> d;
                        ChNech.push_back(d);
                    }
                    cout << "{ ";
                    for (int i = 0; i < n; i += 2) {
                        cout << ChNech[i] << " ";
                    }
                    for (int i = n-1; i > 0; i--) {
                        if (i%2==1) {
                            cout << ChNech[i] << " ";
                        }
                    }
                    cout << "}\n";
                    ChNech.clear();
                    ChNech.shrink_to_fit();
                }
                else
                    cout << "Уфф, и снова неудачный ввод\n";
                break;
            }
        }
        else {
            system("cls");
            cout << "Спасибо за проверку лаб!!! :)\n";
            end = false;
        }
    }
}
