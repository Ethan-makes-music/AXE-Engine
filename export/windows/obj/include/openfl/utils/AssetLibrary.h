// Generated by Haxe 4.3.4
#ifndef INCLUDED_openfl_utils_AssetLibrary
#define INCLUDED_openfl_utils_AssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,media,AudioBuffer)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,utils,AssetBundle)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(lime,utils,AssetManifest)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES AssetLibrary_obj : public  ::lime::utils::AssetLibrary_obj
{
	public:
		typedef  ::lime::utils::AssetLibrary_obj super;
		typedef AssetLibrary_obj OBJ_;
		AssetLibrary_obj();

	public:
		enum { _hx_ClassId = 0x12db4ee4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils.AssetLibrary")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils.AssetLibrary"); }
		static ::hx::ObjectPtr< AssetLibrary_obj > __new();
		static ::hx::ObjectPtr< AssetLibrary_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetLibrary_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetLibrary",0b,4f,d4,27); }

		static  ::openfl::utils::AssetLibrary fromBundle( ::lime::utils::AssetBundle bundle);
		static ::Dynamic fromBundle_dyn();

		static  ::openfl::utils::AssetLibrary fromBytes( ::openfl::utils::ByteArrayData bytes,::String rootPath);
		static ::Dynamic fromBytes_dyn();

		static  ::openfl::utils::AssetLibrary fromFile(::String path,::String rootPath);
		static ::Dynamic fromFile_dyn();

		static  ::openfl::utils::AssetLibrary fromManifest( ::lime::utils::AssetManifest manifest);
		static ::Dynamic fromManifest_dyn();

		static  ::lime::app::Future loadFromBytes( ::openfl::utils::ByteArrayData bytes,::String rootPath);
		static ::Dynamic loadFromBytes_dyn();

		static  ::lime::app::Future loadFromFile(::String path,::String rootPath);
		static ::Dynamic loadFromFile_dyn();

		static  ::lime::app::Future loadFromManifest( ::lime::utils::AssetManifest manifest);
		static ::Dynamic loadFromManifest_dyn();

		 ::lime::utils::AssetLibrary _hx___proxy;
		bool bind(::String className, ::Dynamic instance);
		::Dynamic bind_dyn();

		bool exists(::String id,::String type);

		 ::Dynamic getAsset(::String id,::String type);

		 ::lime::media::AudioBuffer getAudioBuffer(::String id);

		 ::haxe::io::Bytes getBytes(::String id);

		 ::lime::text::Font getFont(::String id);

		 ::lime::graphics::Image getImage(::String id);

		 ::openfl::display::MovieClip getMovieClip(::String id);
		::Dynamic getMovieClip_dyn();

		::String getPath(::String id);

		::String getText(::String id);

		bool isLocal(::String id,::String type);

		::Array< ::String > list(::String type);

		 ::lime::app::Future loadAsset(::String id,::String type);

		 ::lime::app::Future load();

		 ::lime::app::Future loadAudioBuffer(::String id);

		 ::lime::app::Future loadBytes(::String id);

		 ::lime::app::Future loadFont(::String id);

		 ::lime::app::Future loadImage(::String id);

		 ::lime::app::Future loadMovieClip(::String id);
		::Dynamic loadMovieClip_dyn();

		 ::lime::app::Future loadText(::String id);

		void unload();

};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_AssetLibrary */ 
