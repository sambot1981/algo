ALGO PROJECT README
=======================================================================================

It's a pedagogical project to learn most of the important algorithm and try to give an implementation of them.

I - Directory tree of the project:
=======================================================================================

/c++				
	/include					all of the C++ libs includes
	/lib						all of the static or dynamic C++ libs
/union-find						the union find project

II - Build C++ solutions
=======================================================================================
The algorithm are standalone code (do NOT necessitate other libraries or include except the STL) but the test project include for all algorithm code yes.
The unit testing framework used is Boost Test Library  (v. 1_57_0) http://www.boost.org/doc/libs/1_57_0/libs/test/doc/html/index.html. Instruction about how to build it may be found under:
http://www.boost.org/doc/libs/1_57_0/more/getting_started/windows.html#or-build-binaries-from-source 

The following step are necessary:
1 - Download and decompress boost_1_57_0.(zip|7z...)
2 - Change directory ($>cd ..) to the first directory of the archive (this will be referred as BOOST_ROOT)
3 - Build boost.build tool
	Go to the directory tools\build\.
	Run bootstrap.bat
	Run b2 install --prefix=PREFIX where PREFIX is the directory where you want Boost.Build to be installed
	Add PREFIX\bin to your PATH environment variable.
4 - Change directory to BOOST_ROOT
5 - Execute the following command:
boost_root_directory> b2 --with-test toolset=msvc-12.0 link=static define=BOOST_TEST_NO_MAIN
6 - The static library necessary to build the test are under:
BOOST_ROOT/stage/lib
7 - The header of boost are under:
 BOOST_ROOT/boost

The header directory may be placed where practical and reference from within the C++ solution for compilation of the test-boost project.
The static libraries and directory may placed where practical and reference from within the C++ solution for linking of the test-boost project.

Good luck !