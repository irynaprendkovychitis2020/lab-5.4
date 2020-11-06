// lab 5.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

double S0(const int N, const int j)
{
    double s = 0;
    for (int j = 2; j <= N; j++)
        s += ((j) * (N - j)) / ((j * j) + (N - (j * j)));
    return s;
}
double S1(const int N, const int j)
{
    if (j > N)
        return 0;
    else
        return ((j) * (N - j)) / ((j * j) + (N - (j * j))) + S1(N, j + 1);
}
double S2(const int N, const int j)
{
    if (j < 2)
        return 0;
    else
        return ((j) * (N - j)) / ((j * j) + (N - (j * j))) + S2(N, j - 1);
}
double S3(const int N, const int j, double t)
{
    t = t + ((j) * (N - j)) / ((j * j) + (N - (j * j)));
    if (j >= N)
        return t;
    else
        return S3(N, j + 1, t);
}
double S4(const int N, const int j, double t)
{
    t = t + ((j) * (N - j)) / ((j * j) + (N - (j * j)));
    if (j <= 2)
        return t;
    else
        return S4(N, j - 1, t);
}
int main()
{
    int  N;

    cout << "N = "; cin >> N;
    cout << "(iter) S0 = " << S0(N, 2) << endl;
    cout << "(rec up ++) S1 = " << S1(N, 2) << endl;
    cout << "(rec up --) S2 = " << S2(N, N) << endl;
    cout << "(rec down ++) S3 = " << S3(N, 2, 0) << endl;
    cout << "(rec down --) S4 = " << S4(N, N, 0) << endl;
    system("pause");
    return 0;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
