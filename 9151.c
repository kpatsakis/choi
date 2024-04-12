void fun()
{
  int entity_9 = 7;
  int entity_1 = 89;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char entity_6[23] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', 23-1);
  entity_6[23-1]='';
  memset(entity_7, 'x', entity_9-1);
  entity_7[entity_9-1]='';
  entity_7[97] = 'G';
}