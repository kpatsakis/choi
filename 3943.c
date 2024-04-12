void fun()
{
  int entity_3 = 23;
  char entity_9[86] = "";
  entity_9 = NULL;
  char entity_2[30] = "";
  entity_2 = NULL;
  memset(entity_9, 'P', 86-1);
  entity_9[86-1]='';
  memset(entity_2, 'A', 30-1);
  entity_2[30-1]='';
  entity_3 = 97;
  entity_2[entity_3] = 'a';
}