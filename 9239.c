void fun()
{
  int entity_5 = 7;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char entity_8[28] = "";
  entity_8 = NULL;
  memset(entity_9, 'E', entity_5-1);
  entity_9[entity_5-1]='';
  memset(entity_8, 'k', 28-1);
  entity_8[28-1]='';
  entity_5 = 9;
  entity_9[23] = 'D';
}