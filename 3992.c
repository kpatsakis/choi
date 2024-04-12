void fun()
{
  int entity_3 = 33;
  char entity_2[67] = "";
  entity_2 = NULL;
  char entity_1[60] = "";
  entity_1 = NULL;
  memset(entity_2, 'B', 67-1);
  entity_2[67-1]='';
  memset(entity_1, 'U', 60-1);
  entity_1[60-1]='';
  entity_2[entity_3] = 'i';
}