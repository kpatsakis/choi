void fun()
{
  int entity_7 = 72;
  int entity_2 = 89;
  char entity_6[23] = "";
  entity_6 = NULL;
  memset(entity_6, 'T', 23-1);
  entity_6[23-1]='';
  entity_6[entity_7] = 'H';
}