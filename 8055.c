void fun()
{
  int entity_2 = 14;
  int entity_1 = 27;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_3 = 'p';
  memset(entity_5, 'C', entity_2-1);
  entity_5[entity_2-1]='';
  entity_2 = 17;
  entity_5[9] = 'f';
}