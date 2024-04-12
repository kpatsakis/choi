void fun()
{
  int entity_4 = 75;
  char entity_0 = 'D';
  char entity_2[34] = "";
  entity_2 = NULL;
  char entity_3 = 'c';
  memset(entity_2, 'B', 34-1);
  entity_2[34-1]='';
  entity_2[entity_4] = 't';
}