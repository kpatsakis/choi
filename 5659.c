void fun()
{
  int entity_8 = 25;
  char entity_2[45] = "";
  entity_2 = NULL;
  char entity_4 = 'A';
  memset(entity_2, 'H', 45-1);
  entity_2[45-1]='';
  entity_2[8] = 'A';
}