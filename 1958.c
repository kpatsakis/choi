void fun()
{
  int entity_2 = 68;
  int entity_0 = 23;
  char* entity_9;
  char* entity_3;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[16-1]='';
  entity_9 = (char*)malloc(55*sizeof(char));
  entity_9[55-1]='';
  memset(entity_7, 't', entity_0-1);
  entity_7[entity_0-1]='';
  strcpy(entity_3, entity_7);
}