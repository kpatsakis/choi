void fun()
{
  int entity_1 = 64;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'g', entity_1-1);
  entity_7[entity_1-1]='';
  entity_7[36] = 'U';
}