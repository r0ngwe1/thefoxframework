#ifndef _THEFOX_CURRENTTHREAD_H_
#define _THEFOX_CURRENTTHREAD_H_

#include <base/Types.h>
#include <base/noncopyable.h>

namespace thefox
{

class CurrentThread : noncopyable
{
public:
	static int tid() { return static_cast<int>(::GetCurrentThreadId()); }
	static String tidString()
	{
		char buf[32] = {0};
		_snprintf(buf, buf[32], "%d", static_cast<int>(::GetCurrentThreadId()));
		return buf;
	}
};

} // namespace thefox

#endif // _THEFOX_CURRENTTHREAD_H_