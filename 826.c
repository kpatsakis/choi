void fun()
{
  int entity_6 = 8;
  char entity_1 = 'F';
  char entity_9[42] = "";
  entity_9 = NULL;
  char* entity_4;
  char entity_0[41] = "";
  entity_0 = NULL;
  char entity_7 = 'U';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_0, 'O', 41-1);
  entity_0[41-1]='';
  memset(entity_9, 'C', 42-1);
  entity_9[42-1]='';
  strcpy(entity_4, entity_9);
}