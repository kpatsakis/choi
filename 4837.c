void fun()
{
  int entity_7 = 71;
  entity_7 = 22;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'u', entity_7-1);
  entity_3[entity_7-1]='';
  entity_3[45] = 'J';
}