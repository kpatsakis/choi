void fun()
{
  int entity_9 = 81;
  char entity_6[4] = "";
  entity_6 = NULL;
  char* entity_1;
  char* entity_4;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(38*sizeof(char));
  entity_4[38-1]='';
  memset(entity_0, 'r', entity_9-1);
  entity_0[entity_9-1]='';
  memset(entity_6, 'v', 4-1);
  entity_6[4-1]='';
  entity_1 = (char*)malloc(9*sizeof(char));
  entity_1[9-1]='';
  strcpy(entity_1, entity_0);
}