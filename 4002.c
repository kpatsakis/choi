void fun()
{
  int entity_7 = 92;
  entity_7 = 62;
  char entity_4[91] = "";
  entity_4 = NULL;
  memset(entity_4, 's', 91-1);
  entity_4[91-1]='';
  entity_4[entity_7] = 'd';
}