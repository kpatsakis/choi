void fun()
{
  int entity_0 = 11;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  memset(entity_5, 'i', entity_0-1);
  entity_5[entity_0-1]='';
  entity_0 = 3;
  entity_5[7] = 'K';
}