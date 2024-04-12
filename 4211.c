void fun()
{
  int entity_6 = 46;
  entity_6 = 64;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'P', entity_6-1);
  entity_4[entity_6-1]='';
  entity_4[47] = 'I';
}