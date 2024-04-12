void fun()
{
  int entity_2 = 1;
  int entity_3 = 49;
  char entity_4 = 'r';
  char entity_0[94] = "";
  entity_0 = NULL;
  char entity_5[55] = "";
  entity_5 = NULL;
  char* entity_1;
  memset(entity_0, 'b', 94-1);
  entity_0[94-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_5, 'B', 55-1);
  entity_5[55-1]='';
  strcpy(entity_1, entity_5);
}