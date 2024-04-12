void fun()
{
  int entity_5 = 20;
  entity_5 = 44;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[17] = 'Y';
}