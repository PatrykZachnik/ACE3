/**
 * fn_isPiPOpen_CC.sqf
 * @Descr: N/A
 * @Author: Glowbal
 *
 * @Arguments: []
 * @Return:
 * @PublicAPI: false
 */

private ["_deviceName","_settings","_display","_return","_idc"];
_deviceName = _this select 0;
_selected = _this select 1;
_display = uiNamespace getvariable _deviceName;
_idc = switch (_selected) do {
	case "main": {20};
	case "sidebar": {21};
	default {20};
};
!((ctrlPosition ((_display displayCtrl _idc)) select 0 == 0) && ((ctrlPosition (_display displayCtrl _idc)) select 2 == 0))