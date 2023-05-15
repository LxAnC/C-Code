#include <iostream>
using namespace std;
class Date {
private:
    int month, day, year;
public:
    // ���캯��
    Date(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }
    // ���ƹ��캯��
    Date(const Date& other) {
        month = other.month;
        day = other.day;
        year = other.year;
    }
    // ��������
    ~Date() {
        ;
    }

    // ��������
    void input() {
        cout << "���������ڣ���ʽΪ MM DD YYYY����";
        cin >> month >> day >> year;
    }
    // �������
    void output() {
        cout << month << "/" << day << "/" << year << endl;
    }
    // �ж��Ƿ�Ϊ����
    bool isLeapYear() {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    // �����������
    Date tomorrow() {
        int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        if (isLeapYear()) {
            daysInMonth[1] = 29;
        }
        if (day < daysInMonth[month - 1]) {
            return Date(month, day + 1, year);
        }
        else if (month == 12) {
            return Date(1, 1, year + 1);
        }
        else {
            return Date(month + 1, 1, year);
        }
    }
    // ���ǵ���ĵڶ�����
    int dayOfYear() {
        int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        if (isLeapYear()) {
            daysInMonth[1] = 29;
        }
        int totalDays = 0;
        for (int i = 0; i < month - 1; i++) {
            totalDays += daysInMonth[i];
        }
        totalDays += day;
        return totalDays;
    }
    // ���ڼ���һ������������
    Date addDays(int days) {
        int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        if (isLeapYear()) {
            daysInMonth[1] = 29;
        }
        int totalDays = dayOfYear() + days;
        int newMonth = month;
        int newDay = day;
        while (totalDays > daysInMonth[newMonth - 1]) {
            totalDays -= daysInMonth[newMonth - 1];
            newMonth++;
            if (newMonth > 12) {
                newMonth = 1;
                year++;
            }
        }
        newDay = totalDays;
        return Date(newMonth, newDay, year);
    }
    // ��������֮����������
    int operator-(Date& other) {
        int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        if (isLeapYear()) {
            daysInMonth[1] = 29;
        }
        int totalDays1 = dayOfYear();
        int totalDays2 = other.dayOfYear();
        for (int i = 0; i < month - 1; i++) {
            totalDays1 += daysInMonth[i];
        }
        for (int i = 0; i < other.month - 1; i++) {
            totalDays2 += daysInMonth[i];
        }
        return abs(totalDays1 - totalDays2);
    }
}; 
