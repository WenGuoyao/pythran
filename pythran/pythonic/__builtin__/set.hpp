#ifndef PYTHONIC_BUILTIN_SET_HPP
#define PYTHONIC_BUILTIN_SET_HPP

#include "pythonic/include/__builtin__/set.hpp"

#include "pythonic/types/set.hpp"
#include "pythonic/utils/proxy.hpp"

namespace pythonic
{

  namespace __builtin__
  {

    namespace anonymous
    {

      inline types::empty_set set()
      {
        return types::empty_set();
      }

      template <class Iterable>
      inline types::set<
          typename std::remove_reference<Iterable>::type::iterator::value_type>
      set(Iterable &&t)
      {
        return {t.begin(), t.end()};
      }
    }

    PROXY_IMPL(pythonic::__builtin__::anonymous, set);
  }
}
#endif
