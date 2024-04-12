void fun()
{
  int entity_9 = 57;
  char entity_2[10] = "";
  entity_2 = NULL;
  memset(entity_2, 'f', 10-1);
  entity_2[10-1]='';
  entity_2[entity_9] = 'F';
}