void fun()
{
  int entity_1 = 48;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  memset(entity_8, 'r', entity_1-1);
  entity_8[entity_1-1]='';
  entity_1 = 97;
  entity_8[65] = 'N';
}