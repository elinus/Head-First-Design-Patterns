#ifndef __NOCOMMAND_H__
#define __NOCOMMAND_H__

#include <Command/Command.h>
#include <string>

class NoCommand : public Command {
public:
  virtual ~NoCommand() {}
  void execute() override;
  std::string toString() override;
};

#endif /* __NOCOMMAND_H__ */
