void fun()
{
  int entity_4 = 89;
  char entity_5 = 'M';
  char entity_6[76] = "";
  entity_6 = NULL;
  char* entity_8;
  char entity_1 = 'z';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_6, 'D', 76-1);
  entity_6[76-1]='';
  strcpy(entity_8, entity_6);
}