void fun()
{
  int entity_5 = 22;
  entity_5 = 16;
  char* entity_7;
  char entity_3[29] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memset(entity_3, 'z', 29-1);
  entity_3[29-1]='';
  memcpy(entity_7, entity_3, 29*sizeof(char));
}