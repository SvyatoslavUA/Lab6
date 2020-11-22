#include "pch.h"
#include "CppUnitTest.h"
#include "../6.4Recurs/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Laba64RecursUnitTest
{
	TEST_CLASS(Laba64RecursUnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int i = 5;
			int B[i] = { 5, 4, 2, 6, 2 };
			double actual;
			double exp = 20;
			actual = Product(B, i, 0);
			Assert::AreEqual(actual, exp);
		}
	};
}
