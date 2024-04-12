void fun()
{
  int entity_5 = 37;
  int entity_0 = 55;
  entity_0 = 62;
  char* entity_9;
  char entity_4[93] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_4, 'n', 93-1);
  entity_4[93-1]='';
  entity_2 = (char*)malloc(25*sizeof(char));
  entity_2[25-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memcpy(entity_9, entity_4, 93*sizeof(char));
}