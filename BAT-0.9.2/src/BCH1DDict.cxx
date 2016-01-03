//
// File generated by /home/osg/manageTier3SW/ATLASLocalRootBase/i686/root/5.34.07-i686-slc5-gcc4.3/bin/rootcint at Tue Jul  2 14:21:08 2013

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME BCH1DDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "BCH1DDict.h"

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
   void BCH1D_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void BCH1D_Dictionary();
   static void *new_BCH1D(void *p = 0);
   static void *newArray_BCH1D(Long_t size, void *p);
   static void delete_BCH1D(void *p);
   static void deleteArray_BCH1D(void *p);
   static void destruct_BCH1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCH1D*)
   {
      ::BCH1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCH1D),0);
      static ::ROOT::TGenericClassInfo 
         instance("BCH1D", "./../BAT/BCH1D.h", 31,
                  typeid(::BCH1D), DefineBehavior(ptr, ptr),
                  0, &BCH1D_Dictionary, isa_proxy, 0,
                  sizeof(::BCH1D) );
      instance.SetNew(&new_BCH1D);
      instance.SetNewArray(&newArray_BCH1D);
      instance.SetDelete(&delete_BCH1D);
      instance.SetDeleteArray(&deleteArray_BCH1D);
      instance.SetDestructor(&destruct_BCH1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCH1D*)
   {
      return GenerateInitInstanceLocal((::BCH1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BCH1D*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void BCH1D_Dictionary() {
      ::ROOT::GenerateInitInstanceLocal((const ::BCH1D*)0x0)->GetClass();
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCH1D(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::BCH1D : new ::BCH1D;
   }
   static void *newArray_BCH1D(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::BCH1D[nElements] : new ::BCH1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCH1D(void *p) {
      delete ((::BCH1D*)p);
   }
   static void deleteArray_BCH1D(void *p) {
      delete [] ((::BCH1D*)p);
   }
   static void destruct_BCH1D(void *p) {
      typedef ::BCH1D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCH1D

/********************************************************
* BCH1DDict.cxx
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

extern "C" void G__cpp_reset_tagtableBCH1DDict();

extern "C" void G__set_cpp_environmentBCH1DDict() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("../BAT/BCH1D.h");
  G__cpp_reset_tagtableBCH1DDict();
}
#include <new>
extern "C" int G__cpp_dllrevBCH1DDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* BCH1D */
static int G__BCH1DDict_214_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   BCH1D* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new BCH1D[n];
     } else {
       p = new((void*) gvp) BCH1D[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new BCH1D;
     } else {
       p = new((void*) gvp) BCH1D;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__BCH1DDictLN_BCH1D));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   BCH1D* p = NULL;
   char* gvp = (char*) G__getgvp();
   //m: 1
   if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
     p = new BCH1D((TH1D*) G__int(libp->para[0]));
   } else {
     p = new((void*) gvp) BCH1D((TH1D*) G__int(libp->para[0]));
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__BCH1DDictLN_BCH1D));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) ((BCH1D*) G__getstructoffset())->GetHistogram());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((BCH1D*) G__getstructoffset())->GetMean());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((BCH1D*) G__getstructoffset())->GetMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((BCH1D*) G__getstructoffset())->GetMedian());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((BCH1D*) G__getstructoffset())->GetQuantile((double) G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((BCH1D*) G__getstructoffset())->GetLimit((double) G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((BCH1D*) G__getstructoffset())->GetRMS());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((BCH1D*) G__getstructoffset())->GetIntegral((double) G__double(libp->para[0]), (double) G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((BCH1D*) G__getstructoffset())->GetPValue((double) G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((BCH1D*) G__getstructoffset())->SetHistogram((TH1D*) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((BCH1D*) G__getstructoffset())->SetDefaultCLLimit((double) G__double(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((BCH1D*) G__getstructoffset())->SetGlobalMode((double) G__double(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 5:
      ((BCH1D*) G__getstructoffset())->Print((const char*) G__int(libp->para[0]), (int) G__int(libp->para[1])
, (double) G__double(libp->para[2]), (int) G__int(libp->para[3])
, (int) G__int(libp->para[4]));
      G__setnull(result7);
      break;
   case 4:
      ((BCH1D*) G__getstructoffset())->Print((const char*) G__int(libp->para[0]), (int) G__int(libp->para[1])
, (double) G__double(libp->para[2]), (int) G__int(libp->para[3]));
      G__setnull(result7);
      break;
   case 3:
      ((BCH1D*) G__getstructoffset())->Print((const char*) G__int(libp->para[0]), (int) G__int(libp->para[1])
, (double) G__double(libp->para[2]));
      G__setnull(result7);
      break;
   case 2:
      ((BCH1D*) G__getstructoffset())->Print((const char*) G__int(libp->para[0]), (int) G__int(libp->para[1]));
      G__setnull(result7);
      break;
   case 1:
      ((BCH1D*) G__getstructoffset())->Print((const char*) G__int(libp->para[0]));
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 2:
      ((BCH1D*) G__getstructoffset())->Draw((int) G__int(libp->para[0]), (double) G__double(libp->para[1]));
      G__setnull(result7);
      break;
   case 1:
      ((BCH1D*) G__getstructoffset())->Draw((int) G__int(libp->para[0]));
      G__setnull(result7);
      break;
   case 0:
      ((BCH1D*) G__getstructoffset())->Draw();
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_17(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((const BCH1D*) G__getstructoffset())->DrawDelta((double) G__double(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_18(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 4:
      ((BCH1D*) G__getstructoffset())->DrawShadedLimits((double) G__double(libp->para[0]), (double) G__double(libp->para[1])
, (double) G__double(libp->para[2]), (double) G__double(libp->para[3]));
      G__setnull(result7);
      break;
   case 3:
      ((BCH1D*) G__getstructoffset())->DrawShadedLimits((double) G__double(libp->para[0]), (double) G__double(libp->para[1])
, (double) G__double(libp->para[2]));
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_19(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 3:
      ((BCH1D*) G__getstructoffset())->DrawSmallest((double) G__double(libp->para[0]), (double) G__double(libp->para[1])
, (bool) G__int(libp->para[2]));
      G__setnull(result7);
      break;
   case 2:
      ((BCH1D*) G__getstructoffset())->DrawSmallest((double) G__double(libp->para[0]), (double) G__double(libp->para[1]));
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_20(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((BCH1D*) G__getstructoffset())->DrawLegend((const char*) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_21(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 3:
      G__letdouble(result7, 100, (double) ((BCH1D*) G__getstructoffset())->GetSmallestInterval(*(double*) G__Doubleref(&libp->para[0]), *(double*) G__Doubleref(&libp->para[1])
, (double) G__double(libp->para[2])));
      break;
   case 2:
      G__letdouble(result7, 100, (double) ((BCH1D*) G__getstructoffset())->GetSmallestInterval(*(double*) G__Doubleref(&libp->para[0]), *(double*) G__Doubleref(&libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_22(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) ((BCH1D*) G__getstructoffset())->GetSmallestIntervalHistogram((double) G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_23(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 1:
      {
         vector<double>* pobj;
         vector<double> xobj = ((BCH1D*) G__getstructoffset())->GetSmallestIntervals((double) G__double(libp->para[0]));
         pobj = new vector<double>(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
      break;
   case 0:
      {
         vector<double>* pobj;
         vector<double> xobj = ((BCH1D*) G__getstructoffset())->GetSmallestIntervals();
         pobj = new vector<double>(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_24(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 100, (double) ((BCH1D*) G__getstructoffset())->IntegralWidth((double) G__double(libp->para[0]), (double) G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCH1DDict_214_0_25(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) ((BCH1D*) G__getstructoffset())->GetSubHisto((double) G__double(libp->para[0]), (double) G__double(libp->para[1])
, (const char*) G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__BCH1DDict_214_0_26(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   BCH1D* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new BCH1D(*(BCH1D*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__BCH1DDictLN_BCH1D));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef BCH1D G__TBCH1D;
static int G__BCH1DDict_214_0_27(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
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
       delete[] (BCH1D*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((BCH1D*) (soff+(sizeof(BCH1D)*i)))->~G__TBCH1D();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (BCH1D*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((BCH1D*) (soff))->~G__TBCH1D();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__BCH1DDict_214_0_28(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   BCH1D* dest = (BCH1D*) G__getstructoffset();
   *dest = *(BCH1D*) libp->para[0].ref;
   const BCH1D& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* BCH1D */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncBCH1DDict {
 public:
  G__Sizep2memfuncBCH1DDict(): p(&G__Sizep2memfuncBCH1DDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncBCH1DDict::*p)();
};

size_t G__get_sizep2memfuncBCH1DDict()
{
  G__Sizep2memfuncBCH1DDict a;
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
extern "C" void G__cpp_setup_inheritanceBCH1DDict() {

   /* Setting up class inheritance */
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableBCH1DDict() {

   /* Setting up typedef entry */
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__BCH1DDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCH1DDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCH1DDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCH1DDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCH1DDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__BCH1DDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCH1DDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCH1DDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCH1DDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCH1DDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TVectorT<Float_t>",117,G__get_linked_tagnum(&G__BCH1DDictLN_TVectorTlEfloatgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("TVectorT<Double_t>",117,G__get_linked_tagnum(&G__BCH1DDictLN_TVectorTlEdoublegR),0,-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* BCH1D */
static void G__setup_memvarBCH1D(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__BCH1DDictLN_BCH1D));
   { BCH1D *p; p=(BCH1D*)0x1000; if (p) { }
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__BCH1DDictLN_TH1D),-1,-1,4,"fHistogram=",0,(char*)NULL);
   G__memvar_setup((void*)0,100,0,0,-1,-1,-1,4,"fDefaultCLLimit=",0,(char*)NULL);
   G__memvar_setup((void*)0,100,0,0,-1,-1,-1,4,"fMode=",0,(char*)NULL);
   G__memvar_setup((void*)0,105,0,0,-1,-1,-1,4,"fModeFlag=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarBCH1DDict() {
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
static void G__setup_memfuncBCH1D(void) {
   /* BCH1D */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__BCH1DDictLN_BCH1D));
   G__memfunc_setup("BCH1D",322,G__BCH1DDict_214_0_1, 105, G__get_linked_tagnum(&G__BCH1DDictLN_BCH1D), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("BCH1D",322,G__BCH1DDict_214_0_2, 105, G__get_linked_tagnum(&G__BCH1DDictLN_BCH1D), -1, 0, 1, 1, 1, 0, "U 'TH1D' - 0 - hist", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetHistogram",1230,G__BCH1DDict_214_0_3, 85, G__get_linked_tagnum(&G__BCH1DDictLN_TH1D), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetMean",673,G__BCH1DDict_214_0_4, 100, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetMode",677,G__BCH1DDict_214_0_5, 100, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetMedian",878,G__BCH1DDict_214_0_6, 100, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetQuantile",1123,G__BCH1DDict_214_0_7, 100, -1, -1, 0, 1, 1, 1, 0, "d - - 0 - probablity", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetLimit",799,G__BCH1DDict_214_0_8, 100, -1, -1, 0, 1, 1, 1, 0, "d - - 0 - probability", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetRMS",530,G__BCH1DDict_214_0_9, 100, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetIntegral",1110,G__BCH1DDict_214_0_10, 100, -1, -1, 0, 2, 1, 1, 0, 
"d - - 0 - valuemin d - - 0 - valuemax", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetPValue",877,G__BCH1DDict_214_0_11, 100, -1, -1, 0, 1, 1, 1, 0, "d - - 0 - probability", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("SetHistogram",1242,G__BCH1DDict_214_0_12, 121, -1, -1, 0, 1, 1, 1, 0, "U 'TH1D' - 0 - hist", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("SetDefaultCLLimit",1663,G__BCH1DDict_214_0_13, 121, -1, -1, 0, 1, 1, 1, 0, "d - - 0 - limit", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("SetGlobalMode",1282,G__BCH1DDict_214_0_14, 121, -1, -1, 0, 1, 1, 1, 0, "d - - 0 - mode", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Print",525,G__BCH1DDict_214_0_15, 121, -1, -1, 0, 5, 1, 1, 0, 
"C - - 10 - filename i - - 0 '0' options "
"d - - 0 '0.' ovalue i - - 0 '0' ww "
"i - - 0 '0' wh", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Draw",398,G__BCH1DDict_214_0_16, 121, -1, -1, 0, 2, 1, 1, 0, 
"i - - 0 '0' options d - - 0 '0.' ovalue", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DrawDelta",888,G__BCH1DDict_214_0_17, 121, -1, -1, 0, 1, 1, 1, 8, "d - - 0 - value", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DrawShadedLimits",1609,G__BCH1DDict_214_0_18, 121, -1, -1, 0, 4, 1, 1, 0, 
"d - - 0 - mode d - - 0 - min "
"d - - 0 - max d - - 0 '0' limit", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DrawSmallest",1235,G__BCH1DDict_214_0_19, 121, -1, -1, 0, 3, 1, 1, 0, 
"d - - 0 - mode d - - 0 - prob "
"g - - 0 'true' drawmean", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DrawLegend",989,G__BCH1DDict_214_0_20, 121, -1, -1, 0, 1, 1, 1, 0, "C - - 10 - text", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetSmallestInterval",1962,G__BCH1DDict_214_0_21, 100, -1, -1, 0, 3, 1, 1, 0, 
"d - - 1 - min d - - 1 - max "
"d - - 0 '.68' content", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetSmallestIntervalHistogram",2904,G__BCH1DDict_214_0_22, 85, G__get_linked_tagnum(&G__BCH1DDictLN_TH1D), -1, 0, 1, 1, 1, 0, "d - - 0 - level", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetSmallestIntervals",2077,G__BCH1DDict_214_0_23, 117, G__get_linked_tagnum(&G__BCH1DDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR), G__defined_typename("vector<double>"), 0, 1, 1, 1, 0, "d - - 0 '0.68' content", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("IntegralWidth",1334,G__BCH1DDict_214_0_24, 100, -1, -1, 0, 2, 1, 1, 0, 
"d - - 0 - min d - - 0 - max", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("GetSubHisto",1105,G__BCH1DDict_214_0_25, 85, G__get_linked_tagnum(&G__BCH1DDictLN_TH1D), -1, 0, 3, 1, 1, 0, 
"d - - 0 - min d - - 0 - max "
"C - - 10 - name", (char*)NULL, (void*) NULL, 0);
   // automatic copy constructor
   G__memfunc_setup("BCH1D", 322, G__BCH1DDict_214_0_26, (int) ('i'), G__get_linked_tagnum(&G__BCH1DDictLN_BCH1D), -1, 0, 1, 1, 1, 0, "u 'BCH1D' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~BCH1D", 448, G__BCH1DDict_214_0_27, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 0);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__BCH1DDict_214_0_28, (int) ('u'), G__get_linked_tagnum(&G__BCH1DDictLN_BCH1D), -1, 1, 1, 1, 1, 0, "u 'BCH1D' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncBCH1DDict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {
}

static void G__cpp_setup_global2() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalBCH1DDict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
  G__cpp_setup_global2();
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

extern "C" void G__cpp_setup_funcBCH1DDict() {
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
G__linked_taginfo G__BCH1DDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR = { "vector<double,allocator<double> >" , 99 , -1 };
G__linked_taginfo G__BCH1DDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__BCH1DDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCH1DDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__BCH1DDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCH1DDictLN_TVectorTlEfloatgR = { "TVectorT<float>" , 99 , -1 };
G__linked_taginfo G__BCH1DDictLN_TVectorTlEdoublegR = { "TVectorT<double>" , 99 , -1 };
G__linked_taginfo G__BCH1DDictLN_TH1D = { "TH1D" , 99 , -1 };
G__linked_taginfo G__BCH1DDictLN_BCH1D = { "BCH1D" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableBCH1DDict() {
  G__BCH1DDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR.tagnum = -1 ;
  G__BCH1DDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__BCH1DDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCH1DDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__BCH1DDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCH1DDictLN_TVectorTlEfloatgR.tagnum = -1 ;
  G__BCH1DDictLN_TVectorTlEdoublegR.tagnum = -1 ;
  G__BCH1DDictLN_TH1D.tagnum = -1 ;
  G__BCH1DDictLN_BCH1D.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableBCH1DDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__BCH1DDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR);
   G__get_linked_tagnum_fwd(&G__BCH1DDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__BCH1DDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCH1DDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCH1DDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCH1DDictLN_TVectorTlEfloatgR);
   G__get_linked_tagnum_fwd(&G__BCH1DDictLN_TVectorTlEdoublegR);
   G__get_linked_tagnum_fwd(&G__BCH1DDictLN_TH1D);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__BCH1DDictLN_BCH1D),sizeof(BCH1D),-1,34048,(char*)NULL,G__setup_memvarBCH1D,G__setup_memfuncBCH1D);
}
extern "C" void G__cpp_setupBCH1DDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupBCH1DDict()");
  G__set_cpp_environmentBCH1DDict();
  G__cpp_setup_tagtableBCH1DDict();

  G__cpp_setup_inheritanceBCH1DDict();

  G__cpp_setup_typetableBCH1DDict();

  G__cpp_setup_memvarBCH1DDict();

  G__cpp_setup_memfuncBCH1DDict();
  G__cpp_setup_globalBCH1DDict();
  G__cpp_setup_funcBCH1DDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncBCH1DDict();
  return;
}
class G__cpp_setup_initBCH1DDict {
  public:
    G__cpp_setup_initBCH1DDict() { G__add_setup_func("BCH1DDict",(G__incsetup)(&G__cpp_setupBCH1DDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initBCH1DDict() { G__remove_setup_func("BCH1DDict"); }
};
G__cpp_setup_initBCH1DDict G__cpp_setup_initializerBCH1DDict;

