void fun()
{
  char entity_2[45] = "";
  entity_2 = NULL;
  char entity_5[50] = "";
  entity_5 = NULL;
  char entity_8 = 'a';
  memset(entity_2, 'Z', 45-1);
  entity_2[45-1]='';
  memset(entity_5, 'a', 50-1);
  entity_5[50-1]='';
  entity_5[22] = 'Z';
}