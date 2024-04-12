void fun()
{
  int entity_5 = 20;
  char entity_1[4] = "";
  entity_1 = NULL;
  memset(entity_1, 's', 4-1);
  entity_1[4-1]='';
  entity_5 = 8;
  entity_1[entity_5] = 'a';
}