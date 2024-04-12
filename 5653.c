void fun()
{
  int entity_4 = 28;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', entity_4-1);
  entity_8[entity_4-1]='';
  entity_4 = 28;
  entity_8[52] = 'H';
}