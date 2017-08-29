#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <gmock-more-args/gmock-more-args.h>

class MockSomeClass
{
public:
    MOCK_METHOD11(someMethod11, int(int, int, int, int, int, int, int, int, int, int, int));
    MOCK_METHOD12(someMethod12, int(int, int, int, int, int, int, int, int, int, int, int, int));
    MOCK_METHOD13(someMethod13, int(int, int, int, int, int, int, int, int, int, int, int, int, int));
    MOCK_METHOD14(someMethod14, int(int, int, int, int, int, int, int, int, int, int, int, int, int, int));
    MOCK_METHOD15(someMethod15, int(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int));
};


//
// Test for mocks
//
TEST(TestArguments, TestArguments)
{
    MockSomeClass instance;
    
    EXPECT_CALL(instance, someMethod11(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1)).Times(1);
    instance.someMethod11(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_CALL(instance, someMethod12(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1)).Times(1);
    instance.someMethod12(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_CALL(instance, someMethod13(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1)).Times(1);
    instance.someMethod13(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_CALL(instance, someMethod14(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1)).Times(1);
    instance.someMethod14(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    EXPECT_CALL(instance, someMethod15(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1)).Times(1);
    instance.someMethod15(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
}
