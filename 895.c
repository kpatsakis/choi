void fun()
{
  int entity_5 = 66;
  char entity_4[45] = "";
  entity_4 = NULL;
  char entity_2[36] = "";
  entity_2 = NULL;
  memset(entity_2, 'q', 36-1);
  entity_2[36-1]='';
  memset(entity_4, 'o', 45-1);
  entity_4[45-1]='';
  entity_2[entity_5] = 'q';
}