void fun()
{
  int entity_7 = 13;
  entity_7 = 46;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  memset(entity_2, 'H', entity_7-1);
  entity_2[entity_7-1]='';
  entity_2[19] = 'n';
}