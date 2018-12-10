class CfgInteractionMenus
{
	class Player ﻿
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Beat: ExileAbstractAction //Add a custom class name
		﻿	{
				title = "Beat Up"; //Give our Action a name
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed"; //This condition checks for Handcuffed players and won't show the action unless the player is handcuffed
				action = "_this call fnc_BeatUp"; //execute our function
			};﻿
	﻿﻿	};
	};
};