void fun()
{
  int entity_3 = 17;
  char entity_9[45] = "";
  entity_9 = NULL;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  memset(entity_9, 'F', 45-1);
  entity_9[45-1]='';
  memset(entity_4, 'u', entity_3-1);
  entity_4[entity_3-1]='';
  entity_4[43] = 'F';
}