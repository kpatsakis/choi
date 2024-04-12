void fun()
{
  int entity_9 = 31;
  char entity_1[6] = "";
  entity_1 = NULL;
  char entity_3[43] = "";
  entity_3 = NULL;
  memset(entity_3, 'Y', 43-1);
  entity_3[43-1]='';
  memset(entity_1, 'W', 6-1);
  entity_1[6-1]='';
  entity_3[entity_9] = 'n';
}