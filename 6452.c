void fun()
{
  int entity_7 = 43;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char entity_4[9] = "";
  entity_4 = NULL;
  memset(entity_2, 'c', entity_7-1);
  entity_2[entity_7-1]='';
  memset(entity_4, 'a', 9-1);
  entity_4[9-1]='';
  entity_2[96] = 'n';
}