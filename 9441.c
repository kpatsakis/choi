void fun()
{
  int entity_9 = 41;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char entity_4[55] = "";
  entity_4 = NULL;
  memset(entity_8, 'h', entity_9-1);
  entity_8[entity_9-1]='';
  memset(entity_4, 'H', 55-1);
  entity_4[55-1]='';
  entity_8[45] = 'U';
}