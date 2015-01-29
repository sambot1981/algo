
#include <boost/test/unit_test.hpp>
#include "QF.h"

using namespace boost::unit_test;

void QF_instanciation()
{
	QF *p = &QF(10);
	BOOST_REQUIRE(p != nullptr);
}

void QF_one_connection()
{
	int N = 10;
	QF *p = &QF(N);
	BOOST_REQUIRE(p != nullptr);

	BOOST_CHECK_EQUAL(p->connected(5, 6), false);
	p->join(5, 6);
	BOOST_CHECK_EQUAL(p->connected(5, 6), true);

	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			if (i == j || (i == 5 && j == 6) || (i == 6 && j == 5))
				continue;
			BOOST_CHECK_EQUAL(p->connected(i, j), false);
		}
	}
}

void QF_one_reflexive_connection()
{
	int N = 10;
	QF *p = &QF(N);
	BOOST_REQUIRE(p != nullptr);

	BOOST_CHECK_EQUAL(p->connected(6, 6), true);
}

void QF_one_symetric_connection()
{
	int N = 10;
	QF *p = &QF(N);
	BOOST_REQUIRE(p != nullptr);

	BOOST_CHECK_EQUAL(p->connected(5, 6), false);
	p->join(5, 6);
	BOOST_CHECK_EQUAL(p->connected(5, 6), true);
	p->join(6, 5);
	BOOST_CHECK_EQUAL(p->connected(5, 6), true);

	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			if (i == j || (i == 5 && j == 6) || (i == 6 && j == 5))
				continue;
			BOOST_CHECK_EQUAL(p->connected(i, j), false);
		}
	}
}

void QF_multiple_connection()
{
	int N = 10;
	QF *p = &QF(N);
	
	p->join(2, 1);
	p->join(2, 3);
	p->join(4, 3);
	p->join(5, 4);
	p->join(0, 5);

	BOOST_CHECK_EQUAL(p->connected(5, 1), true);
	for (size_t i = 6; i <= N ; i++)
	{
		BOOST_CHECK_EQUAL(p->connected(1, i), false);
	}

	p->join(6, 9);
	p->join(7, 8);
	p->join(9, 8);

	/* join the two main components now */
	p->join(9, 1);
	
	for (size_t i = 6; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			BOOST_TEST_MESSAGE("i: " << i << ", j: " << j);
			BOOST_CHECK_EQUAL(p->connected(i, j), true);
		}
	}
}