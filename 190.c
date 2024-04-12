void fun()
{
  int entity_3 = 8;
  char entity_8[29] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'c', 29-1);
  entity_8[29-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memcpy(entity_1, entity_8, 29*sizeof(char));
}