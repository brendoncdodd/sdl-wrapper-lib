#include "visible_object.h"

VisibleObject::VisibleObject(Game* master)
{
	master->registerVisible(this);
}
