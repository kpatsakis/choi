void fun()
{
  int entity_5 = 62;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  memset(entity_4, 's', entity_5-1);
  entity_4[entity_5-1]='';
  entity_5 = 78;
  entity_4[19] = 'w';
}