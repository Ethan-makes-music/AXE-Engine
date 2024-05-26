// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedContainer
#include <flixel/group/FlxTypedContainer.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_typeLimit__NextState_NextState_Impl_
#include <flixel/util/typeLimit/_NextState/NextState_Impl_.h>
#endif
#ifndef INCLUDED_objects_handlers_DiscordHandler
#include <objects/handlers/DiscordHandler.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_states_MenuState
#include <states/MenuState.h>
#endif
#ifndef INCLUDED_states_SplashScreenState
#include <states/SplashScreenState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_79e8af947942aa60_9_new,"states.SplashScreenState","new",0x7f9ae484,"states.SplashScreenState.new","states/SplashScreenState.hx",9,0x98697ded)
HX_LOCAL_STACK_FRAME(_hx_pos_79e8af947942aa60_15_create,"states.SplashScreenState","create",0xd3388158,"states.SplashScreenState.create","states/SplashScreenState.hx",15,0x98697ded)
HX_LOCAL_STACK_FRAME(_hx_pos_79e8af947942aa60_28_update,"states.SplashScreenState","update",0xde2ea065,"states.SplashScreenState.update","states/SplashScreenState.hx",28,0x98697ded)
HX_LOCAL_STACK_FRAME(_hx_pos_79e8af947942aa60_34_update,"states.SplashScreenState","update",0xde2ea065,"states.SplashScreenState.update","states/SplashScreenState.hx",34,0x98697ded)
HX_LOCAL_STACK_FRAME(_hx_pos_79e8af947942aa60_39_onComplete,"states.SplashScreenState","onComplete",0x611a4d54,"states.SplashScreenState.onComplete","states/SplashScreenState.hx",39,0x98697ded)
HX_LOCAL_STACK_FRAME(_hx_pos_79e8af947942aa60_45_onComplete2,"states.SplashScreenState","onComplete2",0x95e95c5e,"states.SplashScreenState.onComplete2","states/SplashScreenState.hx",45,0x98697ded)
HX_LOCAL_STACK_FRAME(_hx_pos_79e8af947942aa60_52_onComplete3,"states.SplashScreenState","onComplete3",0x95e95c5f,"states.SplashScreenState.onComplete3","states/SplashScreenState.hx",52,0x98697ded)
namespace states{

void SplashScreenState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_79e8af947942aa60_9_new)
HXLINE(  12)		this->sToSkip =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,HX_("S to skip",77,d2,11,7d),16,null());
HXLINE(  11)		this->introText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,300,::flixel::FlxG_obj::width,HX_("[STUDIO NAME HERE]",e7,b6,4b,cf),64,null());
HXLINE(   9)		super::__construct();
            	}

Dynamic SplashScreenState_obj::__CreateEmpty() { return new SplashScreenState_obj; }

void *SplashScreenState_obj::_hx_vtable = 0;

Dynamic SplashScreenState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SplashScreenState_obj > _hx_result = new SplashScreenState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SplashScreenState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x563293a6) {
			if (inClassId<=(int)0x3fd80158) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x3fd80158;
			} else {
				return inClassId==(int)0x563293a6;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void SplashScreenState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_79e8af947942aa60_15_create)
HXLINE(  16)		this->super::create();
HXLINE(  18)		::objects::handlers::DiscordHandler_obj::init();
HXLINE(  20)		this->introText->setFormat(null(),64,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  21)		this->add(this->introText);
HXLINE(  23)		this->sToSkip->setFormat(null(),16,-1,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE(  24)		this->add(this->sToSkip);
            	}


void SplashScreenState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_79e8af947942aa60_28_update)
HXLINE(  29)		this->super::update(elapsed);
HXLINE(  30)		::flixel::FlxG_obj::camera->fade(-16777216,3,false,this->onComplete_dyn(),false);
HXLINE(  32)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  32)		if (_this->keyManager->checkStatusUnsafe(83,_this->status)) {
HXLINE(  34)			 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::states::MenuState_obj::__alloc( HX_CTX ));
HXDLIN(  34)			 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN(  34)			bool _hx_tmp;
HXDLIN(  34)			if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXLINE(  34)				_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            			}
            			else {
HXLINE(  34)				_hx_tmp = true;
            			}
HXDLIN(  34)			if (_hx_tmp) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_79e8af947942aa60_34_update)
HXLINE(  34)					if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE(  34)						::flixel::FlxG_obj::game->_nextState = nextState;
            					}
            					else {
HXLINE(  34)						::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  34)				::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            			}
            		}
            	}


void SplashScreenState_obj::onComplete(){
            	HX_STACKFRAME(&_hx_pos_79e8af947942aa60_39_onComplete)
HXLINE(  40)		this->introText->set_text(HX_("Introduces",d4,62,b2,2b));
HXLINE(  41)		::flixel::FlxG_obj::camera->fade(-16777216,3,false,this->onComplete2_dyn(),false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SplashScreenState_obj,onComplete,(void))

void SplashScreenState_obj::onComplete2(){
            	HX_STACKFRAME(&_hx_pos_79e8af947942aa60_45_onComplete2)
HXLINE(  46)		this->introText->set_text(HX_("[GAME TITLE HERE]",f2,6e,ac,25));
HXLINE(  47)		::flixel::FlxG_obj::camera->fade(-16777216,3,false,this->onComplete3_dyn(),false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SplashScreenState_obj,onComplete2,(void))

void SplashScreenState_obj::onComplete3(){
            	HX_GC_STACKFRAME(&_hx_pos_79e8af947942aa60_52_onComplete3)
HXDLIN(  52)		 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::states::MenuState_obj::__alloc( HX_CTX ));
HXDLIN(  52)		 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN(  52)		bool _hx_tmp;
HXDLIN(  52)		if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXDLIN(  52)			_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            		}
            		else {
HXDLIN(  52)			_hx_tmp = true;
            		}
HXDLIN(  52)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_79e8af947942aa60_52_onComplete3)
HXDLIN(  52)				if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXDLIN(  52)					::flixel::FlxG_obj::game->_nextState = nextState;
            				}
            				else {
HXDLIN(  52)					::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXDLIN(  52)			::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SplashScreenState_obj,onComplete3,(void))


::hx::ObjectPtr< SplashScreenState_obj > SplashScreenState_obj::__new() {
	::hx::ObjectPtr< SplashScreenState_obj > __this = new SplashScreenState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SplashScreenState_obj > SplashScreenState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SplashScreenState_obj *__this = (SplashScreenState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SplashScreenState_obj), true, "states.SplashScreenState"));
	*(void **)__this = SplashScreenState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SplashScreenState_obj::SplashScreenState_obj()
{
}

void SplashScreenState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SplashScreenState);
	HX_MARK_MEMBER_NAME(introText,"introText");
	HX_MARK_MEMBER_NAME(sToSkip,"sToSkip");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SplashScreenState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(introText,"introText");
	HX_VISIT_MEMBER_NAME(sToSkip,"sToSkip");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SplashScreenState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sToSkip") ) { return ::hx::Val( sToSkip ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"introText") ) { return ::hx::Val( introText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onComplete2") ) { return ::hx::Val( onComplete2_dyn() ); }
		if (HX_FIELD_EQ(inName,"onComplete3") ) { return ::hx::Val( onComplete3_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SplashScreenState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sToSkip") ) { sToSkip=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"introText") ) { introText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SplashScreenState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("introText",39,69,67,a6));
	outFields->push(HX_("sToSkip",6d,4e,c7,64));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SplashScreenState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(SplashScreenState_obj,introText),HX_("introText",39,69,67,a6)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(SplashScreenState_obj,sToSkip),HX_("sToSkip",6d,4e,c7,64)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SplashScreenState_obj_sStaticStorageInfo = 0;
#endif

static ::String SplashScreenState_obj_sMemberFields[] = {
	HX_("introText",39,69,67,a6),
	HX_("sToSkip",6d,4e,c7,64),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onComplete2",3a,84,7b,71),
	HX_("onComplete3",3b,84,7b,71),
	::String(null()) };

::hx::Class SplashScreenState_obj::__mClass;

void SplashScreenState_obj::__register()
{
	SplashScreenState_obj _hx_dummy;
	SplashScreenState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.SplashScreenState",92,92,2d,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SplashScreenState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SplashScreenState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SplashScreenState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SplashScreenState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
