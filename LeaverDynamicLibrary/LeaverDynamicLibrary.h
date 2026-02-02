#ifndef LEAVERDYNAMICLIBRARY_H
#define LEAVERDYNAMICLIBRARY_H

#ifdef LEAVERDYNAMICLIBRARY_EXPORTS
#define LEAVERDYNAMICLIBRARY_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIBRARY_API __declspec(dllimport)
#endif

namespace Leaver
{
    class  LEAVERDYNAMICLIBRARY_API Leaver
    {
    public:
        std::string leave(const std::string& name);
    };
}


#endif