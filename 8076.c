void fun()
{
  int entity_4 = 93;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char entity_8 = 'Y';
  memset(entity_2, 'U', entity_4-1);
  entity_2[entity_4-1]='';
  entity_4 = 52;
  entity_2[3] = 't';
}