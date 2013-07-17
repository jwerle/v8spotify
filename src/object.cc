
#include "object.h"

spotify::Object *
spotify::Object::New () {
	spotify::Object *object = new spotify::Object;
	return object;
}


bool
spotify::Object::SetRef (void *ref) {
	if (NULL != ref_) return false;
	ref_ = &ref;
	return true;
}


void *
spotify::Object::GetRef () {
	return ref_;
}