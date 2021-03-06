#ifndef SHARED_INPUT_EVENT_HANDLER_DELEGATE_H
#define SHARED_INPUT_EVENT_HANDLER_DELEGATE_H

#include <escher.h>
#include "input_event_handler_delegate_app.h"

namespace Shared {

class InputEventHandlerDelegate : public ::InputEventHandlerDelegate {
public:
  Toolbox * toolboxForInputEventHandler(InputEventHandler * textInput) override { return inputEventHandlerDelegateApp()->toolboxForInputEventHandler(textInput); }
  NestedMenuController * variableBoxForInputEventHandler(InputEventHandler * textInput) override { return inputEventHandlerDelegateApp()->variableBoxForInputEventHandler(textInput); }
private:
  virtual InputEventHandlerDelegateApp * inputEventHandlerDelegateApp() = 0;
};

}

#endif
