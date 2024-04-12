void fun()
{
  int entity_8 = 38;
  char entity_9[55] = "";
  entity_9 = NULL;
  char entity_3[48] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_3, 'V', 48-1);
  entity_3[48-1]='';
  memset(entity_9, 'F', 55-1);
  entity_9[55-1]='';
  strcpy(entity_7, entity_3);
}