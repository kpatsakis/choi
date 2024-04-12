void fun()
{
  int entity_4 = 95;
  char entity_2 = 'G';
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  memset(entity_5, 'G', entity_4-1);
  entity_5[entity_4-1]='';
  entity_5[37] = 'G';
}