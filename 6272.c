void fun()
{
  int entity_3 = 46;
  entity_3 = 79;
  char entity_5[55] = "";
  entity_5 = NULL;
  memset(entity_5, 'a', 55-1);
  entity_5[55-1]='';
  entity_5[entity_3] = 'T';
}