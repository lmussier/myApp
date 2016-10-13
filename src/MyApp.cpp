#include "MyApp.hpp"

bool MyApp::run() {
  theLib.sayHello();
  return true;
}

bool MyApp::stop() {
  theLib.sayGoodbye();
  return true;
}
