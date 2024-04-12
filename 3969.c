void fun()
{
  int entity_1 = 78;
  int entity_4 = 89;
  entity_1 = 3;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'S', entity_1-1);
  entity_7[entity_1-1]='';
  entity_7[5] = 'F';
}