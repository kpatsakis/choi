void fun()
{
  int entity_1 = 67;
  char* entity_3;
  char entity_8[24] = "";
  entity_8 = NULL;
  char* entity_7;
  char entity_6[76] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_8, 'L', 24-1);
  entity_8[24-1]='';
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  memset(entity_6, 'f', 76-1);
  entity_6[76-1]='';
  entity_1 = 20;
  strcpy(entity_3, entity_8);
}