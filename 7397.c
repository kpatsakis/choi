void fun()
{
  int entity_6 = 22;
  entity_6 = 64;
  char* entity_0;
  char entity_8[17] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_5 = 'A';
  char entity_9[36] = "";
  entity_9 = NULL;
  memset(entity_8, 'C', 17-1);
  entity_8[17-1]='';
  entity_0 = (char*)malloc(27*sizeof(char));
  entity_0[27-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_9, 'b', 36-1);
  entity_9[36-1]='';
  strcpy(entity_1, entity_9);
}