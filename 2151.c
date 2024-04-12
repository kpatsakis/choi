void fun()
{
  int entity_1 = 23;
  entity_1 = 49;
  char entity_5[59] = "";
  entity_5 = NULL;
  char entity_4[45] = "";
  entity_4 = NULL;
  char entity_9[98] = "";
  entity_9 = NULL;
  char entity_0 = 'U';
  memset(entity_5, 'm', 59-1);
  entity_5[59-1]='';
  memset(entity_4, 'd', 45-1);
  entity_4[45-1]='';
  memset(entity_9, 'k', 98-1);
  entity_9[98-1]='';
  entity_4[entity_1] = 'g';
}