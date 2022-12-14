/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include "MockTaskScheduler.h"
#include "MockTemperatureCalculator.h"
#include "MockTemperatureFilter.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testDoGetSampleShouldReturn_FALSE_WhenTaskSchedulerReturns_FALSE(void);
extern void testDoGetSampleShouldReturn_TRUE_WhenTaskSchedulerReturns_TRUE(void);
extern void testProcessInputShouldDelegateToTemperatureCalculatorAndPassResultToFilter(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  MockTaskScheduler_Init();
  MockTemperatureCalculator_Init();
  MockTemperatureFilter_Init();
}
static void CMock_Verify(void)
{
  MockTaskScheduler_Verify();
  MockTemperatureCalculator_Verify();
  MockTemperatureFilter_Verify();
}
static void CMock_Destroy(void)
{
  MockTaskScheduler_Destroy();
  MockTemperatureCalculator_Destroy();
  MockTemperatureFilter_Destroy();
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("TestAdcModel.c");
  run_test(testDoGetSampleShouldReturn_FALSE_WhenTaskSchedulerReturns_FALSE, "testDoGetSampleShouldReturn_FALSE_WhenTaskSchedulerReturns_FALSE", 16);
  run_test(testDoGetSampleShouldReturn_TRUE_WhenTaskSchedulerReturns_TRUE, "testDoGetSampleShouldReturn_TRUE_WhenTaskSchedulerReturns_TRUE", 22);
  run_test(testProcessInputShouldDelegateToTemperatureCalculatorAndPassResultToFilter, "testProcessInputShouldDelegateToTemperatureCalculatorAndPassResultToFilter", 28);

  CMock_Guts_MemFreeFinal();
  return UnityEnd();
}
