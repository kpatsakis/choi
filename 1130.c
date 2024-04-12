void fun()
{
  int entity_0 = 89;
  char* entity_7;
  char entity_6[86] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'E', 86-1);
  entity_6[86-1]='';
  entity_8 = (char*)malloc(48*sizeof(char));
  entity_8[48-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  entity_0 = 32;
  strcpy(entity_7, entity_6);
}