void fun()
{
  int entity_3 = 97;
  int entity_5 = 38;
  int entity_2 = 31;
  char entity_0[38] = "";
  entity_0 = NULL;
  char entity_8[46] = "";
  entity_8 = NULL;
  memset(entity_8, 'Z', 46-1);
  entity_8[46-1]='';
  memset(entity_0, 'p', 38-1);
  entity_0[38-1]='';
  entity_0[entity_2] = 'z';
}