#include "QF.h"
#include <boost/test/unit_test.hpp>
using namespace boost::unit_test;

void test_instanciation_quick_find()
{
	QF *p = &QF(10);

	BOOST_CHECK(p != nullptr);
}

test_suite*
init_unit_test_suite(int argc, char* argv[])
{
	framework::master_test_suite().
		add(BOOST_TEST_CASE(&test_instanciation_quick_find));

	return 0;
}