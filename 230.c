void fun()
{
  int entity_2 = 53;
  int entity_9 = 57;
  char entity_7[78] = "";
  entity_7 = NULL;
  memset(entity_7, 'x', 78-1);
  entity_7[78-1]='';
  entity_7[entity_9] = 'u';
}