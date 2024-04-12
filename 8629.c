void fun()
{
  int entity_4 = 28;
  int entity_8 = 5;
  char entity_7[55] = "";
  entity_7 = NULL;
  char entity_3 = 'l';
  memset(entity_7, 'P', 55-1);
  entity_7[55-1]='';
  entity_7[entity_8] = 'C';
}