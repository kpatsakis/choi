void fun()
{
  int entity_3 = 30;
  int entity_7 = 63;
  char entity_1[90] = "";
  entity_1 = NULL;
  char entity_9 = 'T';
  memset(entity_1, 'E', 90-1);
  entity_1[90-1]='';
  entity_1[entity_7] = 'T';
}