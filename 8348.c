void fun()
{
  int entity_1 = 51;
  int entity_6 = 32;
  entity_1 = 47;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 'I', entity_1-1);
  entity_2[entity_1-1]='';
  entity_2[59] = 'x';
}