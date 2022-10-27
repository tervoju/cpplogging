#include "logging.h"

#include <iostream>

#include <boost/log/trivial.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/expressions.hpp>

namespace logging = boost::log;


void init_logging() {     
   logging::core::get()->set_filter     (        
      logging::trivial::severity >= logging::trivial::debug
   ); 
} 