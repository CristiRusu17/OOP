#pragma once
typedef char NElem;
typedef int TElem;
class shape
{
	private:
		int nrN, nrF;
		int nrn, nrf;
		NElem *Name;
		TElem *Flache;

	public:
		shape(int nrNa, int NrFl);

		bool SetName(char nume);
		bool SetFlache(int flache);

		int GetName(int nr);
		int GetFlache(int nr);

};
