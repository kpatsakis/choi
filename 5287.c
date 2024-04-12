void fun()
{
  int entity_4 = 54;
  char entity_9[41] = "";
  entity_9 = NULL;
  char entity_3[28] = "";
  entity_3 = NULL;
  memset(entity_9, 'a', 41-1);
  entity_9[41-1]='';
  memset(entity_3, 'P', 28-1);
  entity_3[28-1]='';
  entity_9[entity_4] = 'm';
}