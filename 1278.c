void fun()
{
  int entity_0 = 4;
  int entity_3 = 63;
  char* entity_4;
  char entity_6[78] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'l', 78-1);
  entity_6[78-1]='';
  entity_8 = (char*)malloc(17*sizeof(char));
  entity_8[17-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  strcpy(entity_4, entity_6);
}