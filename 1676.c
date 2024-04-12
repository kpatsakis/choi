void fun()
{
  int entity_3 = 37;
  char entity_1[34] = "";
  entity_1 = NULL;
  char entity_2[80] = "";
  entity_2 = NULL;
  char entity_8 = 'I';
  memset(entity_1, 'F', 34-1);
  entity_1[34-1]='';
  memset(entity_2, 'r', 80-1);
  entity_2[80-1]='';
  entity_1[entity_3] = 't';
}