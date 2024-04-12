void fun()
{
  int entity_6 = 34;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[76-1]='';
  memset(entity_4, 't', entity_6-1);
  entity_4[entity_6-1]='';
  strcpy(entity_8, entity_4);
}