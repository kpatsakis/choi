void fun()
{
  int entity_9 = 7;
  char entity_1[41] = "";
  entity_1 = NULL;
  char* entity_0;
  char* entity_5;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(23*sizeof(char));
  entity_5[23-1]='';
  memset(entity_6, 'R', entity_9-1);
  entity_6[entity_9-1]='';
  memset(entity_1, 'r', 41-1);
  entity_1[41-1]='';
  entity_0 = (char*)malloc(1*sizeof(char));
  entity_0[1-1]='';
  strcpy(entity_5, entity_6);
}