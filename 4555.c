void fun()
{
  int entity_9 = 40;
  int entity_0 = 89;
  entity_9 = 52;
  char* entity_6;
  char entity_4[22] = "";
  entity_4 = NULL;
  char entity_1[85] = "";
  entity_1 = NULL;
  char entity_5[26] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_1, 'H', 85-1);
  entity_1[85-1]='';
  memset(entity_4, 'W', 22-1);
  entity_4[22-1]='';
  memset(entity_5, 'i', 26-1);
  entity_5[26-1]='';
  strcpy(entity_6, entity_4);
}