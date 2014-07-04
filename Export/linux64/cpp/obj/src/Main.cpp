#include <hxcpp.h>

#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Mechanics
#include <Mechanics.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Tank
#include <Tank.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",40,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	super::__construct();
	HX_STACK_LINE(44)
	this->create();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::create( ){
{
		HX_STACK_FRAME("Main","create",0xacb98671,"Main.create","Main.hx",48,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		int _g = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		int stageCenterX = ::Std_obj::_int(_g1);		HX_STACK_VAR(stageCenterX,"stageCenterX");
		HX_STACK_LINE(51)
		int _g2 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(51)
		Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(51)
		int stageCenterY = ::Std_obj::_int(_g3);		HX_STACK_VAR(stageCenterY,"stageCenterY");
		HX_STACK_LINE(53)
		this->resetT1X = (stageCenterX - (int)250);
		HX_STACK_LINE(54)
		this->resetT1Y = stageCenterY;
		HX_STACK_LINE(55)
		this->resetT1R = (int)0;
		HX_STACK_LINE(57)
		this->resetT2X = (stageCenterX + (int)250);
		HX_STACK_LINE(58)
		this->resetT2Y = stageCenterY;
		HX_STACK_LINE(59)
		this->resetT2R = (int)0;
		HX_STACK_LINE(62)
		::openfl::display::BitmapData bitmapData = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/tanks.png"),null());		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(63)
		::openfl::display::Tilesheet _g4 = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(63)
		this->tilesheet = _g4;
		HX_STACK_LINE(66)
		::Tank _g5 = ::Tank_obj::__new(this->resetT1X,this->resetT1Y,this->resetT1R,(int)16);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(66)
		this->t1 = _g5;
		HX_STACK_LINE(67)
		::openfl::geom::Rectangle _g6 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)16,(int)32,(int)32);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(67)
		::openfl::geom::Point _g7 = ::openfl::geom::Point_obj::__new((int)16,(int)16);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(67)
		int _g8 = this->tilesheet->addTileRect(_g6,_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(67)
		this->t1->id = _g8;
		HX_STACK_LINE(68)
		this->t1->speed = (int)25;
		HX_STACK_LINE(69)
		::Tank _g9 = ::Tank_obj::__new(this->resetT2X,this->resetT2Y,this->resetT2R,(int)16);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(69)
		this->t2 = _g9;
		HX_STACK_LINE(70)
		::openfl::geom::Rectangle _g10 = ::openfl::geom::Rectangle_obj::__new((int)32,(int)16,(int)32,(int)32);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(70)
		::openfl::geom::Point _g11 = ::openfl::geom::Point_obj::__new((int)16,(int)16);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(70)
		int _g12 = this->tilesheet->addTileRect(_g10,_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(70)
		this->t2->id = _g12;
		HX_STACK_LINE(71)
		this->t2->speed = (int)25;
		HX_STACK_LINE(73)
		this->get_stage()->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_DOWN,this->keyDownHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(74)
		this->get_stage()->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_UP,this->keyUpHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(76)
		int _g13 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(76)
		this->previousTime = _g13;
		HX_STACK_LINE(77)
		this->get_stage()->addEventListener(::openfl::events::Event_obj::ENTER_FRAME,this->update_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,create,(void))

Void Main_obj::update( ::openfl::events::Event event){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",81,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(83)
		this->moveTank();
		HX_STACK_LINE(84)
		this->render();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,update,(void))

Void Main_obj::keyDownHandler( ::openfl::events::KeyboardEvent event){
{
		HX_STACK_FRAME("Main","keyDownHandler",0xd5fe709e,"Main.keyDownHandler","Main.hx",90,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(90)
		int _g = event->keyCode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		switch( (int)(_g)){
			case (int)38: {
				HX_STACK_LINE(92)
				this->upKey = true;
			}
			;break;
			case (int)40: {
				HX_STACK_LINE(93)
				this->downKey = true;
			}
			;break;
			case (int)37: {
				HX_STACK_LINE(94)
				this->leftKey = true;
			}
			;break;
			case (int)39: {
				HX_STACK_LINE(95)
				this->rightKey = true;
			}
			;break;
			case (int)87: {
				HX_STACK_LINE(97)
				this->w_Key = true;
			}
			;break;
			case (int)83: {
				HX_STACK_LINE(98)
				this->s_Key = true;
			}
			;break;
			case (int)65: {
				HX_STACK_LINE(99)
				this->a_Key = true;
			}
			;break;
			case (int)68: {
				HX_STACK_LINE(100)
				this->d_Key = true;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(102)
				this->reset_Key = true;
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,keyDownHandler,(void))

Void Main_obj::keyUpHandler( ::openfl::events::KeyboardEvent event){
{
		HX_STACK_FRAME("Main","keyUpHandler",0x80311245,"Main.keyUpHandler","Main.hx",110,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(110)
		int _g = event->keyCode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		switch( (int)(_g)){
			case (int)38: {
				HX_STACK_LINE(112)
				this->upKey = false;
			}
			;break;
			case (int)40: {
				HX_STACK_LINE(113)
				this->downKey = false;
			}
			;break;
			case (int)37: {
				HX_STACK_LINE(114)
				this->leftKey = false;
			}
			;break;
			case (int)39: {
				HX_STACK_LINE(115)
				this->rightKey = false;
			}
			;break;
			case (int)87: {
				HX_STACK_LINE(117)
				this->w_Key = false;
			}
			;break;
			case (int)83: {
				HX_STACK_LINE(118)
				this->s_Key = false;
			}
			;break;
			case (int)65: {
				HX_STACK_LINE(119)
				this->a_Key = false;
			}
			;break;
			case (int)68: {
				HX_STACK_LINE(120)
				this->d_Key = false;
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,keyUpHandler,(void))

Void Main_obj::moveTank( ){
{
		HX_STACK_FRAME("Main","moveTank",0x36b6cd50,"Main.moveTank","Main.hx",126,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(128)
		int currentTime = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(currentTime,"currentTime");
		HX_STACK_LINE(129)
		int deltaTime = (currentTime - this->previousTime);		HX_STACK_VAR(deltaTime,"deltaTime");
		HX_STACK_LINE(130)
		Float delta = (Float(deltaTime) / Float((int)1000));		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(131)
		this->previousTime = currentTime;
		HX_STACK_LINE(133)
		if ((this->reset_Key)){
			HX_STACK_LINE(133)
			this->resetTank();
		}
		HX_STACK_LINE(135)
		if ((this->upKey)){
			HX_STACK_LINE(136)
			hx::SubEq(this->t1->y,(this->t1->speed * delta));
			HX_STACK_LINE(137)
			this->t1->rotation = (int)0;
		}
		else{
			HX_STACK_LINE(139)
			if ((this->downKey)){
				HX_STACK_LINE(140)
				hx::AddEq(this->t1->y,(this->t1->speed * delta));
				HX_STACK_LINE(141)
				this->t1->rotation = 3.14;
			}
			else{
				HX_STACK_LINE(143)
				if ((this->leftKey)){
					HX_STACK_LINE(144)
					hx::SubEq(this->t1->x,(this->t1->speed * delta));
					HX_STACK_LINE(145)
					this->t1->rotation = 4.71;
				}
				else{
					HX_STACK_LINE(147)
					if ((this->rightKey)){
						HX_STACK_LINE(148)
						hx::AddEq(this->t1->x,(this->t1->speed * delta));
						HX_STACK_LINE(149)
						this->t1->rotation = 1.57;
					}
				}
			}
		}
		HX_STACK_LINE(152)
		if ((this->w_Key)){
			HX_STACK_LINE(153)
			hx::SubEq(this->t2->y,(this->t2->speed * delta));
			HX_STACK_LINE(154)
			this->t2->rotation = (int)0;
		}
		else{
			HX_STACK_LINE(156)
			if ((this->s_Key)){
				HX_STACK_LINE(157)
				hx::AddEq(this->t2->y,(this->t2->speed * delta));
				HX_STACK_LINE(158)
				this->t2->rotation = 3.14;
			}
			else{
				HX_STACK_LINE(160)
				if ((this->a_Key)){
					HX_STACK_LINE(161)
					hx::SubEq(this->t2->x,(this->t2->speed * delta));
					HX_STACK_LINE(162)
					this->t2->rotation = 4.71;
				}
				else{
					HX_STACK_LINE(164)
					if ((this->d_Key)){
						HX_STACK_LINE(165)
						hx::AddEq(this->t2->x,(this->t2->speed * delta));
						HX_STACK_LINE(166)
						this->t2->rotation = 1.57;
					}
				}
			}
		}
		HX_STACK_LINE(169)
		this->t1->collideWorld(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(170)
		this->t2->collideWorld(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(172)
		if ((::Mechanics_obj::collide(this->t1,this->t2))){
			HX_STACK_LINE(173)
			this->reset_Key = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,moveTank,(void))

Void Main_obj::resetTank( ){
{
		HX_STACK_FRAME("Main","resetTank",0x736bfc04,"Main.resetTank","Main.hx",177,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		this->reset_Key = false;
		HX_STACK_LINE(181)
		this->t1->x = this->resetT1X;
		HX_STACK_LINE(182)
		this->t1->y = this->resetT1Y;
		HX_STACK_LINE(183)
		this->t1->rotation = this->resetT1R;
		HX_STACK_LINE(185)
		this->t2->x = this->resetT2X;
		HX_STACK_LINE(186)
		this->t2->y = this->resetT2Y;
		HX_STACK_LINE(187)
		this->t2->rotation = this->resetT2R;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,resetTank,(void))

Void Main_obj::render( ){
{
		HX_STACK_FRAME("Main","render",0x35d38acb,"Main.render","Main.hx",191,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(193)
		this->get_graphics()->clear();
		HX_STACK_LINE(195)
		this->tankList = Array_obj< Float >::__new().Add(this->t1->x).Add(this->t1->y).Add(this->t1->id).Add(this->t1->rotation).Add(this->t2->x).Add(this->t2->y).Add(this->t2->id).Add(this->t2->rotation);
		HX_STACK_LINE(198)
		::openfl::display::Graphics _g = this->get_graphics();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(198)
		this->tilesheet->drawTiles(_g,this->tankList,false,(int)2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,render,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(tankList,"tankList");
	HX_MARK_MEMBER_NAME(t1,"t1");
	HX_MARK_MEMBER_NAME(t2,"t2");
	HX_MARK_MEMBER_NAME(resetT1X,"resetT1X");
	HX_MARK_MEMBER_NAME(resetT1Y,"resetT1Y");
	HX_MARK_MEMBER_NAME(resetT1R,"resetT1R");
	HX_MARK_MEMBER_NAME(resetT2X,"resetT2X");
	HX_MARK_MEMBER_NAME(resetT2Y,"resetT2Y");
	HX_MARK_MEMBER_NAME(resetT2R,"resetT2R");
	HX_MARK_MEMBER_NAME(upKey,"upKey");
	HX_MARK_MEMBER_NAME(downKey,"downKey");
	HX_MARK_MEMBER_NAME(leftKey,"leftKey");
	HX_MARK_MEMBER_NAME(rightKey,"rightKey");
	HX_MARK_MEMBER_NAME(w_Key,"w_Key");
	HX_MARK_MEMBER_NAME(s_Key,"s_Key");
	HX_MARK_MEMBER_NAME(a_Key,"a_Key");
	HX_MARK_MEMBER_NAME(d_Key,"d_Key");
	HX_MARK_MEMBER_NAME(reset_Key,"reset_Key");
	HX_MARK_MEMBER_NAME(previousTime,"previousTime");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	HX_VISIT_MEMBER_NAME(tankList,"tankList");
	HX_VISIT_MEMBER_NAME(t1,"t1");
	HX_VISIT_MEMBER_NAME(t2,"t2");
	HX_VISIT_MEMBER_NAME(resetT1X,"resetT1X");
	HX_VISIT_MEMBER_NAME(resetT1Y,"resetT1Y");
	HX_VISIT_MEMBER_NAME(resetT1R,"resetT1R");
	HX_VISIT_MEMBER_NAME(resetT2X,"resetT2X");
	HX_VISIT_MEMBER_NAME(resetT2Y,"resetT2Y");
	HX_VISIT_MEMBER_NAME(resetT2R,"resetT2R");
	HX_VISIT_MEMBER_NAME(upKey,"upKey");
	HX_VISIT_MEMBER_NAME(downKey,"downKey");
	HX_VISIT_MEMBER_NAME(leftKey,"leftKey");
	HX_VISIT_MEMBER_NAME(rightKey,"rightKey");
	HX_VISIT_MEMBER_NAME(w_Key,"w_Key");
	HX_VISIT_MEMBER_NAME(s_Key,"s_Key");
	HX_VISIT_MEMBER_NAME(a_Key,"a_Key");
	HX_VISIT_MEMBER_NAME(d_Key,"d_Key");
	HX_VISIT_MEMBER_NAME(reset_Key,"reset_Key");
	HX_VISIT_MEMBER_NAME(previousTime,"previousTime");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"t1") ) { return t1; }
		if (HX_FIELD_EQ(inName,"t2") ) { return t2; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"upKey") ) { return upKey; }
		if (HX_FIELD_EQ(inName,"w_Key") ) { return w_Key; }
		if (HX_FIELD_EQ(inName,"s_Key") ) { return s_Key; }
		if (HX_FIELD_EQ(inName,"a_Key") ) { return a_Key; }
		if (HX_FIELD_EQ(inName,"d_Key") ) { return d_Key; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"downKey") ) { return downKey; }
		if (HX_FIELD_EQ(inName,"leftKey") ) { return leftKey; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tankList") ) { return tankList; }
		if (HX_FIELD_EQ(inName,"resetT1X") ) { return resetT1X; }
		if (HX_FIELD_EQ(inName,"resetT1Y") ) { return resetT1Y; }
		if (HX_FIELD_EQ(inName,"resetT1R") ) { return resetT1R; }
		if (HX_FIELD_EQ(inName,"resetT2X") ) { return resetT2X; }
		if (HX_FIELD_EQ(inName,"resetT2Y") ) { return resetT2Y; }
		if (HX_FIELD_EQ(inName,"resetT2R") ) { return resetT2R; }
		if (HX_FIELD_EQ(inName,"rightKey") ) { return rightKey; }
		if (HX_FIELD_EQ(inName,"moveTank") ) { return moveTank_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return tilesheet; }
		if (HX_FIELD_EQ(inName,"reset_Key") ) { return reset_Key; }
		if (HX_FIELD_EQ(inName,"resetTank") ) { return resetTank_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { return previousTime; }
		if (HX_FIELD_EQ(inName,"keyUpHandler") ) { return keyUpHandler_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyDownHandler") ) { return keyDownHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"t1") ) { t1=inValue.Cast< ::Tank >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t2") ) { t2=inValue.Cast< ::Tank >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"upKey") ) { upKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w_Key") ) { w_Key=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s_Key") ) { s_Key=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a_Key") ) { a_Key=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d_Key") ) { d_Key=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"downKey") ) { downKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftKey") ) { leftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tankList") ) { tankList=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetT1X") ) { resetT1X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetT1Y") ) { resetT1Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetT1R") ) { resetT1R=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetT2X") ) { resetT2X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetT2Y") ) { resetT2Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetT2R") ) { resetT2R=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightKey") ) { rightKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::openfl::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reset_Key") ) { reset_Key=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { previousTime=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tilesheet"));
	outFields->push(HX_CSTRING("tankList"));
	outFields->push(HX_CSTRING("t1"));
	outFields->push(HX_CSTRING("t2"));
	outFields->push(HX_CSTRING("resetT1X"));
	outFields->push(HX_CSTRING("resetT1Y"));
	outFields->push(HX_CSTRING("resetT1R"));
	outFields->push(HX_CSTRING("resetT2X"));
	outFields->push(HX_CSTRING("resetT2Y"));
	outFields->push(HX_CSTRING("resetT2R"));
	outFields->push(HX_CSTRING("upKey"));
	outFields->push(HX_CSTRING("downKey"));
	outFields->push(HX_CSTRING("leftKey"));
	outFields->push(HX_CSTRING("rightKey"));
	outFields->push(HX_CSTRING("w_Key"));
	outFields->push(HX_CSTRING("s_Key"));
	outFields->push(HX_CSTRING("a_Key"));
	outFields->push(HX_CSTRING("d_Key"));
	outFields->push(HX_CSTRING("reset_Key"));
	outFields->push(HX_CSTRING("previousTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Tilesheet*/ ,(int)offsetof(Main_obj,tilesheet),HX_CSTRING("tilesheet")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Main_obj,tankList),HX_CSTRING("tankList")},
	{hx::fsObject /*::Tank*/ ,(int)offsetof(Main_obj,t1),HX_CSTRING("t1")},
	{hx::fsObject /*::Tank*/ ,(int)offsetof(Main_obj,t2),HX_CSTRING("t2")},
	{hx::fsInt,(int)offsetof(Main_obj,resetT1X),HX_CSTRING("resetT1X")},
	{hx::fsInt,(int)offsetof(Main_obj,resetT1Y),HX_CSTRING("resetT1Y")},
	{hx::fsFloat,(int)offsetof(Main_obj,resetT1R),HX_CSTRING("resetT1R")},
	{hx::fsInt,(int)offsetof(Main_obj,resetT2X),HX_CSTRING("resetT2X")},
	{hx::fsInt,(int)offsetof(Main_obj,resetT2Y),HX_CSTRING("resetT2Y")},
	{hx::fsFloat,(int)offsetof(Main_obj,resetT2R),HX_CSTRING("resetT2R")},
	{hx::fsBool,(int)offsetof(Main_obj,upKey),HX_CSTRING("upKey")},
	{hx::fsBool,(int)offsetof(Main_obj,downKey),HX_CSTRING("downKey")},
	{hx::fsBool,(int)offsetof(Main_obj,leftKey),HX_CSTRING("leftKey")},
	{hx::fsBool,(int)offsetof(Main_obj,rightKey),HX_CSTRING("rightKey")},
	{hx::fsBool,(int)offsetof(Main_obj,w_Key),HX_CSTRING("w_Key")},
	{hx::fsBool,(int)offsetof(Main_obj,s_Key),HX_CSTRING("s_Key")},
	{hx::fsBool,(int)offsetof(Main_obj,a_Key),HX_CSTRING("a_Key")},
	{hx::fsBool,(int)offsetof(Main_obj,d_Key),HX_CSTRING("d_Key")},
	{hx::fsBool,(int)offsetof(Main_obj,reset_Key),HX_CSTRING("reset_Key")},
	{hx::fsInt,(int)offsetof(Main_obj,previousTime),HX_CSTRING("previousTime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tilesheet"),
	HX_CSTRING("tankList"),
	HX_CSTRING("t1"),
	HX_CSTRING("t2"),
	HX_CSTRING("resetT1X"),
	HX_CSTRING("resetT1Y"),
	HX_CSTRING("resetT1R"),
	HX_CSTRING("resetT2X"),
	HX_CSTRING("resetT2Y"),
	HX_CSTRING("resetT2R"),
	HX_CSTRING("upKey"),
	HX_CSTRING("downKey"),
	HX_CSTRING("leftKey"),
	HX_CSTRING("rightKey"),
	HX_CSTRING("w_Key"),
	HX_CSTRING("s_Key"),
	HX_CSTRING("a_Key"),
	HX_CSTRING("d_Key"),
	HX_CSTRING("reset_Key"),
	HX_CSTRING("previousTime"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	HX_CSTRING("keyDownHandler"),
	HX_CSTRING("keyUpHandler"),
	HX_CSTRING("moveTank"),
	HX_CSTRING("resetTank"),
	HX_CSTRING("render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

