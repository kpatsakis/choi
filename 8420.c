void fun()
{
  int entity_7 = 88;
  entity_7 = 11;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', entity_7-1);
  entity_2[entity_7-1]='';
  entity_2[8] = 'V';
}