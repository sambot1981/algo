#pragma once
class QF
{
private:
	int* _id;
	int _N; /* size of the structure QF */
public:
	QF(int N);
	void join(int p, int q);
	bool connected(int p, int q);
};


