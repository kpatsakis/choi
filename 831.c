void fun()
{
  int entity_0 = 58;
  int entity_1 = 95;
  int entity_2 = 21;
  char entity_3[96] = "";
  entity_3 = NULL;
  char entity_9[35] = "";
  entity_9 = NULL;
  memset(entity_3, 'h', 96-1);
  entity_3[96-1]='';
  memset(entity_9, 'y', 35-1);
  entity_9[35-1]='';
  entity_9[entity_0] = 'f';
}