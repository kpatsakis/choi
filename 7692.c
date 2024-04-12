void fun()
{
  int entity_9 = 95;
  char* entity_7;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char entity_1[71] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(87*sizeof(char));
  entity_0[87-1]='';
  entity_7 = (char*)malloc(32*sizeof(char));
  entity_7[32-1]='';
  memset(entity_1, 'v', 71-1);
  entity_1[71-1]='';
  memset(entity_3, 'P', entity_9-1);
  entity_3[entity_9-1]='';
  strcpy(entity_7, entity_3);
}