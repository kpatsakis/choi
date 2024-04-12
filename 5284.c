void fun()
{
  int entity_9 = 79;
  char entity_4 = 'T';
  char entity_6[68] = "";
  entity_6 = NULL;
  memset(entity_6, 'z', 68-1);
  entity_6[68-1]='';
  entity_6[entity_9] = 'g';
}