#ifndef GODOT_CPP_VISUALSCRIPTTYPECAST_HPP
#define GODOT_CPP_VISUALSCRIPTTYPECAST_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include <VisualScriptNode.hpp>
namespace godot {


class VisualScriptTypeCast : public VisualScriptNode {
public:

	static void *___get_type_tag();
	static void *___get_base_type_tag();
	static inline const char *___get_class_name() { return (const char *) "VisualScriptTypeCast"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o); }

	// enums

	// constants


	static VisualScriptTypeCast *_new();

	// methods
	void set_base_type(const String type);
	String get_base_type() const;
	void set_base_script(const String path);
	String get_base_script() const;

};

}

#endif