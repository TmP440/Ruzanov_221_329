#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QList>
#include <cmath>
#include <QPair>
#include <QDebug>

void heap_sort(QVector<int> &array, int step);

void sift(QVector<int> &array, int i, int n);

QByteArray parsing(QByteArray message);

#endif // FUNCTIONS_H
