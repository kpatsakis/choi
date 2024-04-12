void fun()
{
  int entity_5 = 62;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  memset(entity_4, 'k', entity_5-1);
  entity_4[entity_5-1]='';
  entity_4[41] = 'o';
}