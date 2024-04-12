void fun()
{
  int entity_6 = 20;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'z', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 6;
  entity_4[99] = 'B';
}