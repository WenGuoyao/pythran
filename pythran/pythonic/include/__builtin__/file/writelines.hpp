#ifndef PYTHONIC_INCLUDE_BUILTIN_FILE_WRITELINES_HPP
#define PYTHONIC_INCLUDE_BUILTIN_FILE_WRITELINES_HPP

#include "pythonic/include/types/file.hpp"
#include "pythonic/include/utils/proxy.hpp"

namespace pythonic
{

  namespace __builtin__
  {

    namespace file
    {

      template <class F, class T>
      void writelines(F &&f, T const &sequence);

      PROXY_DECL(pythonic::__builtin__::file, writelines);
    }
  }
}
#endif
