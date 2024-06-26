#ifndef CONTEXT_H
#define CONTEXT_H
#include "extensioncountersize.h"
#include "filescountersize.h"
#include <memory>


class Context
{
    QMap<QString, qint64> dict;
    ExtensionCounterSize *extension_strategy;
    FilesCounterSize *files_strategy;
public:

    Context(ICounterSize *strategy);
    ~Context() = default;
    void set_strategy(ICounterSize *strategy);
    void count_size(const QString& path);
    const QMap<QString,qint64>& get_dict();
private:
    ICounterSize *pointer;



};


#endif // CONTEXT_H
