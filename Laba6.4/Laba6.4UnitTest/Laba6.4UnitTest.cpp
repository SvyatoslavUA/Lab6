#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba6.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Laba64UnitTest
{
	TEST_CLASS(Laba64UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int i = 5;
			int B[i] = { 5, 4, 2, 6, 0 };
			double actual;
			double exp = 7;
			actual = Suma(B, i);
			Assert::AreEqual(actual, exp);
		}
	};
}
