void fun()
{
  int entity_3 = 90;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  memset(entity_4, 'l', entity_3-1);
  entity_4[entity_3-1]='';
  entity_4[6] = 'l';
}