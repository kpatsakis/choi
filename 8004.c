void fun()
{
  int entity_6 = 11;
  char entity_7[47] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_7, 'q', 47-1);
  entity_7[47-1]='';
  strcpy(entity_8, entity_7);
}