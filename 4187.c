void fun()
{
  int entity_3 = 68;
  entity_3 = 30;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char entity_4[83] = "";
  entity_4 = NULL;
  memset(entity_4, 'v', 83-1);
  entity_4[83-1]='';
  memset(entity_9, 'd', entity_3-1);
  entity_9[entity_3-1]='';
  entity_9[45] = 'O';
}