void fun()
{
  int entity_4 = 11;
  entity_4 = 71;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char entity_9 = 'P';
  memset(entity_8, 'i', entity_4-1);
  entity_8[entity_4-1]='';
  entity_8[64] = 'D';
}