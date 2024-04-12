void fun()
{
  int entity_8 = 68;
  char* entity_7;
  char* entity_9;
  char* entity_0;
  char entity_1[40] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(42*sizeof(char));
  entity_7[42-1]='';
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[22-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_1, 'x', 40-1);
  entity_1[40-1]='';
  strcpy(entity_0, entity_1);
}