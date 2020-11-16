#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3Recurs/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Laba63RecursUnitTest
{
	TEST_CLASS(Laba63RecursUnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int B[n] = { 5, 4, 2, 6, 0 };
			double actual;
			double exp = 7;
			actual = Suma(B, n, 0);
			Assert::AreEqual(actual, exp);
		}
	};
}
