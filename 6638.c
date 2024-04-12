void fun()
{
  int entity_9 = 21;
  char entity_7[43] = "";
  entity_7 = NULL;
  memset(entity_7, 'i', 43-1);
  entity_7[43-1]='';
  entity_9 = 11;
  entity_7[entity_9] = 'F';
}