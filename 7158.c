void fun()
{
  int entity_1 = 38;
  char entity_7[30] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'h', 30-1);
  entity_7[30-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  strcpy(entity_8, entity_7);
}