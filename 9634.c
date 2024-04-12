void fun()
{
  int entity_7 = 44;
  int entity_0 = 37;
  char* entity_1;
  char* entity_8;
  char entity_6[44] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[31-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_6, 'S', 44-1);
  entity_6[44-1]='';
  entity_0 = 2;
  strcpy(entity_1, entity_6);
}