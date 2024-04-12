void fun()
{
  int entity_1 = 12;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'U', entity_1-1);
  entity_5[entity_1-1]='';
  entity_1 = 82;
  entity_5[80] = 'B';
}