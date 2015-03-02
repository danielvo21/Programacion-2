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
		
		TEST_METHOD(TestVector2Df)
		{
			Vector2Df v;
			v.setZero();
			v.isZero();

			Assert::IsTrue(v.isZero());
		}

	};
}