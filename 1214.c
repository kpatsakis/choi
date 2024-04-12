void fun()
{
  int entity_8 = 85;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_4, 'J', entity_8-1);
  entity_4[entity_8-1]='';
  entity_4[11] = 'j';
}