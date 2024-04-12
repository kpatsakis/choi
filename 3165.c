void fun()
{
  int entity_0 = 43;
  char* entity_4;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[85-1]='';
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[93-1]='';
  memset(entity_2, 'Y', entity_0-1);
  entity_2[entity_0-1]='';
  memcpy(entity_4, entity_2, entity_0*sizeof(char));
}