//
// File generated by /home/osg/manageTier3SW/ATLASLocalRootBase/i686/root/5.34.07-i686-slc5-gcc4.3/bin/rootcint at Tue Jul  2 14:21:08 2013

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME BCDataSetDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "BCDataSetDict.h"

#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"

// START OF SHADOWS

namespace ROOT {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOT
// END OF SHADOWS

namespace ROOT {
   void BCDataSet_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void BCDataSet_Dictionary();
   static void *new_BCDataSet(void *p = 0);
   static void *newArray_BCDataSet(Long_t size, void *p);
   static void delete_BCDataSet(void *p);
   static void deleteArray_BCDataSet(void *p);
   static void destruct_BCDataSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCDataSet*)
   {
      ::BCDataSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCDataSet),0);
      static ::ROOT::TGenericClassInfo 
         instance("BCDataSet", "./../BAT/BCDataSet.h", 37,
                  typeid(::BCDataSet), DefineBehavior(ptr, ptr),
                  0, &BCDataSet_Dictionary, isa_proxy, 0,
                  sizeof(::BCDataSet) );
      instance.SetNew(&new_BCDataSet);
      instance.SetNewArray(&newArray_BCDataSet);
      instance.SetDelete(&delete_BCDataSet);
      instance.SetDeleteArray(&deleteArray_BCDataSet);
      instance.SetDestructor(&destruct_BCDataSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCDataSet*)
   {
      return GenerateInitInstanceLocal((::BCDataSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BCDataSet*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void BCDataSet_Dictionary() {
      ::ROOT::GenerateInitInstanceLocal((const ::BCDataSet*)0x0)->GetClass();
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCDataSet(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::BCDataSet : new ::BCDataSet;
   }
   static void *newArray_BCDataSet(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::BCDataSet[nElements] : new ::BCDataSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCDataSet(void *p) {
      delete ((::BCDataSet*)p);
   }
   static void deleteArray_BCDataSet(void *p) {
      delete [] ((::BCDataSet*)p);
   }
   static void destruct_BCDataSet(void *p) {
      typedef ::BCDataSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCDataSet

/********************************************************
* BCDataSetDict.cxx
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableBCDataSetDict();

extern "C" void G__set_cpp_environmentBCDataSetDict() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("../BAT/BCDataSet.h");
  G__cpp_reset_tagtableBCDataSetDict();
}
#include <new>
extern "C" int G__cpp_dllrevBCDataSetDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* BCDataSet */
static int G__BCDataSetDict_173_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   BCDataSet* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new BCDataSet[n];
     } else {
       p = new((void*) gvp) BCDataSet[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new BCDataSet;
     } else {
       p = new((void*) gvp) BCDataSet;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__BCDataSetDictLN_BCDataSet));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   BCDataSet* p = NULL;
   char* gvp = (char*) G__getgvp();
   //m: 1
   if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
     p = new BCDataSet(*(BCDataSet*) libp->para[0].ref);
   } else {
     p = new((void*) gvp) BCDataSet(*(BCDataSet*) libp->para[0].ref);
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__BCDataSetDictLN_BCDataSet));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      {
         const BCDataSet& obj = ((BCDataSet*) G__getstructoffset())->operator=(*(BCDataSet*) libp->para[0].ref);
         result7->ref = (long) (&obj);
         result7->obj.i = (long) (&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 104, (long) ((BCDataSet*) G__getstructoffset())->GetNDataPoints());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 104, (long) ((BCDataSet*) G__getstructoffset())->GetNValuesPerPoint());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) ((BCDataSet*) G__getstructoffset())->GetDataPoint((unsigned int) G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      {
         vector<double>* pobj;
         vector<double> xobj = ((BCDataSet*) G__getstructoffset())->GetDataComponents((int) G__int(libp->para[0]));
         pobj = new vector<double>(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((BCDataSet*) G__getstructoffset())->ReadDataFromFile((const char*) G__int(libp->para[0]), (const char*) G__int(libp->para[1])
, (const char*) G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((BCDataSet*) G__getstructoffset())->ReadDataFromFile((const char*) G__int(libp->para[0]), (int) G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((BCDataSet*) G__getstructoffset())->ReadDataFromFileTree((const char*) G__int(libp->para[0]), (const char*) G__int(libp->para[1])
, (const char*) G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((BCDataSet*) G__getstructoffset())->ReadDataFromFileTxt((const char*) G__int(libp->para[0]), (int) G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((BCDataSet*) G__getstructoffset())->AddDataPoint((BCDataPoint*) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((BCDataSet*) G__getstructoffset())->Reset();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCDataSetDict_173_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((BCDataSet*) G__getstructoffset())->Dump();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef BCDataSet G__TBCDataSet;
static int G__BCDataSetDict_173_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 0
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (BCDataSet*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((BCDataSet*) (soff+(sizeof(BCDataSet)*i)))->~G__TBCDataSet();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (BCDataSet*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((BCDataSet*) (soff))->~G__TBCDataSet();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* BCDataSet */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncBCDataSetDict {
 public:
  G__Sizep2memfuncBCDataSetDict(): p(&G__Sizep2memfuncBCDataSetDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncBCDataSetDict::*p)();
};

size_t G__get_sizep2memfuncBCDataSetDict()
{
  G__Sizep2memfuncBCDataSetDict a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceBCDataSetDict() {

   /* Setting up class inheritance */
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableBCDataSetDict() {

   /* Setting up typedef entry */
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__BCDataSetDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCDataSetDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCDataSetDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCDataSetDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCDataSetDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__BCDataSetDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCDataSetDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCDataSetDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCDataSetDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCDataSetDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<BCDataPoint*>",117,G__get_linked_tagnum(&G__BCDataSetDictLN_vectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCDataSetDictLN_reverse_iteratorlEvectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCDataSetDictLN_vectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCDataSetDictLN_reverse_iteratorlEvectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCDataSetDictLN_vectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* BCDataSet */
static void G__setup_memvarBCDataSet(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__BCDataSetDictLN_BCDataSet));
   { BCDataSet *p; p=(BCDataSet*)0x1000; if (p) { }
   G__memvar_setup((void*)0,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__BCDataSetDictLN_vectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgR),G__defined_typename("BCDataVector"),-1,4,"fBCDataVector=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarBCDataSetDict() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncBCDataSet(void) {
   /* BCDataSet */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__BCDataSetDictLN_BCDataSet));
   G__memfunc_setup("BCDataSet",811,G__BCDataSetDict_173_0_1, 105, G__get_linked_tagnum(&G__BCDataSetDictLN_BCDataSet), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("BCDataSet",811,G__BCDataSetDict_173_0_2, 105, G__get_linked_tagnum(&G__BCDataSetDictLN_BCDataSet), -1, 0, 1, 1, 1, 0, "u 'BCDataSet' - 11 - bcdataset", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("operator=",937,G__BCDataSetDict_173_0_3, 117, G__get_linked_tagnum(&G__BCDataSetDictLN_BCDataSet), -1, 1, 1, 1, 1, 0, "u 'BCDataSet' - 11 - bcdataset", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetNDataPoints",1381,G__BCDataSetDict_173_0_4, 104, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetNValuesPerPoint",1807,G__BCDataSetDict_173_0_5, 104, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetDataPoint",1188,G__BCDataSetDict_173_0_6, 85, G__get_linked_tagnum(&G__BCDataSetDictLN_BCDataPoint), -1, 0, 1, 1, 1, 0, "h - - 0 - index", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetDataComponents",1728,G__BCDataSetDict_173_0_7, 117, G__get_linked_tagnum(&G__BCDataSetDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR), G__defined_typename("vector<double>"), 0, 1, 1, 1, 0, "i - - 0 - index", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("ReadDataFromFile",1546,G__BCDataSetDict_173_0_8, 105, -1, -1, 0, 3, 1, 1, 0, 
"C - - 10 - filename C - - 10 - treename "
"C - - 10 - branchnames", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("ReadDataFromFile",1546,G__BCDataSetDict_173_0_9, 105, -1, -1, 0, 2, 1, 1, 0, 
"C - - 10 - filename i - - 0 - nvariables", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("ReadDataFromFileTree",1946,G__BCDataSetDict_173_0_10, 105, -1, -1, 0, 3, 1, 1, 0, 
"C - - 10 - filename C - - 10 - treename "
"C - - 10 - branchnames", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("ReadDataFromFileTxt",1866,G__BCDataSetDict_173_0_11, 105, -1, -1, 0, 2, 1, 1, 0, 
"C - - 10 - filename i - - 0 - nvariables", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("AddDataPoint",1165,G__BCDataSetDict_173_0_12, 121, -1, -1, 0, 1, 1, 1, 0, "U 'BCDataPoint' - 0 - datapoint", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Reset",515,G__BCDataSetDict_173_0_13, 121, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Dump",406,G__BCDataSetDict_173_0_14, 121, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~BCDataSet", 937, G__BCDataSetDict_173_0_15, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncBCDataSetDict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalBCDataSetDict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {
}

static void G__cpp_setup_func13() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcBCDataSetDict() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
  G__cpp_setup_func13();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__BCDataSetDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR = { "vector<double,allocator<double> >" , 99 , -1 };
G__linked_taginfo G__BCDataSetDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__BCDataSetDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCDataSetDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__BCDataSetDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCDataSetDictLN_BCDataPoint = { "BCDataPoint" , 99 , -1 };
G__linked_taginfo G__BCDataSetDictLN_vectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgR = { "vector<BCDataPoint*,allocator<BCDataPoint*> >" , 99 , -1 };
G__linked_taginfo G__BCDataSetDictLN_reverse_iteratorlEvectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<BCDataPoint*,allocator<BCDataPoint*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCDataSetDictLN_BCDataSet = { "BCDataSet" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableBCDataSetDict() {
  G__BCDataSetDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR.tagnum = -1 ;
  G__BCDataSetDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__BCDataSetDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCDataSetDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__BCDataSetDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCDataSetDictLN_BCDataPoint.tagnum = -1 ;
  G__BCDataSetDictLN_vectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgR.tagnum = -1 ;
  G__BCDataSetDictLN_reverse_iteratorlEvectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCDataSetDictLN_BCDataSet.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableBCDataSetDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__BCDataSetDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR);
   G__get_linked_tagnum_fwd(&G__BCDataSetDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__BCDataSetDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCDataSetDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCDataSetDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCDataSetDictLN_BCDataPoint);
   G__get_linked_tagnum_fwd(&G__BCDataSetDictLN_vectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCDataSetDictLN_reverse_iteratorlEvectorlEBCDataPointmUcOallocatorlEBCDataPointmUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__BCDataSetDictLN_BCDataSet),sizeof(BCDataSet),-1,3840,(char*)NULL,G__setup_memvarBCDataSet,G__setup_memfuncBCDataSet);
}
extern "C" void G__cpp_setupBCDataSetDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupBCDataSetDict()");
  G__set_cpp_environmentBCDataSetDict();
  G__cpp_setup_tagtableBCDataSetDict();

  G__cpp_setup_inheritanceBCDataSetDict();

  G__cpp_setup_typetableBCDataSetDict();

  G__cpp_setup_memvarBCDataSetDict();

  G__cpp_setup_memfuncBCDataSetDict();
  G__cpp_setup_globalBCDataSetDict();
  G__cpp_setup_funcBCDataSetDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncBCDataSetDict();
  return;
}
class G__cpp_setup_initBCDataSetDict {
  public:
    G__cpp_setup_initBCDataSetDict() { G__add_setup_func("BCDataSetDict",(G__incsetup)(&G__cpp_setupBCDataSetDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initBCDataSetDict() { G__remove_setup_func("BCDataSetDict"); }
};
G__cpp_setup_initBCDataSetDict G__cpp_setup_initializerBCDataSetDict;
