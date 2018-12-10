private["_player"];
_player = _this select 0;

if (_player getVariable ["ExileIsHandcuffed", false]) then
{
	player playMoveNow "AwopPercMstpSgthWnonDnon_end";

	_player setDamage 0.05;

	_name = _player getVariable ["ExileName", -1];
	if !(_name isEqualTo -1) then 
	{
		["InfoTitleAndText",
			[
				"Beat Up",
				format ["You have beaten up %1", _name]
			]
		] call ExileClient_gui_toaster_addTemplateToast;
	};
};
call ExileClient_gui_interactionMenu_unhook;