void fun()
{
  int entity_8 = 49;
  char* entity_9;
  char entity_3 = 'i';
  char entity_1[29] = "";
  entity_1 = NULL;
  memset(entity_1, 'T', 29-1);
  entity_1[29-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memcpy(entity_9, entity_1, 29*sizeof(char));
}