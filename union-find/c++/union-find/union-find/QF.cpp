#include "QF.h"

QF::QF(int N)
{
	_N = N;
	_id = new int[_N];
	for (size_t i = 0; i < _N; i++)
	{
		_id[i] = i;
	}
}

QF::~QF(void)
{
	if (_id != nullptr) 
	{
		delete[] _id;
	}		
	return;
}

void QF::join(int p, int q)
{
	int idp = _id[p];
	int idq = _id[q];

	for (size_t i = 0; i < _N; i++)
	{
		if (_id[i] == idp)
			_id[i] = idq;
	}
}

bool QF::connected(int p, int q)
{
	return *(_id + p) == *(_id + q);
}

