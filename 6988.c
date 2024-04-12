void fun()
{
  int entity_8 = 27;
  char* entity_7;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  memset(entity_6, 'V', entity_8-1);
  entity_6[entity_8-1]='';
  entity_7 = (char*)malloc(12*sizeof(char));
  entity_7[12-1]='';
  strcpy(entity_7, entity_6);
}