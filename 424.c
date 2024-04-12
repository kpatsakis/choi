void fun()
{
  int entity_2 = 82;
  char entity_1[78] = "";
  entity_1 = NULL;
  char entity_5[41] = "";
  entity_5 = NULL;
  memset(entity_1, 'b', 78-1);
  entity_1[78-1]='';
  memset(entity_5, 'h', 41-1);
  entity_5[41-1]='';
  entity_1[entity_2] = 'W';
}