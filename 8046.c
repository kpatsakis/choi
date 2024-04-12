void fun()
{
  int entity_1 = 22;
  entity_1 = 22;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(8*sizeof(char));
  entity_8[8-1]='';
  memset(entity_6, 'V', entity_1-1);
  entity_6[entity_1-1]='';
  strcpy(entity_8, entity_6);
}