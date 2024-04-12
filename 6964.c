void fun()
{
  int entity_2 = 62;
  char entity_6[29] = "";
  entity_6 = NULL;
  char entity_0 = 'u';
  char* entity_5;
  memset(entity_6, 'D', 29-1);
  entity_6[29-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memcpy(entity_5, entity_6, 29*sizeof(char));
}