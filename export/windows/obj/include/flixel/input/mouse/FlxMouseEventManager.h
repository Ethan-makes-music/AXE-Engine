// Generated by Haxe 4.3.4
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEventManager
#define INCLUDED_flixel_input_mouse_FlxMouseEventManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouseEvent)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouseEventManager)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace input{
namespace mouse{


class HXCPP_CLASS_ATTRIBUTES FlxMouseEventManager_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxMouseEventManager_obj OBJ_;
		FlxMouseEventManager_obj();

	public:
		enum { _hx_ClassId = 0x3f3827fd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.mouse.FlxMouseEventManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.mouse.FlxMouseEventManager"); }
		static ::hx::ObjectPtr< FlxMouseEventManager_obj > __new();
		static ::hx::ObjectPtr< FlxMouseEventManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxMouseEventManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxMouseEventManager",86,56,10,fd); }

		::Array< ::Dynamic> _list;
		::Array< ::Dynamic> _overList;
		::Array< ::Dynamic> _downList;
		::Array< ::Dynamic> _clickList;
		int mouseClickedTime;
		 ::flixel::math::FlxBasePoint _point;
		int maxDoubleClickDelay;
		void destroy();

		void update(Float elapsed);

		 ::flixel::input::mouse::FlxMouseEvent addEvent( ::flixel::input::mouse::FlxMouseEvent event);
		::Dynamic addEvent_dyn();

		 ::Dynamic add( ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,::hx::Null< bool >  mouseChildren,::hx::Null< bool >  mouseEnabled,::hx::Null< bool >  pixelPerfect,::Array< int > mouseButtons);
		::Dynamic add_dyn();

		 ::Dynamic remove( ::Dynamic object);
		::Dynamic remove_dyn();

		void removeAll();
		::Dynamic removeAll_dyn();

		void reorder();
		::Dynamic reorder_dyn();

		void setMouseDownCallback( ::Dynamic object, ::Dynamic onMouseDown);
		::Dynamic setMouseDownCallback_dyn();

		void setMouseUpCallback( ::Dynamic object, ::Dynamic onMouseUp);
		::Dynamic setMouseUpCallback_dyn();

		void setMouseClickCallback( ::Dynamic object, ::Dynamic onMouseClick);
		::Dynamic setMouseClickCallback_dyn();

		void setMouseDoubleClickCallback( ::Dynamic object, ::Dynamic onMouseDoubleClick);
		::Dynamic setMouseDoubleClickCallback_dyn();

		void setMouseOverCallback( ::Dynamic object, ::Dynamic onMouseOver);
		::Dynamic setMouseOverCallback_dyn();

		void setMouseOutCallback( ::Dynamic object, ::Dynamic onMouseOut);
		::Dynamic setMouseOutCallback_dyn();

		void setMouseMoveCallback( ::Dynamic object, ::Dynamic onMouseMove);
		::Dynamic setMouseMoveCallback_dyn();

		void setMouseWheelCallback( ::Dynamic object, ::Dynamic onMouseWheel);
		::Dynamic setMouseWheelCallback_dyn();

		void setObjectMouseEnabled( ::Dynamic object,bool MouseEnabled);
		::Dynamic setObjectMouseEnabled_dyn();

		bool isObjectMouseEnabled( ::Dynamic object);
		::Dynamic isObjectMouseEnabled_dyn();

		void setObjectMouseChildren( ::Dynamic object,bool mouseChildren);
		::Dynamic setObjectMouseChildren_dyn();

		bool isObjectMouseChildren( ::Dynamic object);
		::Dynamic isObjectMouseChildren_dyn();

		void setObjectMouseButtons( ::Dynamic object,::Array< int > mouseButtons);
		::Dynamic setObjectMouseButtons_dyn();

		void traverseFlxGroup( ::flixel::group::FlxTypedGroup group,::Array< ::Dynamic> orderedObjects);
		::Dynamic traverseFlxGroup_dyn();

		 ::flixel::input::mouse::FlxMouseEvent get( ::Dynamic object,::Array< ::Dynamic> list);
		::Dynamic get_dyn();

		int sortByMouseChildren( ::flixel::input::mouse::FlxMouseEvent event1, ::flixel::input::mouse::FlxMouseEvent event2);
		::Dynamic sortByMouseChildren_dyn();

		void clearRegistry();
		::Dynamic clearRegistry_dyn();

		bool checkOverlap( ::flixel::input::mouse::FlxMouseEvent event);
		::Dynamic checkOverlap_dyn();

		bool checkOverlapWithPoint( ::flixel::input::mouse::FlxMouseEvent event, ::flixel::math::FlxBasePoint point, ::flixel::FlxCamera camera);
		::Dynamic checkOverlapWithPoint_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace mouse

#endif /* INCLUDED_flixel_input_mouse_FlxMouseEventManager */ 
