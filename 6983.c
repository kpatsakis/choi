void fun()
{
  int entity_3 = 18;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  memset(entity_4, 'K', entity_3-1);
  entity_4[entity_3-1]='';
  entity_4[6] = 'M';
}