void fun()
{
  int entity_0 = 50;
  entity_0 = 75;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  memset(entity_3, 'R', entity_0-1);
  entity_3[entity_0-1]='';
  entity_3[36] = 'O';
}