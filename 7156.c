void fun()
{
  int entity_4 = 83;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'p', entity_4-1);
  entity_7[entity_4-1]='';
  entity_4 = 69;
  entity_7[43] = 'e';
}