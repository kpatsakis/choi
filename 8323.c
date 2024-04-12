void fun()
{
  int entity_5 = 43;
  int entity_1 = 85;
  char entity_0[72] = "";
  entity_0 = NULL;
  char entity_3 = 'E';
  char entity_4[90] = "";
  entity_4 = NULL;
  memset(entity_4, 'y', 90-1);
  entity_4[90-1]='';
  memset(entity_0, 'b', 72-1);
  entity_0[72-1]='';
  entity_5 = 72;
  entity_0[entity_5] = 'z';
}