void fun()
{
  int entity_3 = 67;
  char entity_7[33] = "";
  entity_7 = NULL;
  char entity_2[32] = "";
  entity_2 = NULL;
  memset(entity_7, 'L', 33-1);
  entity_7[33-1]='';
  memset(entity_2, 'P', 32-1);
  entity_2[32-1]='';
  entity_7[entity_3] = 'N';
}