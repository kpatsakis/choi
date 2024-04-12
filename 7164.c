void fun()
{
  int entity_5 = 63;
  int entity_3 = 59;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'N', entity_5-1);
  entity_1[entity_5-1]='';
  entity_1[26] = 's';
}