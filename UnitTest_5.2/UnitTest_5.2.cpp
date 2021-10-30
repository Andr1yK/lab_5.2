#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.2/lab_5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestFunc_S)
		{
			double res, arctan, s = 0, x = -10, eps = 0.001;
			int n = 0;

			res = round(S(x, eps, n, s) / eps) * eps;

			arctan = round(atan(x) / eps) * eps;

			Assert::AreEqual(res, arctan);
		}

		TEST_METHOD(TestFunc_A)
		{
			double res, x = -10., a = 1.;
			int n = 2;

			res = A(x, n, a);

			Assert::AreEqual(res, -0.006);
		}
	};
}
