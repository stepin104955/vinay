#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>


/* Modify these two lines according to the project */
#include <lib_operations.h>
#define PROJECT_NAME    "Lib"

/* Prototypes for all the test functions */
void test_COMMAND(void);
void test_USER_NAME_AND_PASSWORD_CHECK(void);
void test_ADMIN_COMMAND(void);
void test_STUDENT_COMMAND(void);
void test_ADD_BOOK(void);
void test_DELETE_BOOK(void);
void test_EDIT_BOOK(void);
void test_BORROW_BOOK(void);
void test_VIEW_BOOK(void);
void test_SEARCH_BOOK(void);
void test_RETURN_BOOK(void);
void test_CHANGE_USER_NAME(void);
void test_CHANGE_PASSWORD(void);
void test_CLEAR(void);
void test_HELP(void);
void test_MY_PROFILE(void);
void test_VIEW_PROFILE(void);
void test_FORGET_USER_NAME(void);
void test_FORGET_PASSWORD(void);
void test_ADD_USER(void);
void test_RESTART(void);
void test_LOG_OUT(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "COMMAND", test_COMMAND);
  CU_add_test(suite, "USER_NAME_AND_PASSWORD_CHECK", test_USER_NAME_AND_PASSWORD_CHECK);
  CU_add_test(suite, "ADMIN_COMMAND", test_ADMIN_COMMAND);
  CU_add_test(suite, "STUDENT_COMMAND", test_STUDENT_COMMAND);
  CU_add_test(suite, "ADD_BOOK", test_ADD_BOOK);
  CU_add_test(suite, "DELETE_BOOK", test_DELETE_BOOK);
  CU_add_test(suite, "EDIT_BOOK", test_EDIT_BOOK);
  CU_add_test(suite, "BORROW_BOOK", test_BORROW_BOOK);
  CU_add_test(suite, "VIEW_BOOK", test_VIEW_BOOK);
  CU_add_test(suite, "SEARCH_BOOK", test_SEARCH_BOOK);
  CU_add_test(suite, "RETURN_BOOK", test_RETURN_BOOK);
  CU_add_test(suite, "CHANGE_USER_NAME", test_CHANGE_USER_NAME);
  CU_add_test(suite, "CHANGE_PASSWORD", test_CHANGE_PASSWORD);
  CU_add_test(suite, "CLEAR", test_CLEAR);
  CU_add_test(suite, "HELP", test_HELP);
  CU_add_test(suite, "MY_PROFILE", test_MY_PROFILE);
  CU_add_test(suite, "VIEW_PROFILE", test_VIEW_PROFILE);
  CU_add_test(suite, "FORGET_USER_NAME", test_FORGET_USER_NAME);
  CU_add_test(suite, "FORGET_PASSWORD", test_FORGET_PASSWORD);
  CU_add_test(suite, "ADD_USER", test_ADD_USER);
  CU_add_test(suite, " RESTART", test_ RESTART);
  CU_add_test(suite, "LOG_OUT", test_LOG_OUT);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_COMMAND(void) {
  CU_ASSERT(30 == COMMAND(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == COMMAND(750, 7500));
}

void test_USER_NAME_AND_PASSWORD_CHECK(void) {
  CU_ASSERT(3 == USER_NAME_AND_PASSWORD_CHECK(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == USER_NAME_AND_PASSWORD_CHECK(1000, 900));
}

void test_ADMIN_COMMAND(void) {
  CU_ASSERT(7 == ADMIN_COMMAND(10, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == ADMIN_COMMAND(1000, 900));
}

void test_STUDENT_COMMAND(void) {
  CU_ASSERT(27 == STUDENT_COMMAND(20, 7));
  
  /* Dummy fail*/
  CU_ASSERT(1025 == STUDENT_COMMAND(100, 2500));
}

void test_ADD_BOOK(void) {
  CU_ASSERT(13 == ADD_BOOK(16, 3));
  
  /* Dummy fail*/
  CU_ASSERT(106 == ADD_BOOK(1080, 900));
}

void test_DELETE_BOOK(void) {
  CU_ASSERT(88 == DELETE_BOOK(18, 70));
  
  /* Dummy fail*/
  CU_ASSERT(1458 == DELETE_BOOK(1450, 900));
}

void test_EDIT_BOOK(void) {
  CU_ASSERT(56 == EDIT_BOOK(23, 33));
  
  /* Dummy fail*/
  CU_ASSERT(1999 == EDIT_BOOK(1900, 990));
}

void test_BORROW_BOOK(void) {
  CU_ASSERT(10 == BORROW_BOOK(80, 70));
  
  /* Dummy fail*/
  CU_ASSERT(1458 == BORROW_BOOK(1450, 900));
}

void test_VIEW_BOOK(void) {
  CU_ASSERT(100 == VIEW_BOOKr(80, 20));
  
  /* Dummy fail*/
  CU_ASSERT(166 == VIEW_BOOK(1386, 800));
}

void test_SEARCH_BOOK(void) {
  CU_ASSERT(75 == SEARCH_BOOK(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == SEARCH_BOOK(400, 100));
}
void test_RETURN_BOOK(void) {
  CU_ASSERT(75 == RETURN_BOOK(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == RETURN_BOOK(400, 100));
}
void test_CHANGE_USER_NAME(void) {
  CU_ASSERT(75 == CHANGE_USER_NAME(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == CHANGE_USER_NAME(400, 100));
}
void test_CHANGE_PASSWORD(void) {
  CU_ASSERT(75 == CHANGE_PASSWORD(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == CHANGE_PASSWORD(400, 100));
}
void test_CLEAR(void) {
  CU_ASSERT(75 == CLEAR(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == CLEAR(400, 100));
}
void test_HELP(void) {
  CU_ASSERT(75 == HELP(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == HELP(400, 100));
}
void test_MY_PROFILE(void) {
  CU_ASSERT(75 == MY_PROFILE(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == MY_PROFILE(400, 100));
}
void test_VIEW_PROFILE(void) {
  CU_ASSERT(75 == VIEW_PROFILE(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == VIEW_PROFILE(400, 100));
}
void test_FORGET_USER_NAME(void) {
  CU_ASSERT(75 == FORGET_USER_NAME(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == FORGET_USER_NAME(400, 100));
}
void test_ ADD_USER(void) {
  CU_ASSERT(75 ==  ADD_USER(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == ADD_USER(400, 100));
}
void test_ RESTART(void) {
  CU_ASSERT(75 ==  RESTART(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 ==  RESTART(400, 100));
}
void test_  LOG_OUT(void) {
  CU_ASSERT(75 ==   LOG_OUT(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 ==   LOG_OUT(400, 100));
}





