void fun()
{
  int entity_5 = 5;
  entity_5 = 73;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'n', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[18] = 'H';
}