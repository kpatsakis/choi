void fun()
{
  int entity_1 = 76;
  entity_1 = 13;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 's', entity_1-1);
  entity_6[entity_1-1]='';
  entity_6[8] = 'x';
}