void fun()
{
  int entity_0 = 49;
  int entity_3 = 10;
  char entity_7[3] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'd', 3-1);
  entity_7[3-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  strcpy(entity_8, entity_7);
}