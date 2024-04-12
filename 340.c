void fun()
{
  int entity_5 = 66;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char entity_9 = 'i';
  memset(entity_1, 'c', entity_5-1);
  entity_1[entity_5-1]='';
  entity_5 = 76;
  entity_1[38] = 'z';
}