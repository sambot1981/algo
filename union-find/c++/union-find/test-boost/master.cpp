#define BOOST_TEST_NO_MAIN
#include <boost/test/unit_test.hpp>
#include "union-find.h"

using namespace boost::unit_test;
//____________________________________________________________________________//

test_suite* init_unit_test_suite(int argc, char* argv[])
{
	test_suite* union_find = BOOST_TEST_SUITE("union_find");
	union_find->add(BOOST_TEST_CASE(&union_find_instanciation));
	framework::master_test_suite().add(union_find);

	return 0;
}
//____________________________________________________________________________//

int main(int argc, char *argv[])
{
	return boost::unit_test::unit_test_main(&init_unit_test_suite, argc, argv);
}