void fun()
{
  int entity_3 = 86;
  int entity_1 = 14;
  int entity_8 = 51;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'J', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[42] = 'W';
}