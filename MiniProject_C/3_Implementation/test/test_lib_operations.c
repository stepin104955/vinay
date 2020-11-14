#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>


/* Modify these two lines according to the project */
#include <lib_operations.h>
#define PROJECT_NAME    "Lib"

/* Prototypes for all the test functions */
void test_Addbook(void);
void test_Searchbook(void);
void test_Displaybook(void);
void test_Author(void);
void test_Titlelist(void);
void test_Stock(void);
void test_Issue(void);
void test_bookret(void);
void test_Addmembr(void);
void test_Exit(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing
  CU_add_test(suite, "Addbook", test_Addbook);
  CU_add_test(suite, "Searchbook", test_Searchbook);
  CU_add_test(suite, "Displaybook", test_Displaybook);
  CU_add_test(suite, "Author", test_Author);
  CU_add_test(suite, "Titlelist", test_Titlelist);
  CU_add_test(suite, "Stock", test_Stock);
  CU_add_test(suite, "Issue", test_Issue);
  CU_add_test(suite, "bookret", test_bookret);
  CU_add_test(suite, "Addmembr", test_Addmembr);
  CU_add_test(suite, "Exit", test_Exit);*/

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
void test_Addbook(void) {
  CU_ASSERT(30 == Addbook(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == Addbook(750, 7500));
}

void test_Searchbook(void) {
  CU_ASSERT(3 == Searchbook(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == Searchbook(1000, 900));
}

void test_Displaybook(void) {
  CU_ASSERT(7 == Displaybook(10, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == Displaybook(1000, 900));
}

void test_Author(void) {
  CU_ASSERT(27 == Author(20, 7));
  
  /* Dummy fail*/
  CU_ASSERT(1025 == Author(100, 2500));
}

void test_Titlelist(void) {
  CU_ASSERT(13 == Titlelist(16, 3));
  
  /* Dummy fail*/
  CU_ASSERT(106 == Titlelist(1080, 900));
}

void test_Stock(void) {
  CU_ASSERT(88 == Stock(18, 70));
  
  /* Dummy fail*/
  CU_ASSERT(1458 == Stock(1450, 900));
}

void test_Issue(void) {
  CU_ASSERT(56 == Issue(23, 33));
  
  /* Dummy fail*/
  CU_ASSERT(1999 == Issue(1900, 990));
}

void test_bookret(void) {
  CU_ASSERT(10 == bookret(80, 70));
  
  /* Dummy fail*/
  CU_ASSERT(1458 == bookret(1450, 900));
}

void test_Addmembr(void) {
  CU_ASSERT(100 == Addmembr(80, 20));
  
  /* Dummy fail*/
  CU_ASSERT(166 == Addmembr(1386, 800));
}

void test_Exit(void) {
  CU_ASSERT(75 == Exit(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == Exit(400, 100));
}
