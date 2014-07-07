#include <hxcpp.h>

#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Mechanics
#include <Mechanics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Mechanics_obj::__construct()
{
	return null();
}

//Mechanics_obj::~Mechanics_obj() { }

Dynamic Mechanics_obj::__CreateEmpty() { return  new Mechanics_obj; }
hx::ObjectPtr< Mechanics_obj > Mechanics_obj::__new()
{  hx::ObjectPtr< Mechanics_obj > result = new Mechanics_obj();
	result->__construct();
	return result;}

Dynamic Mechanics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mechanics_obj > result = new Mechanics_obj();
	result->__construct();
	return result;}

bool Mechanics_obj::collide( ::GameObject c1,::GameObject c2){
	HX_STACK_FRAME("Mechanics","collide",0x8a2c675f,"Mechanics.collide","Mechanics.hx",6,0x7fd4aecf)
	HX_STACK_ARG(c1,"c1")
	HX_STACK_ARG(c2,"c2")
	HX_STACK_LINE(8)
	Float distX = (c1->x - c2->x);		HX_STACK_VAR(distX,"distX");
	HX_STACK_LINE(9)
	Float distY = (c1->y - c2->y);		HX_STACK_VAR(distY,"distY");
	HX_STACK_LINE(11)
	Float dist = ::Math_obj::sqrt(((distX * distX) + (distY * distY)));		HX_STACK_VAR(dist,"dist");
	HX_STACK_LINE(12)
	Float _g = c1->getRadius();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(12)
	Float _g1 = c2->getRadius();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(12)
	Float _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(12)
	return (dist <= _g2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mechanics_obj,collide,return )


Mechanics_obj::Mechanics_obj()
{
}

Dynamic Mechanics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mechanics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Mechanics_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("collide"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mechanics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mechanics_obj::__mClass,"__mClass");
};

#endif

Class Mechanics_obj::__mClass;

void Mechanics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Mechanics"), hx::TCanCast< Mechanics_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Mechanics_obj::__boot()
{
}

