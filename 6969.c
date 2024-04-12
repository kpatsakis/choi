void fun()
{
  int entity_6 = 81;
  entity_6 = 65;
  char entity_7[25] = "";
  entity_7 = NULL;
  memset(entity_7, 'E', 25-1);
  entity_7[25-1]='';
  entity_7[entity_6] = 'B';
}