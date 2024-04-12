void fun()
{
  int entity_5 = 61;
  int entity_2 = 30;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 't', entity_5-1);
  entity_1[entity_5-1]='';
  entity_5 = 96;
  entity_1[4] = 'A';
}