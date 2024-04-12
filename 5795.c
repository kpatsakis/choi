void fun()
{
  int entity_2 = 89;
  entity_2 = 34;
  char entity_0[59] = "";
  entity_0 = NULL;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_0, 'f', 59-1);
  entity_0[59-1]='';
  memset(entity_1, 'r', entity_2-1);
  entity_1[entity_2-1]='';
  entity_1[57] = 'r';
}