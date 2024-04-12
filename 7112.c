void fun()
{
  int entity_8 = 13;
  char entity_6[91] = "";
  entity_6 = NULL;
  memset(entity_6, 'j', 91-1);
  entity_6[91-1]='';
  entity_8 = 35;
  entity_6[entity_8] = 'c';
}