#ifndef QU_H
#define QU_H

class QU
{
public:
	QU(int N);
	/* join two unconnected or connected component */
	void join(int p, int q);
	/* return connected state of two given component */
	bool connected(int p, int q);

private:
	int* _id;
	/* size of the structure QF */
	int _N; 
	/* return the root of the component of id (=index) p */
	int root(int p);
};

#endif