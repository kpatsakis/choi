void fun()
{
  int entity_8 = 93;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  memset(entity_6, 'M', entity_8-1);
  entity_6[entity_8-1]='';
  strcpy(entity_1, entity_6);
}