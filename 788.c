void fun()
{
  int entity_0 = 65;
  entity_0 = 46;
  char entity_8 = 'A';
  char entity_9[74] = "";
  entity_9 = NULL;
  memset(entity_9, 'X', 74-1);
  entity_9[74-1]='';
  entity_9[entity_0] = 'L';
}