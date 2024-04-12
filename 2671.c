void fun()
{
  int entity_2 = 59;
  char entity_3 = 'd';
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 'O', entity_2-1);
  entity_1[entity_2-1]='';
  entity_1[98] = 'F';
}