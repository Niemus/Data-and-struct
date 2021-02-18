/*Курсовая ОАИП | Рассохин Н.С.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc_data.h"
using namespace std;
using std::cout;
using std::cin;


/*__________________________________________________*/

struct date
{
  int day;
  int month;
  int year;
}; 
 
struct students
{
  char *lastName;
  date std_dt;
};

void showALL(students STD1)
{
    cout << "Фамилия студента: " << STD1.lastName << endl;
    cout << "Дата: " << STD1.std_dt.day<<"."<< STD1.std_dt.month <<"."<< STD1.std_dt.year << endl << endl;
}

/*__________________________________________________*/

int main()
{
    setlocale (LC_ALL, "rus");
    int month, day, year;
    int month2, day2, year2;

    /* cout << "Введите число, месяц и год: ";
    cin>> day >> month >> year;
    cout << endl; */

    students std_1;
    std_1.lastName = "Иванов";
    std_1.std_dt.day = 24;
      day=std_1.std_dt.day;
    std_1.std_dt.month = 01;
     month=std_1.std_dt.month;
    std_1.std_dt.year = 2001;
      year=std_1.std_dt.year;

    students std_2;
    std_2.lastName = "Петров";
    std_2.std_dt.day = 31;
      day2=std_2.std_dt.day;
    std_2.std_dt.month = 02;
      month2=std_2.std_dt.month;
    std_2.std_dt.year = 2000;
      year2=std_2.std_dt.year;
    
    showALL(std_1);
    showALL(std_2);
    data(day, month, year);
    cout<<endl;
    data(day2, month2, year2);
    return 0;
}

