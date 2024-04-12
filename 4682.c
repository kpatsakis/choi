void fun()
{
  int entity_5 = 7;
  char entity_1[65] = "";
  entity_1 = NULL;
  memset(entity_1, 'd', 65-1);
  entity_1[65-1]='';
  entity_5 = 17;
  entity_1[entity_5] = 'T';
}