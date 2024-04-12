void fun()
{
  int entity_0 = 57;
  char* entity_7;
  char* entity_4;
  char* entity_5;
  char entity_3[6] = "";
  entity_3 = NULL;
  char entity_1 = 'F';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  entity_5 = (char*)malloc(38*sizeof(char));
  entity_5[38-1]='';
  memset(entity_3, 'F', 6-1);
  entity_3[6-1]='';
  entity_4 = (char*)malloc(27*sizeof(char));
  entity_4[27-1]='';
  entity_0 = 26;
  strcpy(entity_7, entity_3);
}