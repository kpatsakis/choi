void fun()
{
  int entity_6 = 33;
  int entity_4 = 1;
  char* entity_1;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char entity_2[63] = "";
  entity_2 = NULL;
  memset(entity_0, 'i', entity_4-1);
  entity_0[entity_4-1]='';
  entity_1 = (char*)malloc(93*sizeof(char));
  entity_1[93-1]='';
  memset(entity_2, 'W', 63-1);
  entity_2[63-1]='';
  entity_4 = 94;
  strcpy(entity_1, entity_0);
}