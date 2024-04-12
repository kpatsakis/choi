void fun()
{
  int entity_9 = 17;
  char entity_6[81] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_7 = 'o';
  char* entity_5;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memset(entity_6, 'F', 81-1);
  entity_6[81-1]='';
  entity_5 = (char*)malloc(79*sizeof(char));
  entity_5[79-1]='';
  memcpy(entity_4, entity_6, 81*sizeof(char));
}