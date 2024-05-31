#define TEST_IMPLEMENTATION
#include "test.h"

#include "bst.h"

TEST(custom)
{
	TEST_ASSERT(false);
}

int main(void)
{
    return test_run((const test_fn[]){
	    custom,
        NULL,
    });
}
