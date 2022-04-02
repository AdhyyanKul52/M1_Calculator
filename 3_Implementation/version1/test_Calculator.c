#include "unity.h"
extern void test_Calculator()

void setUp(void)
{

}

void tearDown(void)
{

}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(test_Calculator);

    return (UnityEnd());
}