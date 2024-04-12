void fun()
{
  int entity_1 = 36;
  char* entity_6;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_4 = 'Q';
  char entity_7[34] = "";
  entity_7 = NULL;
  memset(entity_9, 'j', entity_1-1);
  entity_9[entity_1-1]='';
  entity_6 = (char*)malloc(97*sizeof(char));
  entity_6[97-1]='';
  memset(entity_7, 'z', 34-1);
  entity_7[34-1]='';
  entity_1 = 86;
  memcpy(entity_6, entity_9, entity_1*sizeof(char));
}