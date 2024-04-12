void fun()
{
  int entity_1 = 22;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_5;
  char* entity_8;
  memset(entity_0, 'j', entity_1-1);
  entity_0[entity_1-1]='';
  entity_5 = (char*)malloc(60*sizeof(char));
  entity_5[60-1]='';
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[97-1]='';
  strcpy(entity_5, entity_0);
}