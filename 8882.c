void fun()
{
  int entity_7 = 66;
  entity_7 = 34;
  char entity_6[32] = "";
  entity_6 = NULL;
  char entity_9[85] = "";
  entity_9 = NULL;
  memset(entity_6, 'M', 32-1);
  entity_6[32-1]='';
  memset(entity_9, 'B', 85-1);
  entity_9[85-1]='';
  entity_9[entity_7] = 'g';
}