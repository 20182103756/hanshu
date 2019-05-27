// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iosstream"

int getYear();
int getMonth();
int getDay();
void addDate(CMyDate od);
CMyDate addDate(CMyDate &od);         //   od3 = od1.addDate(od2);
CMyDate operator + (CMyDate &otemp);   //	od3 = od1 + od2;
CMyDate operator + (const int &d);
};
void CMyDate::addDate(CMyDate od)
CMyDate CMyDate::operator +(CMyDate &otemp)
{
	year = year + od.year;
	month = month + od.month;
	day = day + od.day;
	check();
	CMyDate temp;
	temp.setDate(year + otemp.year, month + otemp.month, day + otemp.day);
	return temp;
}
CMyDate CMyDate::operator + (const int &d)
{
	CMyDate temp;
	temp.setDate(year, month, day + d);
	return temp;
}
CMyDate CMyDate::addDate(CMyDate &od)
{
	CMyDate temp;
	temp.setDate(year + od.year, month + od.month, day + od.day);
	return temp;
}
CMyDate::CMyDate()
{
	@ - 141, 12 + 154, 12 @@ void CMyDate::addOneDay()
}
int main()
{
	CMyDate od1(2020, 2, 29), od2(1, 2, 20);
	int i;
	int count = 1;
	od1.addDate(od2);
	CMyDate od1(2019, 5, 27), od2(0, 0, 100), od3;
	//od3 = od1.addDate(od2);
	od3 = od1 + 100;
	od1.displayDate();
	od2.displayDate();
	od3.displayDate();

	return 0;
}