void fun()
{
  int entity_8 = 27;
  char* entity_4;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'k', entity_8-1);
  entity_7[entity_8-1]='';
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[29-1]='';
  memcpy(entity_4, entity_7, entity_8*sizeof(char));
}