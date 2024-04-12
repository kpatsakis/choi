void fun()
{
  int entity_7 = 51;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_4, 'i', entity_7-1);
  entity_4[entity_7-1]='';
  entity_4[3] = 'u';
}