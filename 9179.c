void fun()
{
  int entity_5 = 41;
  char entity_2[33] = "";
  entity_2 = NULL;
  memset(entity_2, 'o', 33-1);
  entity_2[33-1]='';
  entity_2[entity_5] = 'h';
}