void fun()
{
  int entity_6 = 51;
  int entity_2 = 77;
  entity_2 = 97;
  char entity_5[45] = "";
  entity_5 = NULL;
  memset(entity_5, 'X', 45-1);
  entity_5[45-1]='';
  entity_5[entity_2] = 'U';
}