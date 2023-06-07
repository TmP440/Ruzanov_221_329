#include "functions.h"
#include <iostream>

void heap_sort(QVector<int> &array, int step)
{
    int n = array.size();

    for (int i = n / 2; i >= 0; i--)
        sift(array, i, n - 1);

    for (int m = n - 1; m >= 1; m--)
    {
        std::swap(array[0], array[m]);
        sift(array, 0, m - 1);

        if (n - m == step)
            return;
    }
}

void sift(QVector<int> &array, int i, int n)
{
    int j = i, k = i * 2 + 1;	 // Левый сын
    while (k <= n)
    {
        if (k < n && array[k] < array[k+1])
            k++; // Больший сын
        if (array[j] < array[k])
        {
            std::swap(array[j], array[k]); j = k; k = k*2+1;
        }
        else break;
    }
}

QByteArray parsing(QByteArray message){
    QList parts = message.split('&');
    if (parts[1].toInt() <= 0){
        return "Введите шаг > 0!\r\n";
    }
    if (parts.size() == 3 && parts[0] == "sort")
    {
        int step = parts[1].toInt();
        QList numbers = parts[2].split(' ');
        QVector<int> array;
        for (QString number : numbers)
            array.append(number.toInt());

        heap_sort(array, step);

        QByteArray out_array;
        for (int number : array){
            out_array.append(QString::number(number).toUtf8() + " ");
        }
        out_array.chop(1);
        return "Отсортированный массив до шага " + QString::number(step).toUtf8() + ": " + out_array + "\r\n";
    }
    return "Error! Введите нужное количесво параментов\r\n";
}
