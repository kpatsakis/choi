void fun()
{
  int entity_2 = 76;
  entity_2 = 95;
  char entity_4[86] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', 86-1);
  entity_4[86-1]='';
  entity_4[entity_2] = 'f';
}