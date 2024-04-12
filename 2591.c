void fun()
{
  int entity_4 = 36;
  char entity_8[41] = "";
  entity_8 = NULL;
  char entity_1 = 'z';
  memset(entity_8, 'j', 41-1);
  entity_8[41-1]='';
  entity_4 = 36;
  entity_8[entity_4] = 'y';
}