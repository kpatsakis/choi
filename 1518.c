void fun()
{
  int entity_9 = 83;
  int entity_4 = 42;
  int entity_5 = 57;
  entity_9 = 5;
  char entity_1 = 'x';
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 'F', entity_9-1);
  entity_2[entity_9-1]='';
  entity_2[6] = 'U';
}