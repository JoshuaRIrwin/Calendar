
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

int days = 0;
int startDay;
int month;
int year;
int yearOrMonth;
string monthName;
bool isLeapYear(int year);
int daysInMonth(int month, int year);
int firstDayOfMonth(int month, int year, int startDay);
void printMonth(int month, int year);
void printYear(int year);

int main()
{
    cout << "Year calendar or month calendar? (1 for year, 2 for month)" << endl;
    cin >> yearOrMonth;
    
    if (yearOrMonth == 1)
    {
        cout << "Please enter a year" << endl;
        cin >> year;
        
        printYear(year);
    }
    else if (yearOrMonth == 2)
    {
        cout << "Please enter a year" << endl;
        cin >> year;
    
        cout << "Please enter a month" << endl;
        cin >> month;
        
        printMonth(month, year); 
    }
    
}

void printMonth(int month, int year)
{
    if (month == 1)
    {
        monthName = "JANUARY";
    }
    else if (month == 2)
    {
        monthName = "FEBUARY";
    }
    else if (month == 3)
    {
        monthName = "MARCH";
    }
    else if (month == 4)
    {
        monthName = "APRIL";
    }
    else if (month == 5)
    {
        monthName = "MAY";
    }
    else if (month == 6)
    {
        monthName = "JUNE";
    }
    else if (month == 7)
    {
        monthName = "JULY";
    }
    else if (month == 8)
    {
        monthName = "AUGUST";
    }
    else if (month == 9)
    {
        monthName = "SEPTEMBER";
    }
    else if (month == 10)
    {
        monthName = "OCTOBER";
    }
    else if (month == 11)
    {
        monthName = "NOVEMBER";
    }
    else if (month == 12)
    {
        monthName = "DECEMBER";
    }
    
    cout << monthName << " " << year << endl;
    cout << " S  M Tu  W Th  F  S" << endl;
    
    
    
    if ((7 % firstDayOfMonth(month, year, startDay) == 0) && firstDayOfMonth(month, year, startDay) == 1)
    {
        cout << "";
    }
    if ((7 % firstDayOfMonth(month, year, startDay) == 0) && firstDayOfMonth(month, year, startDay) == 7)
    {
        cout << "                  "; 
    }
    if ((7 % firstDayOfMonth(month, year, startDay) == 1) && firstDayOfMonth(month, year, startDay) == 2)
    {
        cout << "   ";
    }
    if ((7 % firstDayOfMonth(month, year, startDay) == 1) && firstDayOfMonth(month, year, startDay) == 3)
    {
        cout << "      ";
    }
    if ((7 % firstDayOfMonth(month, year, startDay) == 1) && firstDayOfMonth(month, year, startDay) == 6)
    {
        cout << "               ";
    }
    if ((7 % firstDayOfMonth(month, year, startDay) == 3) && firstDayOfMonth(month, year, startDay) == 4)
    {
        cout << "         ";
    }
    if ((7 % firstDayOfMonth(month, year, startDay) == 2) && firstDayOfMonth(month, year, startDay) == 5)
    {
        cout << "            ";
    }
    
    days = (8 - firstDayOfMonth(month, year, startDay));
    
    for (int j = 1; j <= days; j++)
    {
        if (j / 10 < 1)
        {
            cout << " " << j << " ";
        }
        else if ((j / 10) >= 1)
        {
            cout << j << " ";
        }
            
    }
    cout << endl;

    for (int k = days + 1; k <= (days + 7); k++)
    {
        if (k / 10 < 1)
        {
            cout << " " << k << " ";
        }
        else if ((k / 10) >= 1)
        {
            cout << k << " ";
        }
        
    }
    cout << endl;
    
    for (int l = days + 8; l <= (days + 14); l++)
    {
        if (l / 10 < 1)
        {
            cout << " " << l << " ";
        }
        else if ((l / 10) >= 1)
        {
            cout << l << " ";
        }
        
    }
    cout << endl;
    
    for (int m = days + 15; m <= (days + 21); m++)
    {
        cout << m << " ";
    }
    cout << endl;
    
    if (daysInMonth(month, year) == 28)
    {
        if (firstDayOfMonth(month, year, startDay) == 1)
        {
            for (int n = days + 22; n < (((days + 28) - 31) + 25); n++)
            {
                cout << n << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 2)
        {
            for (int n = days + 22; n < (((days + 28) - 31) + 26); n++)
            {
                cout << n << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 3)
        {
            for (int p = days + 22; p < (((days + 28) - 31) + 24); p++)
            {
                cout << p << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 3)
        {
            for (int q = days + 22; q < (((days + 28) - 31) + 27); q++)
            {
                cout << q << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 4)
        {
            for (int r = days + 22; r < (((days + 28) - 31) + 28); r++)
            {
                cout << r << " ";
            }
            
        }
        if (firstDayOfMonth(month, year, startDay) == 5)
        {
            for (int s = days + 22; s < (((days + 28) - 31) + 29); s++)
            {
                cout << s << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 6)
        {
            for (int t = days + 22; t < (((days + 28) - 31) + 30); t++)
            {
                cout << t << " ";
            }
            cout << endl;
        
        }
        if (firstDayOfMonth(month, year, startDay) == 7)
        {
            for (int u = days + 22; u < (((days + 28) - 31) + 31); u++)
            {
                cout << u << " ";
            }
        }
    }
    else if (daysInMonth(month, year) == 29)
    {
        if (firstDayOfMonth(month, year, startDay) == 1)
        {
            for (int n = days + 22; n < (((days + 28) - 31) + 26); n++)
            {
                cout << n << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 2)
        {
            for (int n = days + 22; n < (((days + 28) - 31) + 27); n++)
            {
                cout << n << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 3)
        {
            for (int p = days + 22; p < (((days + 28) - 31) + 25); p++)
            {
                cout << p << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 3)
        {
            for (int q = days + 22; q < (((days + 28) - 31) + 28); q++)
            {
                cout << q << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 4)
        {
            for (int r = days + 22; r < (((days + 28) - 31) + 29); r++)
            {
                cout << r << " ";
            }   
        
        }
        if (firstDayOfMonth(month, year, startDay) == 5)
        {
            for (int s = days + 22; s < (((days + 28) - 31) + 30); s++)
            {
                cout << s << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 6)
        {
            for (int t = days + 22; t < (((days + 28) - 31) + 31); t++)
            {
                cout << t << " ";
            }
            cout << endl;   
        
        }
        if (firstDayOfMonth(month, year, startDay) == 7)
        {
            for (int u = days + 22; u < (((days + 28) - 31) + 32); u++)
            {
                cout << u << " ";
            }
        }
    }
    else if (daysInMonth(month, year) == 30)
    {
        if (firstDayOfMonth(month, year, startDay) == 1)
        {
            for (int n = days + 22; n < (((days + 28) - 31) + 27); n++)
            {
                cout << n << " ";
                }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 2)
        {
            for (int n = days + 22; n < (((days + 28) - 31) + 28); n++)
            {
                cout << n << " ";
            }   
        
        }
        if (firstDayOfMonth(month, year, startDay) == 3)
        {
            for (int p = days + 22; p < (((days + 28) - 31) + 26); p++)
            {
                cout << p << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 3)
        {
            for (int q = days + 22; q < (((days + 28) - 31) + 29); q++)
            {
                cout << q << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 4)
        {
            for (int r = days + 22; r < (((days + 28) - 31) + 30); r++)
            {
                cout << r << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 5)
        {
            for (int s = days + 22; s < (((days + 28) - 31) + 31); s++)
            {
                cout << s << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 6)
        {
            for (int t = days + 22; t < (((days + 28) - 31) + 32); t++)
            {
                cout << t << " ";
            }
            cout << endl;   
        }
        if (firstDayOfMonth(month, year, startDay) == 7)
        {
            for (int u = days + 22; u < (((days + 28) - 31) + 32); u++)
            {
                cout << u << " ";
            }
            cout << endl;
        
            cout << "30" << endl;
            
        }
    }
    else if (daysInMonth(month, year) == 31)
    {
        if (firstDayOfMonth(month, year, startDay) == 1)
        {
            for (int n = days + 22; n < (((days + 28) - 31) + 28); n++)
            {
                cout << n << " ";
                }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 2)
        {
            for (int n = days + 22; n < (((days + 28) - 31) + 29); n++)
            {
                cout << n << " ";
            }   
        
        }
        if (firstDayOfMonth(month, year, startDay) == 3)
        {
            for (int p = days + 22; p < (((days + 28) - 31) + 27); p++)
            {
                cout << p << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 3)
        {
            for (int q = days + 22; q < (((days + 28) - 31) + 30); q++)
            {
                cout << q << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 4)
        {
            for (int r = days + 22; r < (((days + 28) - 31) + 31); r++)
            {
                cout << r << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 5)
        {
            for (int s = days + 22; s < (((days + 28) - 31) + 32); s++)
            {
                cout << s << " ";
            }
        
        }
        if (firstDayOfMonth(month, year, startDay) == 6)
        {
            for (int t = days + 22; t < (((days + 28) - 31) + 32); t++)
            {
                cout << t << " ";
            }
            cout << endl;  
            
            cout << "31" << endl;
            
        }
        if (firstDayOfMonth(month, year, startDay) == 7)
        {
            for (int u = days + 22; u < (((days + 28) - 31) + 32); u++)
            {
                cout << u << " ";
            }
            cout << endl;
        
            cout << "30 31" << endl;
            
        }
    }
    
}

bool isLeapYear(int year)
{
    if (((year % 4) == 0) && ((year % 100) != 0) || ((((year % 4) == 0) && (year % 100) == 0) && ((year % 400) == 0)))
    {
        return true;
    }
    else
    {
        return false;
    }
    
    return true;
}

int daysInMonth(int month, int year)
{
    if (month == 1)
    {
        return 31;
    }
    else if (month == 2)
    {
        if (isLeapYear(year) == true)
        {
            return 29;
        }
        else if (isLeapYear(year) == false)
        {
            return 28;
        }
    }
    else if (month == 3)
    {
        return 31;
    }
    else if (month == 4)
    {
        return 30;
    }
    else if (month == 5)
    {
        return 31;
    }
    else if (month == 6)
    {
        return 30;
    }
    else if (month == 7)
    {
        return 31;
    }
    else if (month == 8)
    {
        return 31;
    }
    else if (month == 9)
    {
        return 30;
    }
    else if (month == 10)
    {
        return 31;
    }
    else if (month == 11)
    {
        return 30;
    }
    else if (month == 12)
    {
        return 31;
    }
    
    return 0;
}

int firstDayOfMonth(int month, int year, int startDay)
{
    int a = ((14 - month) / 12);
    int m = (month + (12 * a) - 2);
    
    startDay = (((1 + (year - a) + ((year - a) / 4) - ((year - a) / 100) + ((year - a) / 400) + ((31 * m) / 12)) % 7) + 1);
    
    return startDay;
}

void printYear(int year)
{
    for (int i = 0; i < 12; i++)
    {
        month++;
        printMonth(month, year);
        cout << endl;
        cout << endl;
    }
    
}