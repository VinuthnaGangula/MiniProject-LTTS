#include "unity.h"
#include "unity_internals.h"
#include "tdq.h"

void setUp(void){

}

void tearDown(void){

}

void test_viewDaemonDetails(void){
    //TEST_ASSERT_EQUAL("Extrovert-Music-Night Person",viewDaemonDetails(1));
    char* buff=viewDaemonDetails(9);
    TEST_ASSERT_EQUAL("Please enter valid number between 0 and 7",buff);
    //TEST_ASSERT_EQUAL("Please enter valid number between 0 and 7",viewDaemonDetails(-1));
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_viewDaemonDetails);
    return UNITY_END();
}