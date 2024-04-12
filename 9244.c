void fun()
{
  int entity_0 = 96;
  entity_0 = 20;
  char entity_6[77] = "";
  entity_6 = NULL;
  char entity_7[11] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'Y', 11-1);
  entity_7[11-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_6, 'z', 77-1);
  entity_6[77-1]='';
  strcpy(entity_8, entity_6);
}