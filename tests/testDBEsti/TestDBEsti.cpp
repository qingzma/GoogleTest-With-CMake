#include <string>
#include "TestDBEsti.hpp"
#include "../../src/DBEsti.hpp"

using namespace DBEsti_ns;
using namespace std;

TestDBEsti::TestDBEsti() {}

TestDBEsti::~TestDBEsti() {};

void TestDBEsti::SetUp() {};

void TestDBEsti::TearDown() {};

TEST(getNameTest, ShouldReturnSampleLib1Name) {
    auto sampleLib1 = DBEsti();
    const char *result = "SampleLib1";
    ASSERT_STREQ(sampleLib1.getName().c_str(),result);
}

TEST(getFullNameTest, ShouldReturnBothSampleLib1AndSampleLib2Name) {
    auto sampleLib1 = DBEsti();
    const char *result = "SampleLib1SampleLib2";
    ASSERT_STREQ(sampleLib1.getFullName().c_str(),result);
}
