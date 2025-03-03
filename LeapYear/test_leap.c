#include "leap.h"  // Include the header file for leap_year declaration
#include <assert.h>

// Test cases for leap_year function
void test_year_not_divisible_by_4_in_common_year() {
    assert(leap_year(1997) == 0);  // 1997 is not a leap year
}

void test_year_divisible_by_4_not_divisible_by_100_in_leap_year() {
    assert(leap_year(1996) == 1);  // 1996 is a leap year
}

// Additional test cases here...
