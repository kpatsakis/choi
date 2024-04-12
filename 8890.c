void fun()
{
  int entity_7 = 5;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_1, 'M', entity_7-1);
  entity_1[entity_7-1]='';
  entity_1[35] = 'J';
}