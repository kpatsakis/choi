void fun()
{
  int entity_1 = 29;
  char entity_9[63] = "";
  entity_9 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_4 = 'N';
  char* entity_8;
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  memset(entity_9, 'O', 63-1);
  entity_9[63-1]='';
  memset(entity_0, 'B', entity_1-1);
  entity_0[entity_1-1]='';
  strcpy(entity_8, entity_0);
}