#include "QF.h"

//#define BOOST_TEST_MODULE TestUnionFind
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(testUnionFind1)
{
	QF *p = &QF(10);

	BOOST_CHECK(p != nullptr);

}

