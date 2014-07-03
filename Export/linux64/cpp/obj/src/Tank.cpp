#include <hxcpp.h>

#ifndef INCLUDED_Tank
#include <Tank.h>
#endif

Void Tank_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("Tank","new",0x3c0cd4fc,"Tank.new","Tank.hx",12,0x0a99ddf4)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(14)
	this->x = x;
	HX_STACK_LINE(15)
	this->y = y;
	HX_STACK_LINE(17)
	this->rotation = (int)0;
	HX_STACK_LINE(19)
	this->speed = (int)25;
}
;
	return null();
}

//Tank_obj::~Tank_obj() { }

Dynamic Tank_obj::__CreateEmpty() { return  new Tank_obj; }
hx::ObjectPtr< Tank_obj > Tank_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Tank_obj > result = new Tank_obj();
	result->__construct(x,y);
	return result;}

Dynamic Tank_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tank_obj > result = new Tank_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Tank_obj::Tank_obj()
{
}

Dynamic Tank_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tank_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tank_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("speed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Tank_obj,id),HX_CSTRING("id")},
	{hx::fsFloat,(int)offsetof(Tank_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Tank_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Tank_obj,rotation),HX_CSTRING("rotation")},
	{hx::fsInt,(int)offsetof(Tank_obj,speed),HX_CSTRING("speed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("rotation"),
	HX_CSTRING("speed"),
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

