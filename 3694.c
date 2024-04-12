void fun()
{
  int entity_8 = 75;
  entity_8 = 65;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_6;
  char* entity_3;
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[30-1]='';
  entity_3 = (char*)malloc(80*sizeof(char));
  entity_3[80-1]='';
  memset(entity_9, 'K', entity_8-1);
  entity_9[entity_8-1]='';
  memcpy(entity_3, entity_9, entity_8*sizeof(char));
}