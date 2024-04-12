void fun()
{
  int entity_3 = 50;
  int entity_5 = 87;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'N', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[74] = 'D';
}