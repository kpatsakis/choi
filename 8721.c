void fun()
{
  int entity_2 = 23;
  char entity_3 = 'p';
  char entity_9[30] = "";
  entity_9 = NULL;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_6, 'B', entity_2-1);
  entity_6[entity_2-1]='';
  memset(entity_9, 'H', 30-1);
  entity_9[30-1]='';
  entity_2 = 72;
  entity_6[97] = 'd';
}