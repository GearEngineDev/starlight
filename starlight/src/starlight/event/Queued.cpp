///
/// Queued.cpp
/// starlight
///
/// Refer to LICENSE.txt for more details.
///

#include "Queued.hpp"

///
/// Core namespace.
///
namespace starlight
{
	QueuedEvent::QueuedEvent() noexcept
		:m_type(0)
	{
	}

	QueuedEvent::QueuedEvent(const std::any& event, const std::size_t type)
		: m_event(event), m_type(type)
	{
	}
}