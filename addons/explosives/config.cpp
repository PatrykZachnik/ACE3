#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    units[] = {};
    weapons[] = {"ACE_Clacker", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_DeadManSwitch"};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"ace_common", "ace_interaction"};
    author[] = {"Garth 'L-H' de Wet"};
    authorUrl = "http://garth.snakebiteink.co.za/";
    VERSION_CONFIG;
  };
};

#include "CfgEventHandlers.hpp"

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgACE_Triggers.hpp"
#include "ExplosivesUI.hpp"

class CfgActions {
  class None;
  class Deactivate:None {
    show = 0;
  };
  class DeactivateMine:None {
    show = 0;
  };
};

class CfgMineTriggers {
  class RangeTrigger;
  class MagneticTrigger: RangeTrigger {
    mineMagnetic = 1;
    mineTriggerRange = 1;
  };
};

class ACE_Parameters_Boolean {
  GVAR(RequireSpecialist) = 0;
  GVAR(PunishNonSpecialists) = 1;
};
