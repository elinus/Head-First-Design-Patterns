#ifndef __DUCK_H__
#define __DUCK_H__

#include <FlyBehaviour.h>
#include <QuackBehaviour.h>
#include <iostream>
#include <memory>

class Duck {
public:
  Duck() = default;
  virtual ~Duck() = default;
  virtual void display() const = 0;
  void performFly() const;
  void performQuack() const;
  void swim() const;
  void setFlyBehaviour(std::unique_ptr<FlyBehaviour> fb);
  void setQuackBehaviour(std::unique_ptr<QuackBehaviour> qb);

protected:
  std::unique_ptr<FlyBehaviour> flyBehaviour;
  std::unique_ptr<QuackBehaviour> quackBehaviour;
};

#endif
