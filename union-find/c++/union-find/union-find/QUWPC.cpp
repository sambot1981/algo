#include "QUWPC.h"

QUWPC::QUWPC(int N)
{
	_N = N;
	_id = new int[_N];
	_sz = new int[_N];
	for (size_t i = 0; i < _N; i++)
		_id[i] = i;
	for (size_t i = 0; i < _N; i++)
		_sz[i] = 1;
}


QUWPC::~QUWPC()
{
	if (_id != nullptr)
		delete[] _id;
	if (_sz != nullptr)
		delete[] _sz;
	return;
}

void QUWPC::join(int p, int q)
{
	int rp = root(p);
	int rq = root(q);

	if (rp == rq)
		return;
	if (_sz[rp] > _sz[rq])
	{
		_id[rq] = rp;
		_sz[rp] = _sz[rp] + _sz[rq];
	}
	else
	{
		_id[rp] = rq;
		_sz[rq] = _sz[rq] + _sz[rp];
	}

}

bool QUWPC::connected(int p, int q)
{
	return root(p) == root(q);
}

int QUWPC::root(int p)
{
	int curr_id = p;
	while (curr_id != _id[curr_id])
	{
		_id[curr_id] = _id[_id[curr_id]];
		curr_id = _id[curr_id];
	}
	return curr_id;
}