void fun()
{
  int entity_4 = 9;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char entity_0[12] = "";
  entity_0 = NULL;
  memset(entity_0, 'F', 12-1);
  entity_0[12-1]='';
  memset(entity_9, 'e', entity_4-1);
  entity_9[entity_4-1]='';
  entity_9[36] = 'n';
}