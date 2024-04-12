void fun()
{
  int entity_1 = 64;
  int entity_4 = 94;
  char entity_3 = 'g';
  char entity_6[32] = "";
  entity_6 = NULL;
  memset(entity_6, 'm', 32-1);
  entity_6[32-1]='';
  entity_1 = 17;
  entity_6[entity_1] = 'M';
}