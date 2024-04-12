void fun()
{
  int entity_1 = 8;
  entity_1 = 58;
  char entity_9[29] = "";
  entity_9 = NULL;
  char* entity_8;
  char* entity_7;
  memset(entity_9, 'y', 29-1);
  entity_9[29-1]='';
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[67-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memcpy(entity_7, entity_9, 29*sizeof(char));
}