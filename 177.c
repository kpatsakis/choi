void fun()
{
  int entity_0 = 85;
  char* entity_4;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char entity_7 = 'f';
  char* entity_9;
  memset(entity_2, 'g', entity_0-1);
  entity_2[entity_0-1]='';
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[93-1]='';
  entity_9 = (char*)malloc(87*sizeof(char));
  entity_9[87-1]='';
  memcpy(entity_9, entity_2, entity_0*sizeof(char));
}