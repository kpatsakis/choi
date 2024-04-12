void fun()
{
  int entity_0 = 89;
  char* entity_6;
  char* entity_1;
  char entity_8[8] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[80-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_8, 'D', 8-1);
  entity_8[8-1]='';
  strcpy(entity_1, entity_8);
}