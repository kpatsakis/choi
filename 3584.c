void fun()
{
  int entity_4 = 92;
  int entity_2 = 4;
  char entity_5[51] = "";
  entity_5 = NULL;
  memset(entity_5, 'a', 51-1);
  entity_5[51-1]='';
  entity_5[entity_4] = 'V';
}