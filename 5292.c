void fun()
{
  int entity_3 = 75;
  entity_3 = 80;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'j', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[54] = 'd';
}