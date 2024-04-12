void fun()
{
  int entity_8 = 30;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  memset(entity_5, 'P', entity_8-1);
  entity_5[entity_8-1]='';
  entity_8 = 95;
  entity_5[45] = 'y';
}