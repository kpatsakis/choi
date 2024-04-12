void fun()
{
  int entity_8 = 67;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'r', entity_8-1);
  entity_7[entity_8-1]='';
  entity_8 = 89;
  entity_7[57] = 'q';
}