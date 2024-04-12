void fun()
{
  int entity_4 = 60;
  entity_4 = 66;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'd', entity_4-1);
  entity_1[entity_4-1]='';
  entity_1[89] = 'F';
}