void fun()
{
  int entity_0 = 97;
  entity_0 = 59;
  char entity_6[49] = "";
  entity_6 = NULL;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  memset(entity_6, 'R', 49-1);
  entity_6[49-1]='';
  memset(entity_8, 'G', entity_0-1);
  entity_8[entity_0-1]='';
  entity_8[87] = 'l';
}