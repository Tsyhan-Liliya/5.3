#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3.Lab/5.3.Lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = h(2.0) + h(1.0 + h(1.0)) + 1;
			double expected = 8.63303;

			Assert::AreEqual(expected, result, 0.001);
		}
	};
}
