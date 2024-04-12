void fun()
{
  int entity_7 = 16;
  char entity_1[2] = "";
  entity_1 = NULL;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_1, 't', 2-1);
  entity_1[2-1]='';
  memset(entity_4, 'A', entity_7-1);
  entity_4[entity_7-1]='';
  entity_4[49] = 'h';
}