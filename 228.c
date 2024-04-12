void fun()
{
  int entity_8 = 38;
  char* entity_5;
  char entity_2 = 'i';
  char entity_7[36] = "";
  entity_7 = NULL;
  memset(entity_7, 'P', 36-1);
  entity_7[36-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  entity_8 = 72;
  strcpy(entity_5, entity_7);
}