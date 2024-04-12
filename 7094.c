void fun()
{
  int entity_2 = 94;
  entity_2 = 94;
  char entity_0[34] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(3*sizeof(char));
  entity_1[3-1]='';
  memset(entity_5, 'U', entity_2-1);
  entity_5[entity_2-1]='';
  memset(entity_0, 'o', 34-1);
  entity_0[34-1]='';
  strcpy(entity_1, entity_5);
}