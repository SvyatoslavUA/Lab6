#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba6.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Laba63UnitTest
{
	TEST_CLASS(Laba63UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int i = 5;
			int B[i] = {5, 4, 2, 6, 0};
			double actual;
			double exp = 7;
			actual = Suma(B);
			Assert::AreEqual(actual, exp);
		}
	};
}
