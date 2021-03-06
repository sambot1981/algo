#define BOOST_TEST_NO_MAIN
#include <boost/test/unit_test.hpp>
#include "union-find.h"

using namespace boost::unit_test;

test_suite* init_unit_test_suite(int argc, char* argv[])
{
	/* create test suite to for the Quick Find union find implementation */
	test_suite* quf = BOOST_TEST_SUITE("quick find");

	/* adding test to the preceding declared test suite */
	quf->add(BOOST_TEST_CASE(&QF_instanciation));
	quf->add(BOOST_TEST_CASE(&QF_one_connection));
	quf->add(BOOST_TEST_CASE(&QF_one_reflexive_connection));	
	quf->add(BOOST_TEST_CASE(&QF_one_symetric_connection));
	quf->add(BOOST_TEST_CASE(&QF_multiple_connection));

	/* create test suite to for the Quick Find union find implementation */
	test_suite* qu = BOOST_TEST_SUITE("quick union");

	/* adding test to the preceding declared test suite */
	qu->add(BOOST_TEST_CASE(&QU_instanciation));
	qu->add(BOOST_TEST_CASE(&QU_one_connection));
	qu->add(BOOST_TEST_CASE(&QU_one_reflexive_connection));
	qu->add(BOOST_TEST_CASE(&QU_one_symetric_connection));
	qu->add(BOOST_TEST_CASE(&QU_multiple_connection));

	/* create test suite to for the Quick Find union find implementation */
	test_suite* quw = BOOST_TEST_SUITE("quick union weighted");

	/* adding test to the preceding declared test suite */
	quw->add(BOOST_TEST_CASE(&QUW_instanciation));
	quw->add(BOOST_TEST_CASE(&QUW_one_connection));
	quw->add(BOOST_TEST_CASE(&QUW_one_reflexive_connection));
	quw->add(BOOST_TEST_CASE(&QUW_one_symetric_connection));
	quw->add(BOOST_TEST_CASE(&QUW_multiple_connection));

	/* create test suite to for the Quick Find union find implementation */
	test_suite* quwpc = BOOST_TEST_SUITE("quick union weighted with path compression");

	/* adding test to the preceding declared test suite */
	quwpc->add(BOOST_TEST_CASE(&QUW_instanciation));
	quwpc->add(BOOST_TEST_CASE(&QUW_one_connection));
	quwpc->add(BOOST_TEST_CASE(&QUW_one_reflexive_connection));
	quwpc->add(BOOST_TEST_CASE(&QUW_one_symetric_connection));
	quwpc->add(BOOST_TEST_CASE(&QUW_multiple_connection));

	/* add the test suite to the master test trunk*/
	framework::master_test_suite().add(quf);
	framework::master_test_suite().add(qu);
	framework::master_test_suite().add(quw);
	framework::master_test_suite().add(quwpc);

	return 0;
}

/* function main that is not handled by the framwork */
int main(int argc, char *argv[])
{
	return boost::unit_test::unit_test_main(&init_unit_test_suite, argc, argv);
}