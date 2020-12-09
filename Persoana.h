#pragma once
#include<iostream>
#include<fstream>

using namespace std;

class Persoana
{
	string nume;
	int varsta;

public:
	Persoana();
	Persoana(string nume, int varsta);
	Persoana(const Persoana& p);

	string getNume();
	void setNume(string nume);
	int getVarsta();
	void setVarsta(int varsta);

	friend istream& operator>>(istream& in, Persoana& p);
	friend ostream& operator<<(ostream& out, Persoana p);
	
	friend ifstream& operator>>(ifstream& in, Persoana& p);
	friend ofstream& operator<<(ofstream& out, Persoana p);
};

