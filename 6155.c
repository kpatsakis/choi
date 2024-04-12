void fun()
{
  int entity_7 = 63;
  char entity_4[68] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', 68-1);
  entity_4[68-1]='';
  entity_4[entity_7] = 't';
}