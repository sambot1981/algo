#include "QU.h"

QU::QU(int N)
{
	_N = N;
	_id = new int[_N];
	for (size_t i = 0; i < _N; i++)
	{
		_id[i] = i;
	}
}

bool QU::connected(int p, int q)
{
	return root(p) == root(q);
}

void QU::join(int p, int q)
{
	int rp = root(p);
	int rq = root(q);
	if (rp != rq)
		_id[rp] = rq;	
}

int QU::root(int p)
{
	int curr_id = p;
	while (curr_id != _id[curr_id])
		curr_id = _id[curr_id];
	return curr_id;
}

