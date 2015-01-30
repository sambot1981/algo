#ifndef QF_H
#define QF_H

class QF
{
private:
	int* _id;
	int _N; /* size of the structure QF */
public:
	QF(int N);
	~QF();
	void join(int p, int q);
	bool connected(int p, int q);
};

#endif
