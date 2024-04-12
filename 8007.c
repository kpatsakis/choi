void fun()
{
  int entity_0 = 3;
  char entity_9[45] = "";
  entity_9 = NULL;
  memset(entity_9, 'B', 45-1);
  entity_9[45-1]='';
  entity_9[entity_0] = 'W';
}