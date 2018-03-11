#ifndef GODOT_GLOBAL_HPP
#define GODOT_GLOBAL_HPP

#include <gdnative_api_struct.gen.h>
#include "String.hpp"
#include "Array.hpp"

namespace godot {

extern "C" const godot_gdnative_core_api_struct *api;
extern "C" const godot_gdnative_ext_nativescript_api_struct *nativescript_api;
extern "C" const godot_gdnative_ext_nativescript_1_1_api_struct *nativescript_1_1_api;

extern "C" const void *gdnlib;

class Godot {

public:
	static void print(const String& message);
	static void print_warning(const String& description, const String& function, const String& file, int line);
	static void print_error(const String& description, const String& function, const String& file, int line);

	static void gdnative_init(godot_gdnative_init_options *o);
	static void gdnative_terminate(godot_gdnative_terminate_options *o);
	static void nativescript_init(void *handle);
	static void nativescript_terminate(void *handle);

	template <class... Args>
	static void print(const String& fmt, Args... values) {
		print(fmt.format(Array::make(values...)));
	}
};



struct _RegisterState {
	static void *nativescript_handle;
	static int language_index;
};

}

#endif
