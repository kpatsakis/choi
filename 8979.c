void fun()
{
  int entity_9 = 44;
  char* entity_7;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_8;
  entity_7 = (char*)malloc(81*sizeof(char));
  entity_7[81-1]='';
  memset(entity_5, 'y', entity_9-1);
  entity_5[entity_9-1]='';
  entity_8 = (char*)malloc(59*sizeof(char));
  entity_8[59-1]='';
  memcpy(entity_8, entity_5, entity_9*sizeof(char));
}