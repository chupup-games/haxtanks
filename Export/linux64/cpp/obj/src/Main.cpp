#include <hxcpp.h>

#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
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
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",9,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->t2Fired = false;
	HX_STACK_LINE(22)
	this->t1Fired = false;
	HX_STACK_LINE(15)
	this->DIR_LEFT = 4.71;
	HX_STACK_LINE(14)
	this->DIR_DOWN = 3.14;
	HX_STACK_LINE(13)
	this->DIR_RIGHT = 1.57;
	HX_STACK_LINE(12)
	this->DIR_UP = (int)0;
	HX_STACK_LINE(52)
	super::__construct();
	HX_STACK_LINE(54)
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
		HX_STACK_FRAME("Main","create",0xacb98671,"Main.create","Main.hx",58,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		int _g = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		int stageCenterX = ::Std_obj::_int(_g1);		HX_STACK_VAR(stageCenterX,"stageCenterX");
		HX_STACK_LINE(61)
		int _g2 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(61)
		Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(61)
		int stageCenterY = ::Std_obj::_int(_g3);		HX_STACK_VAR(stageCenterY,"stageCenterY");
		HX_STACK_LINE(64)
		::openfl::display::BitmapData bitmapData = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/tanks.png"),null());		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(65)
		::openfl::display::Tilesheet _g4 = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(65)
		this->tilesheet = _g4;
		HX_STACK_LINE(68)
		::Tank _g5 = ::Tank_obj::__new((stageCenterX - (int)250),stageCenterY,(int)0,(int)16);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(68)
		this->t1 = _g5;
		HX_STACK_LINE(69)
		::openfl::geom::Rectangle _g6 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)16,(int)32,(int)32);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(69)
		::openfl::geom::Point _g7 = ::openfl::geom::Point_obj::__new((int)16,(int)16);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(69)
		int _g8 = this->tilesheet->addTileRect(_g6,_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(69)
		this->t1->id = _g8;
		HX_STACK_LINE(70)
		this->t1->speed = (int)25;
		HX_STACK_LINE(71)
		::Tank _g9 = ::Tank_obj::__new((stageCenterX + (int)250),stageCenterY,(int)0,(int)16);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(71)
		this->t2 = _g9;
		HX_STACK_LINE(72)
		::openfl::geom::Rectangle _g10 = ::openfl::geom::Rectangle_obj::__new((int)32,(int)16,(int)32,(int)32);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(72)
		::openfl::geom::Point _g11 = ::openfl::geom::Point_obj::__new((int)16,(int)16);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(72)
		int _g12 = this->tilesheet->addTileRect(_g10,_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(72)
		this->t2->id = _g12;
		HX_STACK_LINE(73)
		this->t2->speed = (int)25;
		HX_STACK_LINE(76)
		::openfl::geom::Rectangle _g13 = ::openfl::geom::Rectangle_obj::__new((int)32,(int)0,(int)2,(int)2);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(76)
		int _g14 = this->tilesheet->addTileRect(_g13,null());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(76)
		this->bulletGreen = _g14;
		HX_STACK_LINE(77)
		::openfl::geom::Rectangle _g15 = ::openfl::geom::Rectangle_obj::__new((int)34,(int)0,(int)2,(int)2);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(77)
		int _g16 = this->tilesheet->addTileRect(_g15,null());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(77)
		this->bulletRed = _g16;
		HX_STACK_LINE(79)
		Array< ::Dynamic > _g17 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(79)
		this->bullets = _g17;
		HX_STACK_LINE(80)
		Array< Float > _g18 = Array_obj< Float >::__new();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(80)
		this->bulletList = _g18;
		HX_STACK_LINE(82)
		this->get_stage()->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_DOWN,this->keyDownHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(83)
		this->get_stage()->addEventListener(::openfl::events::KeyboardEvent_obj::KEY_UP,this->keyUpHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(85)
		int _g19 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(85)
		this->previousTime = _g19;
		HX_STACK_LINE(86)
		this->get_stage()->addEventListener(::openfl::events::Event_obj::ENTER_FRAME,this->update_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,create,(void))

Void Main_obj::update( ::openfl::events::Event event){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",90,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(92)
		this->moveTank();
		HX_STACK_LINE(93)
		this->shooting();
		HX_STACK_LINE(94)
		this->render();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,update,(void))

Void Main_obj::render( ){
{
		HX_STACK_FRAME("Main","render",0x35d38acb,"Main.render","Main.hx",98,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		this->get_graphics()->clear();
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			Array< ::Dynamic > _g1 = this->bullets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(103)
			while((true)){
				HX_STACK_LINE(103)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(103)
					break;
				}
				HX_STACK_LINE(103)
				Array< Float > b = _g1->__get(_g).StaticCast< Array< Float > >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(103)
				++(_g);
				HX_STACK_LINE(104)
				::openfl::display::Graphics _g2 = this->get_graphics();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(104)
				this->tilesheet->drawTiles(_g2,b,null(),null(),null());
			}
		}
		HX_STACK_LINE(107)
		this->tankList = Array_obj< Float >::__new().Add(this->t1->x).Add(this->t1->y).Add(this->t1->id).Add(this->t1->rotation).Add(this->t2->x).Add(this->t2->y).Add(this->t2->id).Add(this->t2->rotation);
		HX_STACK_LINE(111)
		::openfl::display::Graphics _g1 = this->get_graphics();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(111)
		this->tilesheet->drawTiles(_g1,this->tankList,false,(int)2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,render,(void))

Void Main_obj::keyDownHandler( ::openfl::events::KeyboardEvent event){
{
		HX_STACK_FRAME("Main","keyDownHandler",0xd5fe709e,"Main.keyDownHandler","Main.hx",117,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(117)
		int _g = event->keyCode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		switch( (int)(_g)){
			case (int)38: {
				HX_STACK_LINE(119)
				this->upKey = true;
			}
			;break;
			case (int)40: {
				HX_STACK_LINE(120)
				this->downKey = true;
			}
			;break;
			case (int)37: {
				HX_STACK_LINE(121)
				this->leftKey = true;
			}
			;break;
			case (int)39: {
				HX_STACK_LINE(122)
				this->rightKey = true;
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(123)
				this->controlKey = true;
			}
			;break;
			case (int)87: {
				HX_STACK_LINE(125)
				this->w_Key = true;
			}
			;break;
			case (int)83: {
				HX_STACK_LINE(126)
				this->s_Key = true;
			}
			;break;
			case (int)65: {
				HX_STACK_LINE(127)
				this->a_Key = true;
			}
			;break;
			case (int)68: {
				HX_STACK_LINE(128)
				this->d_Key = true;
			}
			;break;
			case (int)32: {
				HX_STACK_LINE(129)
				this->spaceKey = true;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(131)
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
		HX_STACK_FRAME("Main","keyUpHandler",0x80311245,"Main.keyUpHandler","Main.hx",139,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(139)
		int _g = event->keyCode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(139)
		switch( (int)(_g)){
			case (int)38: {
				HX_STACK_LINE(141)
				this->upKey = false;
			}
			;break;
			case (int)40: {
				HX_STACK_LINE(142)
				this->downKey = false;
			}
			;break;
			case (int)37: {
				HX_STACK_LINE(143)
				this->leftKey = false;
			}
			;break;
			case (int)39: {
				HX_STACK_LINE(144)
				this->rightKey = false;
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(145)
				this->controlKey = false;
				HX_STACK_LINE(146)
				this->t1Fired = false;
			}
			;break;
			case (int)87: {
				HX_STACK_LINE(148)
				this->w_Key = false;
			}
			;break;
			case (int)83: {
				HX_STACK_LINE(149)
				this->s_Key = false;
			}
			;break;
			case (int)65: {
				HX_STACK_LINE(150)
				this->a_Key = false;
			}
			;break;
			case (int)68: {
				HX_STACK_LINE(151)
				this->d_Key = false;
			}
			;break;
			case (int)32: {
				HX_STACK_LINE(152)
				this->spaceKey = false;
				HX_STACK_LINE(153)
				this->t2Fired = false;
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,keyUpHandler,(void))

Void Main_obj::resetTank( ){
{
		HX_STACK_FRAME("Main","resetTank",0x736bfc04,"Main.resetTank","Main.hx",158,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		this->reset_Key = false;
		HX_STACK_LINE(162)
		this->t1->reset();
		HX_STACK_LINE(163)
		this->t2->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,resetTank,(void))

Void Main_obj::moveTank( ){
{
		HX_STACK_FRAME("Main","moveTank",0x36b6cd50,"Main.moveTank","Main.hx",167,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		int currentTime = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(currentTime,"currentTime");
		HX_STACK_LINE(170)
		int deltaTime = (currentTime - this->previousTime);		HX_STACK_VAR(deltaTime,"deltaTime");
		HX_STACK_LINE(171)
		Float delta = (Float(deltaTime) / Float((int)1000));		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(172)
		this->previousTime = currentTime;
		HX_STACK_LINE(174)
		if ((this->reset_Key)){
			HX_STACK_LINE(174)
			this->resetTank();
		}
		HX_STACK_LINE(176)
		if ((this->upKey)){
			HX_STACK_LINE(177)
			hx::SubEq(this->t1->y,(this->t1->speed * delta));
			HX_STACK_LINE(178)
			this->t1->rotation = this->DIR_UP;
		}
		else{
			HX_STACK_LINE(180)
			if ((this->downKey)){
				HX_STACK_LINE(181)
				hx::AddEq(this->t1->y,(this->t1->speed * delta));
				HX_STACK_LINE(182)
				this->t1->rotation = this->DIR_DOWN;
			}
			else{
				HX_STACK_LINE(184)
				if ((this->leftKey)){
					HX_STACK_LINE(185)
					hx::SubEq(this->t1->x,(this->t1->speed * delta));
					HX_STACK_LINE(186)
					this->t1->rotation = this->DIR_LEFT;
				}
				else{
					HX_STACK_LINE(188)
					if ((this->rightKey)){
						HX_STACK_LINE(189)
						hx::AddEq(this->t1->x,(this->t1->speed * delta));
						HX_STACK_LINE(190)
						this->t1->rotation = this->DIR_RIGHT;
					}
				}
			}
		}
		HX_STACK_LINE(193)
		if ((this->w_Key)){
			HX_STACK_LINE(194)
			hx::SubEq(this->t2->y,(this->t2->speed * delta));
			HX_STACK_LINE(195)
			this->t2->rotation = this->DIR_UP;
		}
		else{
			HX_STACK_LINE(197)
			if ((this->s_Key)){
				HX_STACK_LINE(198)
				hx::AddEq(this->t2->y,(this->t2->speed * delta));
				HX_STACK_LINE(199)
				this->t2->rotation = this->DIR_DOWN;
			}
			else{
				HX_STACK_LINE(201)
				if ((this->a_Key)){
					HX_STACK_LINE(202)
					hx::SubEq(this->t2->x,(this->t2->speed * delta));
					HX_STACK_LINE(203)
					this->t2->rotation = this->DIR_LEFT;
				}
				else{
					HX_STACK_LINE(205)
					if ((this->d_Key)){
						HX_STACK_LINE(206)
						hx::AddEq(this->t2->x,(this->t2->speed * delta));
						HX_STACK_LINE(207)
						this->t2->rotation = this->DIR_RIGHT;
					}
				}
			}
		}
		HX_STACK_LINE(210)
		this->t1->collideWorld(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(211)
		this->t2->collideWorld(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(213)
		if ((::Mechanics_obj::collide(this->t1,this->t2))){
			HX_STACK_LINE(214)
			this->reset_Key = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,moveTank,(void))

Void Main_obj::shooting( ){
{
		HX_STACK_FRAME("Main","shooting",0x757e6718,"Main.shooting","Main.hx",218,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		if ((this->controlKey)){
			HX_STACK_LINE(221)
			if ((!(this->t1Fired))){
				HX_STACK_LINE(222)
				this->t1Fired = true;
				HX_STACK_LINE(223)
				this->createBullet(this->t1->id);
			}
		}
		HX_STACK_LINE(226)
		if ((this->spaceKey)){
			HX_STACK_LINE(227)
			if ((!(this->t2Fired))){
				HX_STACK_LINE(228)
				this->t2Fired = true;
				HX_STACK_LINE(229)
				this->createBullet(this->t2->id);
			}
		}
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			Array< ::Dynamic > _g1 = this->bullets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(235)
			while((true)){
				HX_STACK_LINE(235)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(235)
					break;
				}
				HX_STACK_LINE(235)
				Array< Float > b = _g1->__get(_g).StaticCast< Array< Float > >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(235)
				++(_g);
				HX_STACK_LINE(236)
				if (((b->__get((int)3) == this->DIR_UP))){
					HX_STACK_LINE(237)
					hx::SubEq(b[(int)1],(int)1);
				}
				else{
					HX_STACK_LINE(239)
					if (((b->__get((int)3) == this->DIR_DOWN))){
						HX_STACK_LINE(240)
						hx::AddEq(b[(int)1],(int)1);
					}
					else{
						HX_STACK_LINE(242)
						if (((b->__get((int)3) == this->DIR_LEFT))){
							HX_STACK_LINE(243)
							hx::SubEq(b[(int)0],(int)1);
						}
						else{
							HX_STACK_LINE(245)
							if (((b->__get((int)3) == this->DIR_RIGHT))){
								HX_STACK_LINE(246)
								hx::AddEq(b[(int)0],(int)1);
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,shooting,(void))

Void Main_obj::createBullet( int tankID){
{
		HX_STACK_FRAME("Main","createBullet",0x1dc07793,"Main.createBullet","Main.hx",254,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tankID,"tankID")
		HX_STACK_LINE(254)
		switch( (int)(tankID)){
			case (int)0: {
				HX_STACK_LINE(256)
				::Bullet fBullet = ::Bullet_obj::__new(this->t1->x,this->t1->y,(int)0,(int)0);		HX_STACK_VAR(fBullet,"fBullet");
				HX_STACK_LINE(257)
				this->bulletList = Array_obj< Float >::__new().Add(fBullet->x).Add(fBullet->y).Add(this->bulletGreen).Add(this->t1->rotation);
				HX_STACK_LINE(258)
				this->bullets->push(this->bulletList);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(260)
				::Bullet fBullet = ::Bullet_obj::__new(this->t2->x,this->t2->y,(int)0,(int)0);		HX_STACK_VAR(fBullet,"fBullet");
				HX_STACK_LINE(261)
				this->bulletList = Array_obj< Float >::__new().Add(fBullet->x).Add(fBullet->y).Add(this->bulletRed).Add(this->t2->rotation);
				HX_STACK_LINE(262)
				this->bullets->push(this->bulletList);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,createBullet,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(DIR_UP,"DIR_UP");
	HX_MARK_MEMBER_NAME(DIR_RIGHT,"DIR_RIGHT");
	HX_MARK_MEMBER_NAME(DIR_DOWN,"DIR_DOWN");
	HX_MARK_MEMBER_NAME(DIR_LEFT,"DIR_LEFT");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(tankList,"tankList");
	HX_MARK_MEMBER_NAME(t1,"t1");
	HX_MARK_MEMBER_NAME(t2,"t2");
	HX_MARK_MEMBER_NAME(t1Fired,"t1Fired");
	HX_MARK_MEMBER_NAME(t2Fired,"t2Fired");
	HX_MARK_MEMBER_NAME(bulletGreen,"bulletGreen");
	HX_MARK_MEMBER_NAME(bulletRed,"bulletRed");
	HX_MARK_MEMBER_NAME(bullets,"bullets");
	HX_MARK_MEMBER_NAME(bulletList,"bulletList");
	HX_MARK_MEMBER_NAME(upKey,"upKey");
	HX_MARK_MEMBER_NAME(downKey,"downKey");
	HX_MARK_MEMBER_NAME(leftKey,"leftKey");
	HX_MARK_MEMBER_NAME(rightKey,"rightKey");
	HX_MARK_MEMBER_NAME(controlKey,"controlKey");
	HX_MARK_MEMBER_NAME(w_Key,"w_Key");
	HX_MARK_MEMBER_NAME(s_Key,"s_Key");
	HX_MARK_MEMBER_NAME(a_Key,"a_Key");
	HX_MARK_MEMBER_NAME(d_Key,"d_Key");
	HX_MARK_MEMBER_NAME(spaceKey,"spaceKey");
	HX_MARK_MEMBER_NAME(reset_Key,"reset_Key");
	HX_MARK_MEMBER_NAME(previousTime,"previousTime");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(DIR_UP,"DIR_UP");
	HX_VISIT_MEMBER_NAME(DIR_RIGHT,"DIR_RIGHT");
	HX_VISIT_MEMBER_NAME(DIR_DOWN,"DIR_DOWN");
	HX_VISIT_MEMBER_NAME(DIR_LEFT,"DIR_LEFT");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	HX_VISIT_MEMBER_NAME(tankList,"tankList");
	HX_VISIT_MEMBER_NAME(t1,"t1");
	HX_VISIT_MEMBER_NAME(t2,"t2");
	HX_VISIT_MEMBER_NAME(t1Fired,"t1Fired");
	HX_VISIT_MEMBER_NAME(t2Fired,"t2Fired");
	HX_VISIT_MEMBER_NAME(bulletGreen,"bulletGreen");
	HX_VISIT_MEMBER_NAME(bulletRed,"bulletRed");
	HX_VISIT_MEMBER_NAME(bullets,"bullets");
	HX_VISIT_MEMBER_NAME(bulletList,"bulletList");
	HX_VISIT_MEMBER_NAME(upKey,"upKey");
	HX_VISIT_MEMBER_NAME(downKey,"downKey");
	HX_VISIT_MEMBER_NAME(leftKey,"leftKey");
	HX_VISIT_MEMBER_NAME(rightKey,"rightKey");
	HX_VISIT_MEMBER_NAME(controlKey,"controlKey");
	HX_VISIT_MEMBER_NAME(w_Key,"w_Key");
	HX_VISIT_MEMBER_NAME(s_Key,"s_Key");
	HX_VISIT_MEMBER_NAME(a_Key,"a_Key");
	HX_VISIT_MEMBER_NAME(d_Key,"d_Key");
	HX_VISIT_MEMBER_NAME(spaceKey,"spaceKey");
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
		if (HX_FIELD_EQ(inName,"DIR_UP") ) { return DIR_UP; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"t1Fired") ) { return t1Fired; }
		if (HX_FIELD_EQ(inName,"t2Fired") ) { return t2Fired; }
		if (HX_FIELD_EQ(inName,"bullets") ) { return bullets; }
		if (HX_FIELD_EQ(inName,"downKey") ) { return downKey; }
		if (HX_FIELD_EQ(inName,"leftKey") ) { return leftKey; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DIR_DOWN") ) { return DIR_DOWN; }
		if (HX_FIELD_EQ(inName,"DIR_LEFT") ) { return DIR_LEFT; }
		if (HX_FIELD_EQ(inName,"tankList") ) { return tankList; }
		if (HX_FIELD_EQ(inName,"rightKey") ) { return rightKey; }
		if (HX_FIELD_EQ(inName,"spaceKey") ) { return spaceKey; }
		if (HX_FIELD_EQ(inName,"moveTank") ) { return moveTank_dyn(); }
		if (HX_FIELD_EQ(inName,"shooting") ) { return shooting_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIR_RIGHT") ) { return DIR_RIGHT; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return tilesheet; }
		if (HX_FIELD_EQ(inName,"bulletRed") ) { return bulletRed; }
		if (HX_FIELD_EQ(inName,"reset_Key") ) { return reset_Key; }
		if (HX_FIELD_EQ(inName,"resetTank") ) { return resetTank_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletList") ) { return bulletList; }
		if (HX_FIELD_EQ(inName,"controlKey") ) { return controlKey; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletGreen") ) { return bulletGreen; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { return previousTime; }
		if (HX_FIELD_EQ(inName,"keyUpHandler") ) { return keyUpHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"createBullet") ) { return createBullet_dyn(); }
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
	case 6:
		if (HX_FIELD_EQ(inName,"DIR_UP") ) { DIR_UP=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"t1Fired") ) { t1Fired=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t2Fired") ) { t2Fired=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bullets") ) { bullets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"downKey") ) { downKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftKey") ) { leftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DIR_DOWN") ) { DIR_DOWN=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIR_LEFT") ) { DIR_LEFT=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tankList") ) { tankList=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightKey") ) { rightKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spaceKey") ) { spaceKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIR_RIGHT") ) { DIR_RIGHT=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::openfl::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletRed") ) { bulletRed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reset_Key") ) { reset_Key=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletList") ) { bulletList=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controlKey") ) { controlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletGreen") ) { bulletGreen=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { previousTime=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("DIR_UP"));
	outFields->push(HX_CSTRING("DIR_RIGHT"));
	outFields->push(HX_CSTRING("DIR_DOWN"));
	outFields->push(HX_CSTRING("DIR_LEFT"));
	outFields->push(HX_CSTRING("tilesheet"));
	outFields->push(HX_CSTRING("tankList"));
	outFields->push(HX_CSTRING("t1"));
	outFields->push(HX_CSTRING("t2"));
	outFields->push(HX_CSTRING("t1Fired"));
	outFields->push(HX_CSTRING("t2Fired"));
	outFields->push(HX_CSTRING("bulletGreen"));
	outFields->push(HX_CSTRING("bulletRed"));
	outFields->push(HX_CSTRING("bullets"));
	outFields->push(HX_CSTRING("bulletList"));
	outFields->push(HX_CSTRING("upKey"));
	outFields->push(HX_CSTRING("downKey"));
	outFields->push(HX_CSTRING("leftKey"));
	outFields->push(HX_CSTRING("rightKey"));
	outFields->push(HX_CSTRING("controlKey"));
	outFields->push(HX_CSTRING("w_Key"));
	outFields->push(HX_CSTRING("s_Key"));
	outFields->push(HX_CSTRING("a_Key"));
	outFields->push(HX_CSTRING("d_Key"));
	outFields->push(HX_CSTRING("spaceKey"));
	outFields->push(HX_CSTRING("reset_Key"));
	outFields->push(HX_CSTRING("previousTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Main_obj,DIR_UP),HX_CSTRING("DIR_UP")},
	{hx::fsFloat,(int)offsetof(Main_obj,DIR_RIGHT),HX_CSTRING("DIR_RIGHT")},
	{hx::fsFloat,(int)offsetof(Main_obj,DIR_DOWN),HX_CSTRING("DIR_DOWN")},
	{hx::fsFloat,(int)offsetof(Main_obj,DIR_LEFT),HX_CSTRING("DIR_LEFT")},
	{hx::fsObject /*::openfl::display::Tilesheet*/ ,(int)offsetof(Main_obj,tilesheet),HX_CSTRING("tilesheet")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Main_obj,tankList),HX_CSTRING("tankList")},
	{hx::fsObject /*::Tank*/ ,(int)offsetof(Main_obj,t1),HX_CSTRING("t1")},
	{hx::fsObject /*::Tank*/ ,(int)offsetof(Main_obj,t2),HX_CSTRING("t2")},
	{hx::fsBool,(int)offsetof(Main_obj,t1Fired),HX_CSTRING("t1Fired")},
	{hx::fsBool,(int)offsetof(Main_obj,t2Fired),HX_CSTRING("t2Fired")},
	{hx::fsInt,(int)offsetof(Main_obj,bulletGreen),HX_CSTRING("bulletGreen")},
	{hx::fsInt,(int)offsetof(Main_obj,bulletRed),HX_CSTRING("bulletRed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,bullets),HX_CSTRING("bullets")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Main_obj,bulletList),HX_CSTRING("bulletList")},
	{hx::fsBool,(int)offsetof(Main_obj,upKey),HX_CSTRING("upKey")},
	{hx::fsBool,(int)offsetof(Main_obj,downKey),HX_CSTRING("downKey")},
	{hx::fsBool,(int)offsetof(Main_obj,leftKey),HX_CSTRING("leftKey")},
	{hx::fsBool,(int)offsetof(Main_obj,rightKey),HX_CSTRING("rightKey")},
	{hx::fsBool,(int)offsetof(Main_obj,controlKey),HX_CSTRING("controlKey")},
	{hx::fsBool,(int)offsetof(Main_obj,w_Key),HX_CSTRING("w_Key")},
	{hx::fsBool,(int)offsetof(Main_obj,s_Key),HX_CSTRING("s_Key")},
	{hx::fsBool,(int)offsetof(Main_obj,a_Key),HX_CSTRING("a_Key")},
	{hx::fsBool,(int)offsetof(Main_obj,d_Key),HX_CSTRING("d_Key")},
	{hx::fsBool,(int)offsetof(Main_obj,spaceKey),HX_CSTRING("spaceKey")},
	{hx::fsBool,(int)offsetof(Main_obj,reset_Key),HX_CSTRING("reset_Key")},
	{hx::fsInt,(int)offsetof(Main_obj,previousTime),HX_CSTRING("previousTime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("DIR_UP"),
	HX_CSTRING("DIR_RIGHT"),
	HX_CSTRING("DIR_DOWN"),
	HX_CSTRING("DIR_LEFT"),
	HX_CSTRING("tilesheet"),
	HX_CSTRING("tankList"),
	HX_CSTRING("t1"),
	HX_CSTRING("t2"),
	HX_CSTRING("t1Fired"),
	HX_CSTRING("t2Fired"),
	HX_CSTRING("bulletGreen"),
	HX_CSTRING("bulletRed"),
	HX_CSTRING("bullets"),
	HX_CSTRING("bulletList"),
	HX_CSTRING("upKey"),
	HX_CSTRING("downKey"),
	HX_CSTRING("leftKey"),
	HX_CSTRING("rightKey"),
	HX_CSTRING("controlKey"),
	HX_CSTRING("w_Key"),
	HX_CSTRING("s_Key"),
	HX_CSTRING("a_Key"),
	HX_CSTRING("d_Key"),
	HX_CSTRING("spaceKey"),
	HX_CSTRING("reset_Key"),
	HX_CSTRING("previousTime"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("keyDownHandler"),
	HX_CSTRING("keyUpHandler"),
	HX_CSTRING("resetTank"),
	HX_CSTRING("moveTank"),
	HX_CSTRING("shooting"),
	HX_CSTRING("createBullet"),
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

