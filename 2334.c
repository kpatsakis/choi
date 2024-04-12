void fun()
{
  int entity_8 = 69;
  int entity_0 = 11;
  char entity_4[89] = "";
  entity_4 = NULL;
  char entity_9[81] = "";
  entity_9 = NULL;
  char* entity_2;
  char* entity_7;
  memset(entity_9, 'S', 81-1);
  entity_9[81-1]='';
  memset(entity_4, 'Q', 89-1);
  entity_4[89-1]='';
  entity_2 = (char*)malloc(12*sizeof(char));
  entity_2[12-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memcpy(entity_7, entity_4, 89*sizeof(char));
}