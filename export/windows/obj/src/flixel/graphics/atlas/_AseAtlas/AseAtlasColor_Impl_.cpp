// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasColor_Impl_
#include <flixel/graphics/atlas/_AseAtlas/AseAtlasColor_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e359b39e262c1425_76_toFlxColor,"flixel.graphics.atlas._AseAtlas.AseAtlasColor_Impl_","toFlxColor",0xb6389f7a,"flixel.graphics.atlas._AseAtlas.AseAtlasColor_Impl_.toFlxColor","flixel/graphics/atlas/AseAtlas.hx",76,0x195d9311)
HX_LOCAL_STACK_FRAME(_hx_pos_e359b39e262c1425_80_toString,"flixel.graphics.atlas._AseAtlas.AseAtlasColor_Impl_","toString",0x48250c7a,"flixel.graphics.atlas._AseAtlas.AseAtlasColor_Impl_.toString","flixel/graphics/atlas/AseAtlas.hx",80,0x195d9311)
namespace flixel{
namespace graphics{
namespace atlas{
namespace _AseAtlas{

void AseAtlasColor_Impl__obj::__construct() { }

Dynamic AseAtlasColor_Impl__obj::__CreateEmpty() { return new AseAtlasColor_Impl__obj; }

void *AseAtlasColor_Impl__obj::_hx_vtable = 0;

Dynamic AseAtlasColor_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AseAtlasColor_Impl__obj > _hx_result = new AseAtlasColor_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AseAtlasColor_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x106593b8;
}

 ::Dynamic AseAtlasColor_Impl__obj::toFlxColor(::String this1){
            	HX_STACKFRAME(&_hx_pos_e359b39e262c1425_76_toFlxColor)
HXDLIN(  76)		if (::hx::IsNull( this1 )) {
HXDLIN(  76)			return null();
            		}
            		else {
HXDLIN(  76)			return ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + this1.substr(1,null())));
            		}
HXDLIN(  76)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AseAtlasColor_Impl__obj,toFlxColor,return )

::String AseAtlasColor_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_e359b39e262c1425_80_toString)
HXDLIN(  80)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AseAtlasColor_Impl__obj,toString,return )


AseAtlasColor_Impl__obj::AseAtlasColor_Impl__obj()
{
}

bool AseAtlasColor_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toFlxColor") ) { outValue = toFlxColor_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AseAtlasColor_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AseAtlasColor_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class AseAtlasColor_Impl__obj::__mClass;

static ::String AseAtlasColor_Impl__obj_sStaticFields[] = {
	HX_("toFlxColor",2c,54,a1,9f),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void AseAtlasColor_Impl__obj::__register()
{
	AseAtlasColor_Impl__obj _hx_dummy;
	AseAtlasColor_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.atlas._AseAtlas.AseAtlasColor_Impl_",60,d6,4c,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AseAtlasColor_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AseAtlasColor_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AseAtlasColor_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AseAtlasColor_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AseAtlasColor_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
} // end namespace _AseAtlas