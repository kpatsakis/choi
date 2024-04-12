void fun()
{
  int entity_2 = 48;
  int entity_8 = 43;
  entity_8 = 43;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_0;
  char* entity_6;
  memset(entity_7, 'm', entity_8-1);
  entity_7[entity_8-1]='';
  entity_6 = (char*)malloc(76*sizeof(char));
  entity_6[76-1]='';
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[97-1]='';
  strcpy(entity_6, entity_7);
}