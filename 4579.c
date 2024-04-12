void fun()
{
  int entity_9 = 38;
  char* entity_0;
  char entity_3 = 'E';
  char entity_7[29] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_6 = 'l';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  entity_5 = (char*)malloc(83*sizeof(char));
  entity_5[83-1]='';
  memset(entity_7, 'i', 29-1);
  entity_7[29-1]='';
  entity_9 = 62;
  memcpy(entity_0, entity_7, 29*sizeof(char));
}