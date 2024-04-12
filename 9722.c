void fun()
{
  int entity_2 = 43;
  char entity_4[5] = "";
  entity_4 = NULL;
  memset(entity_4, 'K', 5-1);
  entity_4[5-1]='';
  entity_4[entity_2] = 'P';
}