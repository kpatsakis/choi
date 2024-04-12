void fun()
{
  int entity_3 = 83;
  int entity_4 = 99;
  char entity_1[27] = "";
  entity_1 = NULL;
  char* entity_8;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char entity_7[22] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[93-1]='';
  memset(entity_9, 'q', entity_3-1);
  entity_9[entity_3-1]='';
  memset(entity_1, 'p', 27-1);
  entity_1[27-1]='';
  memset(entity_7, 'p', 22-1);
  entity_7[22-1]='';
  memcpy(entity_8, entity_9, entity_3*sizeof(char));
}