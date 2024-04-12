void fun()
{
  int entity_6 = 75;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'c', entity_6-1);
  entity_2[entity_6-1]='';
  entity_2[30] = 'G';
}