void fun()
{
  int entity_8 = 63;
  char* entity_4;
  char entity_6[21] = "";
  entity_6 = NULL;
  char entity_7 = 'z';
  memset(entity_6, 'S', 21-1);
  entity_6[21-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  strcpy(entity_4, entity_6);
}