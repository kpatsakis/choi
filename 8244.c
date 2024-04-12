void fun()
{
  int entity_9 = 15;
  entity_9 = 77;
  char entity_6[9] = "";
  entity_6 = NULL;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'r', entity_9-1);
  entity_7[entity_9-1]='';
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[81-1]='';
  memset(entity_6, 'Z', 9-1);
  entity_6[9-1]='';
  memcpy(entity_4, entity_7, entity_9*sizeof(char));
}