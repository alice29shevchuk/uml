#pragma once
#include<iostream>
#include<string>
using namespace std;
class Currency
{
private:
	int* banknote;
	double* size;
	string paper_type;
	string origin_county;
	double* now_wear;
	int* year;
	string id;
public:
	Currency()
	{
		this->banknote = 0;
		this->size = 0;
		this->paper_type = nullptr;
		this->origin_county = nullptr;
		this->now_wear = 0;
		this->year = 0;
		this->id = nullptr;
	}
	Currency(int banknote,double size,string paper_type,string origin_county,double now_wear,int year,string id)
	{
		this->banknote = new int(banknote);
		this->size = new double(size);
		this->paper_type = paper_type;
		this->origin_county = origin_county;
		this->now_wear = new double(now_wear);
		this->year = new int(year);
		this->id = id;
	}
	int* getBanknote()
	{
		return this->banknote;
	}
	double* getSize()
	{
		return this->size;
	}
	string getPaper_type()
	{
		return this->paper_type;
	}
	string getOrigin_country()
	{
		return this->origin_county;
	}
	double* getNow_wear()
	{
		return this->now_wear;
	}
	int* getYear()
	{
		return this->year;
	}
	void next_wear()
	{
		if (this->now_wear == (double*)1)
		{
			cout << "Изношена!\n";
		}
		else
		{
			cout << "Не изношена!\n";
		}
	}
	string getId()
	{
		return this->id;
	}
	void spend()
	{
		cout << "Потрачено!\n";
	}
	~Currency()
	{
		cout << "Деструктор!\n";
		delete this->banknote;
		delete this->size;
		delete this->year;
		delete this->now_wear;
	}
};

