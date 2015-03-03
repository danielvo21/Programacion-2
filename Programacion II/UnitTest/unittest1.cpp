#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Programacion II\Vector2Df.h"
#include "..\Programacion II\Vector2Df.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		//Unit test functions
		TEST_METHOD(TestSetZeroIsZero)
		{
			Vector2Df p;
			p.setZero();
			p.isZero();

			Assert::IsTrue(p.isZero());
		}

		TEST_METHOD(TestNegate)
		{
			Vector2Df p;
			p.x = 2.0f, p.y = -3.0f;
			p.negate();

			Assert::AreEqual(p.x, -2.0f);
			Assert::AreEqual(p.y, +3.0f);
		}
		//Unit test operators
		TEST_METHOD(TestSuma)
		{
			Vector2Df v1,v2,v3;
			
			v1.x = 1.0f, v1.y = 2.0f;
			v2.x = 3.0f, v2.y = 4.0f;
			v3 = v1 + v2;

			Assert::AreEqual(v3.x, 4.0f);
			Assert::AreEqual(v3.y, 6.0f);
			
		}

		TEST_METHOD(TestResta)
		{
			Vector2Df v1, v2, v3;

			v1.x = 1.0f, v1.y = 4.0f;
			v2.x = 1.0f, v2.y = 2.0f;
			v3 = v1 - v2;

			Assert::AreEqual(v3.x, 0.0f);
			Assert::AreEqual(v3.y, 2.0f);

		}

		TEST_METHOD(TestSumaIgual)
		{
			Vector2Df v1, v2;

			v1.x = 1.0f, v1.y = 2.0f;
			v2.x = 3.0f, v2.y = 3.0f;
			v1 += v2;

			Assert::AreEqual(v1.x, 4.0f);
			Assert::AreEqual(v1.y, 5.0f);

		}

		TEST_METHOD(TestRestaIgual)
		{
			Vector2Df v1, v2;

			v1.x = 3.0f, v1.y = 2.0f;
			v2.x = 2.0f, v2.y = 3.0f;
			v1 -= v2;

			Assert::AreEqual(v1.x, 1.0f);
			Assert::AreEqual(v1.y, -1.0f);

		}

		//Unit test comparation

		TEST_METHOD(TestEqual)
		{
			Vector2Df v1, v2, v3, v4, v5, v6;

			v1.x = 2.0f, v1.y = 2.0f;
			v2.x = 2.0f, v2.y = 2.0f;
			
			Assert::IsTrue(v1 == v2);

			v1.x = 3.0f, v1.y = 3.0f;
			v2.x = 2.0f, v2.y = 3.0f;

			Assert::IsFalse(v3 == v4);

			v1.x = 3.0f, v1.y = 4.0f;
			v2.x = 2.0f, v2.y = 3.0f;

			Assert::IsFalse(v5 == v6);
			

		}

		TEST_METHOD(TestNotEqual)
		{
			Vector2Df v1, v2, v3, v4, v5, v6;

			v1.x = 2.0f, v1.y = 2.0f;
			v2.x = 2.0f, v2.y = 2.0f;

			Assert::IsFalse(v1 != v2);

			v1.x = 3.0f, v1.y = 3.0f;
			v2.x = 2.0f, v2.y = 3.0f;

			Assert::IsTrue(v3 != v4);

			v1.x = 3.0f, v1.y = 4.0f;
			v2.x = 2.0f, v2.y = 3.0f;

			Assert::IsTrue(v5 != v6);


		}
	};
}