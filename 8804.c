void fun()
{
  int entity_1 = 4;
  entity_1 = 9;
  char entity_9 = 'K';
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'V', entity_1-1);
  entity_3[entity_1-1]='';
  entity_3[67] = 'l';
}