void fun()
{
  int entity_5 = 51;
  entity_5 = 12;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char entity_0 = 'b';
  memset(entity_1, 'Y', entity_5-1);
  entity_1[entity_5-1]='';
  entity_1[25] = 'v';
}