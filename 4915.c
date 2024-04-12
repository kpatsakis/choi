void fun()
{
  int entity_6 = 1;
  entity_6 = 96;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char entity_1[35] = "";
  entity_1 = NULL;
  memset(entity_1, 'p', 35-1);
  entity_1[35-1]='';
  memset(entity_7, 'H', entity_6-1);
  entity_7[entity_6-1]='';
  entity_7[100] = 'C';
}