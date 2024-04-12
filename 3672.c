void fun()
{
  int entity_9 = 96;
  entity_9 = 23;
  char entity_5[74] = "";
  entity_5 = NULL;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_3, 'E', entity_9-1);
  entity_3[entity_9-1]='';
  memset(entity_5, 'o', 74-1);
  entity_5[74-1]='';
  entity_3[80] = 'E';
}