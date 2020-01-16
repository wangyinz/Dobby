#include "ExtraInternalPlugin/RegisterPlugin.h"

LiteMutableArray *ExtraInternalPlugin::plugins_ = NULL;
;

void ExtraInternalPlugin::registerPlugin(const char *name, ExtraInternalPlugin *plugin) {
  if (!plugins_) {
    plugins_ = new LiteMutableArray;
  }

  ExtraInternalPlugin::plugins_->pushObject(reinterpret_cast<LiteObject *>(plugin));
  return;
}
