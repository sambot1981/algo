#ifndef QUWPC_H
#define QUWPC_H

class QUWPC
{
public:
	QUWPC(int N);
	~QUWPC(void);
	/* join two unconnected or connected component */
	void join(int p, int q);
	/* return connected state of two given component */
	bool connected(int p, int q);

private:
	/* the structure itself with all the id of the components */
	int* _id;
	/* cache of the size of a tree that contain a component */
	int* _sz;
	/* size of the structure QF */
	int _N;
	/* return the root of the component of id (=index) p */
	int root(int p);
};

#endif
