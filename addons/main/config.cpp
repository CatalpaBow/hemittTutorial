#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tut_common"};
        author = "Me";
        authors[] = {"Me"};
        VERSION_CONFIG;
    };
};