void fun()
{
  int entity_3 = 22;
  char entity_8[81] = "";
  entity_8 = NULL;
  memset(entity_8, 'o', 81-1);
  entity_8[81-1]='';
  entity_8[entity_3] = 'W';
}