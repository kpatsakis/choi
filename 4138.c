void fun()
{
  int entity_0 = 25;
  char entity_4[45] = "";
  entity_4 = NULL;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_4, 'Y', 45-1);
  entity_4[45-1]='';
  memset(entity_6, 'q', entity_0-1);
  entity_6[entity_0-1]='';
  entity_0 = 84;
  entity_6[35] = 'H';
}