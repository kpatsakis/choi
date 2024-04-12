void fun()
{
  int entity_8 = 35;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'I', entity_8-1);
  entity_7[entity_8-1]='';
  entity_7[46] = 'Z';
}