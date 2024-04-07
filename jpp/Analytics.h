#pragma once

#include <chrono>

namespace jpp {

	namespace analytics {
		
		struct scoped_timer {
			std::chrono::time_point<std::chrono::steady_clock> start, end;

			scoped_timer();

			~scoped_timer();

		};

	}
}