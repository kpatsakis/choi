void fun()
{
  int entity_0 = 48;
  char* entity_7;
  char* entity_3;
  char entity_8[18] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(86*sizeof(char));
  entity_6[86-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_8, 'k', 18-1);
  entity_8[18-1]='';
  entity_3 = (char*)malloc(12*sizeof(char));
  entity_3[12-1]='';
  strcpy(entity_7, entity_8);
}