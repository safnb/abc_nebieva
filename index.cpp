#include <iostream>
using namespace std;

int main() {
    int n; // Размер массива
    cout << "Введите размер массива: ";
    cin >> n;
    
    int arr[n]; // Массив
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int a, b;
    cout << "Введите значения a и b: ";
    cin >> a >> b;
    
    // Задача a)
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 10 == 4) { // Если элемент заканчивается на 4
            arr[i] /= 2; // Уменьшаем вдвое
        }
    }
    
    // Задача b)
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) { // Если элемент четный
            arr[i] *= arr[i]; // Замена на квадрат
        } else {
            arr[i] *= 2; // Удвоение нечетных элементов
        }
    }
    
    // Задача c)
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) { // Четные элементы увеличиваем на a
            arr[i] += a;
        }
        
        if (i % 2 == 0) { // Из элементов с четными индексами вычитаем b
            arr[i] -= b;
        }
    }
    
    // Выводим измененный массив
    cout << "Измененный массив: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    
    return 0;
}
