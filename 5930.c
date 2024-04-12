void fun()
{
  int entity_0 = 10;
  entity_0 = 8;
  char entity_5[44] = "";
  entity_5 = NULL;
  char entity_2[76] = "";
  entity_2 = NULL;
  char* entity_8;
  memset(entity_5, 'N', 44-1);
  entity_5[44-1]='';
  memset(entity_2, 'F', 76-1);
  entity_2[76-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memcpy(entity_8, entity_5, 44*sizeof(char));
}