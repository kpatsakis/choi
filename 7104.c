void fun()
{
  int entity_7 = 35;
  entity_7 = 72;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'i', entity_7-1);
  entity_8[entity_7-1]='';
  entity_8[10] = 'K';
}