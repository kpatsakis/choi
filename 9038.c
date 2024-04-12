void fun()
{
  int entity_7 = 2;
  int entity_5 = 17;
  entity_7 = 23;
  char entity_1[20] = "";
  entity_1 = NULL;
  memset(entity_1, 'N', 20-1);
  entity_1[20-1]='';
  entity_1[entity_7] = 'f';
}