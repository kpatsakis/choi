void fun()
{
  int entity_7 = 69;
  entity_7 = 23;
  char* entity_6;
  char* entity_0;
  char entity_8[29] = "";
  entity_8 = NULL;
  memset(entity_8, 'x', 29-1);
  entity_8[29-1]='';
  entity_6 = (char*)malloc(27*sizeof(char));
  entity_6[27-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memcpy(entity_0, entity_8, 29*sizeof(char));
}