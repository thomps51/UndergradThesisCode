//
// File generated by /home/osg/manageTier3SW/ATLASLocalRootBase/i686/root/5.34.07-i686-slc5-gcc4.3/bin/rootcint at Tue Jul  2 14:21:22 2013

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME BCSummaryPriorModelDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "BCSummaryPriorModelDict.h"

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
   void BCSummaryPriorModel_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void BCSummaryPriorModel_Dictionary();
   static void *new_BCSummaryPriorModel(void *p = 0);
   static void *newArray_BCSummaryPriorModel(Long_t size, void *p);
   static void delete_BCSummaryPriorModel(void *p);
   static void deleteArray_BCSummaryPriorModel(void *p);
   static void destruct_BCSummaryPriorModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCSummaryPriorModel*)
   {
      ::BCSummaryPriorModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCSummaryPriorModel),0);
      static ::ROOT::TGenericClassInfo 
         instance("BCSummaryPriorModel", "./../BAT/BCSummaryPriorModel.h", 29,
                  typeid(::BCSummaryPriorModel), DefineBehavior(ptr, ptr),
                  0, &BCSummaryPriorModel_Dictionary, isa_proxy, 0,
                  sizeof(::BCSummaryPriorModel) );
      instance.SetNew(&new_BCSummaryPriorModel);
      instance.SetNewArray(&newArray_BCSummaryPriorModel);
      instance.SetDelete(&delete_BCSummaryPriorModel);
      instance.SetDeleteArray(&deleteArray_BCSummaryPriorModel);
      instance.SetDestructor(&destruct_BCSummaryPriorModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCSummaryPriorModel*)
   {
      return GenerateInitInstanceLocal((::BCSummaryPriorModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BCSummaryPriorModel*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void BCSummaryPriorModel_Dictionary() {
      ::ROOT::GenerateInitInstanceLocal((const ::BCSummaryPriorModel*)0x0)->GetClass();
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCSummaryPriorModel(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::BCSummaryPriorModel : new ::BCSummaryPriorModel;
   }
   static void *newArray_BCSummaryPriorModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::BCSummaryPriorModel[nElements] : new ::BCSummaryPriorModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCSummaryPriorModel(void *p) {
      delete ((::BCSummaryPriorModel*)p);
   }
   static void deleteArray_BCSummaryPriorModel(void *p) {
      delete [] ((::BCSummaryPriorModel*)p);
   }
   static void destruct_BCSummaryPriorModel(void *p) {
      typedef ::BCSummaryPriorModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCSummaryPriorModel

/********************************************************
* BCSummaryPriorModelDict.cxx
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

extern "C" void G__cpp_reset_tagtableBCSummaryPriorModelDict();

extern "C" void G__set_cpp_environmentBCSummaryPriorModelDict() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("../BAT/BCSummaryPriorModel.h");
  G__cpp_reset_tagtableBCSummaryPriorModelDict();
}
#include <new>
extern "C" int G__cpp_dllrevBCSummaryPriorModelDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* BCSummaryPriorModel */
static int G__BCSummaryPriorModelDict_224_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   BCSummaryPriorModel* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new BCSummaryPriorModel[n];
     } else {
       p = new((void*) gvp) BCSummaryPriorModel[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new BCSummaryPriorModel;
     } else {
       p = new((void*) gvp) BCSummaryPriorModel;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCSummaryPriorModelDict_224_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   BCSummaryPriorModel* p = NULL;
   char* gvp = (char*) G__getgvp();
   //m: 1
   if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
     p = new BCSummaryPriorModel((const char*) G__int(libp->para[0]));
   } else {
     p = new((void*) gvp) BCSummaryPriorModel((const char*) G__int(libp->para[0]));
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__BCSummaryPriorModelDict_224_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((BCSummaryPriorModel*) G__getstructoffset())->SetModel((BCModel*) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__BCSummaryPriorModelDict_224_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   BCSummaryPriorModel* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new BCSummaryPriorModel(*(BCSummaryPriorModel*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef BCSummaryPriorModel G__TBCSummaryPriorModel;
static int G__BCSummaryPriorModelDict_224_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
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
       delete[] (BCSummaryPriorModel*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((BCSummaryPriorModel*) (soff+(sizeof(BCSummaryPriorModel)*i)))->~G__TBCSummaryPriorModel();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (BCSummaryPriorModel*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((BCSummaryPriorModel*) (soff))->~G__TBCSummaryPriorModel();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__BCSummaryPriorModelDict_224_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   BCSummaryPriorModel* dest = (BCSummaryPriorModel*) G__getstructoffset();
   *dest = *(BCSummaryPriorModel*) libp->para[0].ref;
   const BCSummaryPriorModel& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* BCSummaryPriorModel */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncBCSummaryPriorModelDict {
 public:
  G__Sizep2memfuncBCSummaryPriorModelDict(): p(&G__Sizep2memfuncBCSummaryPriorModelDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncBCSummaryPriorModelDict::*p)();
};

size_t G__get_sizep2memfuncBCSummaryPriorModelDict()
{
  G__Sizep2memfuncBCSummaryPriorModelDict a;
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
extern "C" void G__cpp_setup_inheritanceBCSummaryPriorModelDict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel))) {
     BCSummaryPriorModel *G__Lderived;
     G__Lderived=(BCSummaryPriorModel*)0x1000;
     {
       BCModel *G__Lpbase=(BCModel*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel),G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCModel),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       BCIntegrate *G__Lpbase=(BCIntegrate*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel),G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCIntegrate),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       BCEngineMCMC *G__Lpbase=(BCEngineMCMC*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel),G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCEngineMCMC),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableBCSummaryPriorModelDict() {

   /* Setting up typedef entry */
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<int>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEintcOallocatorlEintgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEintcOallocatorlEintgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEintcOallocatorlEintgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<std::vector<double> >",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<vector<double> >",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<vector<double,allocator<double> > >",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TTree*>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETTreemUcOallocatorlETTreemUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETTreemUcOallocatorlETTreemUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETTreemUcOallocatorlETTreemUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETTreemUcOallocatorlETTreemUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETTreemUcOallocatorlETTreemUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TH1D*>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETH1DmUcOallocatorlETH1DmUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETH1DmUcOallocatorlETH1DmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETH1DmUcOallocatorlETH1DmUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETH1DmUcOallocatorlETH1DmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETH1DmUcOallocatorlETH1DmUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TH2D*>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETH2DmUcOallocatorlETH2DmUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETH2DmUcOallocatorlETH2DmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETH2DmUcOallocatorlETH2DmUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETH2DmUcOallocatorlETH2DmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETH2DmUcOallocatorlETH2DmUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<BCParameter*>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEBCParametermUcOallocatorlEBCParametermUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEBCParametermUcOallocatorlEBCParametermUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEBCParametermUcOallocatorlEBCParametermUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEBCParametermUcOallocatorlEBCParametermUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEBCParametermUcOallocatorlEBCParametermUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TNamed*>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETNamedmUcOallocatorlETNamedmUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETNamedmUcOallocatorlETNamedmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETNamedmUcOallocatorlETNamedmUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETNamedmUcOallocatorlETNamedmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlETNamedmUcOallocatorlETNamedmUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<BCModel*>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEBCModelmUcOallocatorlEBCModelmUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEBCModelmUcOallocatorlEBCModelmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEBCModelmUcOallocatorlEBCModelmUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEBCModelmUcOallocatorlEBCModelmUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_vectorlEBCModelmUcOallocatorlEBCModelmUgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* BCSummaryPriorModel */
static void G__setup_memvarBCSummaryPriorModel(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel));
   { BCSummaryPriorModel *p; p=(BCSummaryPriorModel*)0x1000; if (p) { }
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCModel),-1,-1,4,"fTestModel=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarBCSummaryPriorModelDict() {
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
static void G__setup_memfuncBCSummaryPriorModel(void) {
   /* BCSummaryPriorModel */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel));
   G__memfunc_setup("BCSummaryPriorModel",1904,G__BCSummaryPriorModelDict_224_0_1, 105, G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("BCSummaryPriorModel",1904,G__BCSummaryPriorModelDict_224_0_2, 105, G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel), -1, 0, 1, 1, 1, 0, "C - - 10 - name", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("SetModel",797,G__BCSummaryPriorModelDict_224_0_3, 121, -1, -1, 0, 1, 1, 1, 0, "U 'BCModel' - 0 - model", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("LogAPrioriProbability",2137,(G__InterfaceMethod) NULL,100, -1, -1, 0, 1, 1, 1, 0, "u 'vector<double,allocator<double> >' 'vector<double>' 11 - parameters", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("LogLikelihood",1318,(G__InterfaceMethod) NULL,100, -1, -1, 0, 1, 1, 1, 0, "u 'vector<double,allocator<double> >' 'vector<double>' 11 - parameters", (char*)NULL, (void*) NULL, 1);
   // automatic copy constructor
   G__memfunc_setup("BCSummaryPriorModel", 1904, G__BCSummaryPriorModelDict_224_0_6, (int) ('i'), G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel), -1, 0, 1, 1, 1, 0, "u 'BCSummaryPriorModel' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~BCSummaryPriorModel", 2030, G__BCSummaryPriorModelDict_224_0_7, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 1);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__BCSummaryPriorModelDict_224_0_8, (int) ('u'), G__get_linked_tagnum(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel), -1, 1, 1, 1, 1, 0, "u 'BCSummaryPriorModel' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncBCSummaryPriorModelDict() {
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
extern "C" void G__cpp_setup_globalBCSummaryPriorModelDict() {
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
}

static void G__cpp_setup_func14() {
}

static void G__cpp_setup_func15() {
}

static void G__cpp_setup_func16() {
}

static void G__cpp_setup_func17() {
}

static void G__cpp_setup_func18() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcBCSummaryPriorModelDict() {
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
  G__cpp_setup_func14();
  G__cpp_setup_func15();
  G__cpp_setup_func16();
  G__cpp_setup_func17();
  G__cpp_setup_func18();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__BCSummaryPriorModelDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR = { "vector<double,allocator<double> >" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_BCEngineMCMC = { "BCEngineMCMC" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_vectorlEintcOallocatorlEintgRsPgR = { "vector<int,allocator<int> >" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<int,allocator<int> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_vectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgR = { "vector<vector<double,allocator<double> >,allocator<vector<double,allocator<double> > > >" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<vector<double,allocator<double> >,allocator<vector<double,allocator<double> > > >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_vectorlETTreemUcOallocatorlETTreemUgRsPgR = { "vector<TTree*,allocator<TTree*> >" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETTreemUcOallocatorlETTreemUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TTree*,allocator<TTree*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_vectorlETH1DmUcOallocatorlETH1DmUgRsPgR = { "vector<TH1D*,allocator<TH1D*> >" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETH1DmUcOallocatorlETH1DmUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TH1D*,allocator<TH1D*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_vectorlETH2DmUcOallocatorlETH2DmUgRsPgR = { "vector<TH2D*,allocator<TH2D*> >" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETH2DmUcOallocatorlETH2DmUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TH2D*,allocator<TH2D*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_vectorlEBCParametermUcOallocatorlEBCParametermUgRsPgR = { "vector<BCParameter*,allocator<BCParameter*> >" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEBCParametermUcOallocatorlEBCParametermUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<BCParameter*,allocator<BCParameter*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_BCIntegrate = { "BCIntegrate" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_BCModel = { "BCModel" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_vectorlETNamedmUcOallocatorlETNamedmUgRsPgR = { "vector<TNamed*,allocator<TNamed*> >" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETNamedmUcOallocatorlETNamedmUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TNamed*,allocator<TNamed*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_vectorlEBCModelmUcOallocatorlEBCModelmUgRsPgR = { "vector<BCModel*,allocator<BCModel*> >" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEBCModelmUcOallocatorlEBCModelmUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<BCModel*,allocator<BCModel*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__BCSummaryPriorModelDictLN_BCSummaryPriorModel = { "BCSummaryPriorModel" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableBCSummaryPriorModelDict() {
  G__BCSummaryPriorModelDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_BCEngineMCMC.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_vectorlEintcOallocatorlEintgRsPgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_vectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_vectorlETTreemUcOallocatorlETTreemUgRsPgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETTreemUcOallocatorlETTreemUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_vectorlETH1DmUcOallocatorlETH1DmUgRsPgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETH1DmUcOallocatorlETH1DmUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_vectorlETH2DmUcOallocatorlETH2DmUgRsPgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETH2DmUcOallocatorlETH2DmUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_vectorlEBCParametermUcOallocatorlEBCParametermUgRsPgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEBCParametermUcOallocatorlEBCParametermUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_BCIntegrate.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_BCModel.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_vectorlETNamedmUcOallocatorlETNamedmUgRsPgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETNamedmUcOallocatorlETNamedmUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_vectorlEBCModelmUcOallocatorlEBCModelmUgRsPgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEBCModelmUcOallocatorlEBCModelmUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__BCSummaryPriorModelDictLN_BCSummaryPriorModel.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableBCSummaryPriorModelDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_BCEngineMCMC);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_vectorlEintcOallocatorlEintgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_vectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_vectorlETTreemUcOallocatorlETTreemUgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETTreemUcOallocatorlETTreemUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_vectorlETH1DmUcOallocatorlETH1DmUgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETH1DmUcOallocatorlETH1DmUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_vectorlETH2DmUcOallocatorlETH2DmUgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETH2DmUcOallocatorlETH2DmUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_vectorlEBCParametermUcOallocatorlEBCParametermUgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEBCParametermUcOallocatorlEBCParametermUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_BCIntegrate);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_BCModel);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_vectorlETNamedmUcOallocatorlETNamedmUgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlETNamedmUcOallocatorlETNamedmUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_vectorlEBCModelmUcOallocatorlEBCModelmUgRsPgR);
   G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_reverse_iteratorlEvectorlEBCModelmUcOallocatorlEBCModelmUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__BCSummaryPriorModelDictLN_BCSummaryPriorModel),sizeof(BCSummaryPriorModel),-1,34048,(char*)NULL,G__setup_memvarBCSummaryPriorModel,G__setup_memfuncBCSummaryPriorModel);
}
extern "C" void G__cpp_setupBCSummaryPriorModelDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupBCSummaryPriorModelDict()");
  G__set_cpp_environmentBCSummaryPriorModelDict();
  G__cpp_setup_tagtableBCSummaryPriorModelDict();

  G__cpp_setup_inheritanceBCSummaryPriorModelDict();

  G__cpp_setup_typetableBCSummaryPriorModelDict();

  G__cpp_setup_memvarBCSummaryPriorModelDict();

  G__cpp_setup_memfuncBCSummaryPriorModelDict();
  G__cpp_setup_globalBCSummaryPriorModelDict();
  G__cpp_setup_funcBCSummaryPriorModelDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncBCSummaryPriorModelDict();
  return;
}
class G__cpp_setup_initBCSummaryPriorModelDict {
  public:
    G__cpp_setup_initBCSummaryPriorModelDict() { G__add_setup_func("BCSummaryPriorModelDict",(G__incsetup)(&G__cpp_setupBCSummaryPriorModelDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initBCSummaryPriorModelDict() { G__remove_setup_func("BCSummaryPriorModelDict"); }
};
G__cpp_setup_initBCSummaryPriorModelDict G__cpp_setup_initializerBCSummaryPriorModelDict;

