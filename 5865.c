void fun()
{
  char* entity_9;
  char entity_1[8] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(29*sizeof(char));
  entity_9[29-1]='';
  memset(entity_1, 'x', 8-1);
  entity_1[8-1]='';
  memcpy(entity_9, entity_1, 8*sizeof(char));
}