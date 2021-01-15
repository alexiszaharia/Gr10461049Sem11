#include "Persoana.h"

Persoana::Persoana()
{
	nume = "";
	varsta = 0;
}

Persoana::Persoana(string nume, int varsta)
{
	if (nume != "")
		this->nume = nume;
	else
		this->nume = "";

	if (varsta > 0)
		this->varsta = varsta;
	else
		this->varsta = 0;
}

Persoana::Persoana(const Persoana& p)
{
	nume = p.nume;
	varsta = p.varsta;
}

string Persoana::getNume()
{
	return nume;
}

void Persoana::setNume(string nume)
{
	if (nume != "")
		this->nume = nume;
}

int Persoana::getVarsta()
{
	return varsta;
}

void Persoana::setVarsta(int varsta)
{
	if (varsta > 0)
		this->varsta = varsta;
}

istream& operator>>(istream& in, Persoana& p)
{
	cout << "Nume: ";
	char buffer[50];
	in.getline(buffer, 50);
	p.nume = buffer;
	cout << "Varsta: ";
	in >> p.varsta;

	return in;
}

ostream& operator<<(ostream& out, Persoana p)
{
	out << "Persoana " << p.nume << " are varsta " << p.varsta << " ani." << endl;
	return out;
}

ifstream& operator>>(ifstream& in, Persoana& p)
{
	/*char buffer[50];
	in.getline(buffer, 50);
	p.nume = buffer;*/
	in >> p.nume;
	in >> p.varsta;

	return in;
}

ofstream& operator<<(ofstream& out, Persoana p)
{
	//const char* aux = p.nume.c_str();
	//out.write(aux, p.nume.length() + 1);
	//out.write(aux, strlen(aux) + 1);
	out << p.nume << endl;
	out << p.varsta << endl;

	return out;
}
