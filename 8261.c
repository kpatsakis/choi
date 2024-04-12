void fun()
{
  int entity_5 = 54;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  memset(entity_3, 'u', entity_5-1);
  entity_3[entity_5-1]='';
  entity_5 = 48;
  entity_3[55] = 'N';
}