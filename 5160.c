void fun()
{
  int entity_2 = 76;
  int entity_0 = 42;
  char entity_1[47] = "";
  entity_1 = NULL;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_1, 'F', 47-1);
  entity_1[47-1]='';
  memset(entity_7, 'Y', entity_2-1);
  entity_7[entity_2-1]='';
  entity_7[90] = 'V';
}