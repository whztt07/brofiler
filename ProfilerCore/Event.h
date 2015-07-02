#pragma once
#include "Event.h"

#include <string>
#include "Serialization.h"

namespace Profiler
{
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
OutputDataStream &operator << ( OutputDataStream &stream, const EventDescription &ob);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
OutputDataStream& operator<<( OutputDataStream& stream, const EventTime& ob );
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
OutputDataStream& operator<<( OutputDataStream& stream, const EventData& ob );
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}