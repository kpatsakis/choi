void fun()
{
  int entity_7 = 1;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char entity_1[51] = "";
  entity_1 = NULL;
  memset(entity_1, 'A', 51-1);
  entity_1[51-1]='';
  memset(entity_4, 'J', entity_7-1);
  entity_4[entity_7-1]='';
  entity_7 = 64;
  entity_4[57] = 'P';
}