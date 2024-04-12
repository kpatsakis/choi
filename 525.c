void fun()
{
  int entity_1 = 89;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'f', entity_1-1);
  entity_7[entity_1-1]='';
  entity_1 = 87;
  entity_7[7] = 'g';
}