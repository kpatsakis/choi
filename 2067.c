void fun()
{
  int entity_5 = 56;
  int entity_7 = 81;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_1, 'y', entity_7-1);
  entity_1[entity_7-1]='';
  entity_1[79] = 'C';
}