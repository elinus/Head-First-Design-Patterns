#ifndef __TURKEY_ADAPTER_H__
#define __TURKEY_ADAPTER_H__

#include <Duck.h>
#include <Turkey.h>

class TurkeyAdapter : public Duck {
public:
  TurkeyAdapter(Turkey *turkey);
  void quack() override;
  void fly() override;

private:
  Turkey *turkey;
};

#endif
