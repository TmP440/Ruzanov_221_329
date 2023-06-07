#include <QtTest>
#include "../exam/functions.h"

// add necessary includes here

class functions : public QObject
{
    Q_OBJECT

public:
    functions();
    ~functions();

private slots:
    void test_case1();

};

functions::functions()
{

}

functions::~functions()
{

}

void functions::test_case1()
{
    QVector<int> array1 = {28, 40, 85, 70, 41, 87, 66, 57, 12, 62};
    QVector<int> arrayresult1 = {85, 70, 66, 57, 62, 28, 41, 40, 12, 87};
    QVector<int> array2 = {49, 39, 17, 59, 98, 39, 31, 73, 12, 65};
    QVector<int> arrayresult2 = {65, 59, 39, 49, 39, 17, 31, 12, 73, 98};
    QVector<int> array3 = {58, 68, 95, 15, 53, 23, 62, 97, 95, 10};
    QVector<int> arrayresult3 = {68, 58, 62, 15, 53, 23, 10, 95, 95, 97};
    QVector<int> array4 = {81, 34, 35, 31, 34, 8, 78, 76, 43, 7};
    QVector<int> arrayresult4 = {35, 34, 8, 31, 34, 7, 43, 76, 78, 81};
    QVector<int> array5 = {98, 32, 91, 50, 31, 77, 28, 70, 2, 71};
    QVector<int> arrayresult5 = {50, 32, 31, 28, 2, 70, 71, 77, 91, 98};
    QVector<int> array6 = {34, 4, 82, 28, 51, 39, 87, 41, 14, 62};
    QVector<int> arrayresult6 = {34, 28, 4, 14, 39, 41, 51, 62, 82, 87};
    QVector<int> array7 = {57, 67, 41, 19, 9, 19, 47, 47, 42, 91};
    QVector<int> arrayresult7 = {19, 19, 9, 41, 42, 47, 47, 57, 67, 91};
    QVector<int> array8 = {56, 31, 57, 71, 27, 45, 78, 35, 40, 85};
    QVector<int> arrayresult8 = {31, 27, 35, 40, 45, 56, 57, 71, 78, 85};
    QVector<int> array9 = {59, 9, 16, 49, 54, 31, 46, 11, 30, 99};
    QVector<int> arrayresult9 = {9, 11, 16, 30, 31, 46, 49, 54, 59, 99};
    QVector<int> array10 = {71, 72, 49, 78, 84, 52, 35, 33, 58, 40};
    QVector<int> arrayresult10 = {33, 35, 40, 49, 52, 58, 71, 72, 78, 84};


    heap_sort(array1, 1);
    QVERIFY(array1 == arrayresult1);
    heap_sort(array2, 2);
    QVERIFY(array2 == arrayresult2);
    heap_sort(array3, 3);
    QVERIFY(array3 == arrayresult3);
    heap_sort(array4, 4);
    QVERIFY(array4 == arrayresult4);
    heap_sort(array5, 5);
    QVERIFY(array5 == arrayresult5);
    heap_sort(array6, 6);
    QVERIFY(array6 == arrayresult6);
    heap_sort(array7, 7);
    QVERIFY(array7 == arrayresult7);
    heap_sort(array8, 8);
    QVERIFY(array8 == arrayresult8);
    heap_sort(array9, 9);
    QVERIFY(array9 == arrayresult9);
    heap_sort(array10, 10);
    QVERIFY(array10 == arrayresult10);
}

QTEST_APPLESS_MAIN(functions)

#include "tst_functions.moc"
