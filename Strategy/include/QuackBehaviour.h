#ifndef __QUACK_BEHAVIOUR__
#define __QUACK_BEHAVIOUR__

class QuackBehaviour {
public:
  virtual ~QuackBehaviour() = default;
  virtual void quack() const = 0;
};

#endif
