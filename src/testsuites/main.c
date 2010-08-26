#include "boxbox.h"
#include "spheresphere.h"

TEST_SUITES {
    TEST_SUITE_ADD(TSBoxBox),
    TEST_SUITE_ADD(TSSphereSphere),

    TEST_SUITES_CLOSURE
};
int main(int argc, char *argv[])
{
    CU_SET_OUT_PREFIX("regressions/");
    CU_RUN(argc, argv);

    return 0;
}
