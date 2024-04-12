void fun()
{
  int entity_2 = 99;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  memset(entity_5, 'P', entity_2-1);
  entity_5[entity_2-1]='';
  entity_2 = 13;
  entity_5[40] = 'o';
}