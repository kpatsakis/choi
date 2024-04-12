void fun()
{
  int entity_1 = 92;
  int entity_4 = 89;
  char entity_6 = 'I';
  char entity_8[2] = "";
  entity_8 = NULL;
  char entity_7 = 'd';
  memset(entity_8, 'C', 2-1);
  entity_8[2-1]='';
  entity_8[entity_1] = 'C';
}