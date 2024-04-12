void fun()
{
  int entity_9 = 80;
  entity_9 = 66;
  char entity_3[10] = "";
  entity_3 = NULL;
  memset(entity_3, 'O', 10-1);
  entity_3[10-1]='';
  entity_3[entity_9] = 'u';
}