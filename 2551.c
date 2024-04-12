void fun()
{
  int entity_3 = 54;
  int entity_0 = 13;
  char* entity_7;
  char entity_6[46] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_6, 'c', 46-1);
  entity_6[46-1]='';
  memcpy(entity_7, entity_6, 46*sizeof(char));
}