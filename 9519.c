void fun()
{
  int entity_7 = 43;
  int entity_3 = 55;
  char entity_0[67] = "";
  entity_0 = NULL;
  char entity_5 = 'd';
  char entity_2[8] = "";
  entity_2 = NULL;
  memset(entity_0, 'p', 67-1);
  entity_0[67-1]='';
  memset(entity_2, 'a', 8-1);
  entity_2[8-1]='';
  entity_0[entity_3] = 's';
}