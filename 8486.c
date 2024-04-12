void fun()
{
  int entity_4 = 43;
  int entity_6 = 34;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'L', entity_4-1);
  entity_2[entity_4-1]='';
  entity_2[99] = 'c';
}