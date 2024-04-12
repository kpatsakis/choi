void fun()
{
  int entity_9 = 71;
  char entity_8[38] = "";
  entity_8 = NULL;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 's', entity_9-1);
  entity_2[entity_9-1]='';
  memset(entity_8, 'F', 38-1);
  entity_8[38-1]='';
  entity_2[45] = 'b';
}