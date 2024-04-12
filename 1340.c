void fun()
{
  int entity_8 = 32;
  char* entity_7;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', entity_8-1);
  entity_4[entity_8-1]='';
  entity_7 = (char*)malloc(47*sizeof(char));
  entity_7[47-1]='';
  strcpy(entity_7, entity_4);
}