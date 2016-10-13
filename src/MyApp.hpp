#ifndef SRC_MYAPP_HPP_
#define SRC_MYAPP_HPP_

#include <myLib/MyLib.hpp>

class MyApp {
 public:
  MyApp() = default;

  ~MyApp() = default;

  MyApp(const MyApp& p_aApp) = delete;

  MyApp& operator=(const MyApp &) = delete;

  bool run();

  bool stop();
 private:
  MyLib theLib;
};

#endif /* SRC_MYAPP_HPP_ */
