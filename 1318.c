void fun()
{
  int entity_8 = 80;
  char entity_7[87] = "";
  entity_7 = NULL;
  memset(entity_7, 'k', 87-1);
  entity_7[87-1]='';
  entity_8 = 22;
  entity_7[entity_8] = 'I';
}