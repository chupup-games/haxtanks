#include <hxcpp.h>

#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Tank
#include <Tank.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void Tank_obj::__construct(Float x,Float y,Float rotation,Float radius)
{
HX_STACK_FRAME("Tank","new",0x3c0cd4fc,"Tank.new","Tank.hx",3,0x0a99ddf4)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(rotation,"rotation")
HX_STACK_ARG(radius,"radius")
{
	HX_STACK_LINE(3)
	super::__construct(x,y,rotation,radius);
}
;
	return null();
}

//Tank_obj::~Tank_obj() { }

Dynamic Tank_obj::__CreateEmpty() { return  new Tank_obj; }
hx::ObjectPtr< Tank_obj > Tank_obj::__new(Float x,Float y,Float rotation,Float radius)
{  hx::ObjectPtr< Tank_obj > result = new Tank_obj();
	result->__construct(x,y,rotation,radius);
	return result;}

Dynamic Tank_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tank_obj > result = new Tank_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Tank_obj::shoot( ){
{
		HX_STACK_FRAME("Tank","shoot",0xdb9fe57b,"Tank.shoot","Tank.hx",7,0x0a99ddf4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7)
		::haxe::Log_obj::trace(HX_CSTRING("Shooting.."),hx::SourceInfo(HX_CSTRING("Tank.hx"),7,HX_CSTRING("Tank"),HX_CSTRING("shoot")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tank_obj,shoot,(void))


Tank_obj::Tank_obj()
{
}

Dynamic Tank_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tank_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Tank_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("shoot"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tank_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tank_obj::__mClass,"__mClass");
};

#endif

Class Tank_obj::__mClass;

void Tank_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Tank"), hx::TCanCast< Tank_obj> ,sStaticFields,sMemberFields,
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

void Tank_obj::__boot()
{
}

