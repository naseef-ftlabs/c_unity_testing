/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "MockUsartPutChar.h"

static const char* CMockString_Usart_PutChar = "Usart_PutChar";
static const char* CMockString_data = "data";

typedef struct _CMOCK_Usart_PutChar_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  char Expected_data;

} CMOCK_Usart_PutChar_CALL_INSTANCE;

static struct MockUsartPutCharInstance
{
  char Usart_PutChar_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE Usart_PutChar_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void MockUsartPutChar_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.Usart_PutChar_CallInstance;
  if (Mock.Usart_PutChar_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Usart_PutChar);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void MockUsartPutChar_Init(void)
{
  MockUsartPutChar_Destroy();
}

void MockUsartPutChar_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void Usart_PutChar(char data)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Usart_PutChar_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Usart_PutChar);
  cmock_call_instance = (CMOCK_Usart_PutChar_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Usart_PutChar_CallInstance);
  Mock.Usart_PutChar_CallInstance = CMock_Guts_MemNext(Mock.Usart_PutChar_CallInstance);
  if (Mock.Usart_PutChar_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_Usart_PutChar,CMockString_data);
    UNITY_TEST_ASSERT_EQUAL_INT8(cmock_call_instance->Expected_data, data, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_Usart_PutChar(CMOCK_Usart_PutChar_CALL_INSTANCE* cmock_call_instance, char data);
void CMockExpectParameters_Usart_PutChar(CMOCK_Usart_PutChar_CALL_INSTANCE* cmock_call_instance, char data)
{
  cmock_call_instance->Expected_data = data;
}

void Usart_PutChar_CMockIgnore(void)
{
  Mock.Usart_PutChar_IgnoreBool = (char)1;
}

void Usart_PutChar_CMockStopIgnore(void)
{
  Mock.Usart_PutChar_IgnoreBool = (char)0;
}

void Usart_PutChar_CMockExpect(UNITY_LINE_TYPE cmock_line, char data)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Usart_PutChar_CALL_INSTANCE));
  CMOCK_Usart_PutChar_CALL_INSTANCE* cmock_call_instance = (CMOCK_Usart_PutChar_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Usart_PutChar_CallInstance = CMock_Guts_MemChain(Mock.Usart_PutChar_CallInstance, cmock_guts_index);
  Mock.Usart_PutChar_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_Usart_PutChar(cmock_call_instance, data);
}

