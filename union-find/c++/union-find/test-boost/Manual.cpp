
#include <boost/test/unit_test.hpp>
#include "QF.h"

using namespace boost::unit_test;
//____________________________________________________________________________//

void union_find_instanciation()
{
	BOOST_TEST_MESSAGE(" free_test_function()");

	QF *p = &QF(10);
	BOOST_CHECK(p != nullptr);
}


