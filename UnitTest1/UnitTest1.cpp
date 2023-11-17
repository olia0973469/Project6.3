#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 1, 2, 3, 4, 5 };
			const int size = 5;
			int result = Sum(a, size, 0);
			Assert::AreEqual(result, 15);
		}
	};
}
