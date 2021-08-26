hint "hello";
_f117a = nearestObject [player, "F117A_Nighthawk"];
hint str _f117a;
if (!isNull _f117a) then
{
    [_f117a] execVM "FlirDlir.sqf";
    hint "hola";
};

