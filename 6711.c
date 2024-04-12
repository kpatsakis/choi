void fun()
{
  int entity_1 = 31;
  entity_1 = 31;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'j', entity_1-1);
  entity_3[entity_1-1]='';
  entity_3[74] = 'b';
}