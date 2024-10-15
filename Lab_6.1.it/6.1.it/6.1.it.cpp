#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1.it/lab_6.1.it.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double c;
            const int SIZE = 20;
            int r[SIZE];
            c = sum(r);
            Assert::AreEqual(c, 0, 0.00001);
        }

        TEST_METHOD(TestMethod2)
        {
            double q;
            const int SIZE = 21;
            int r[SIZE];
            q = count(r );
            Assert::AreEqual(q, 0, 0.00001);
        }
    };
}

