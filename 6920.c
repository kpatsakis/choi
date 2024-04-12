void fun()
{
  int entity_8 = 53;
  entity_8 = 16;
  char entity_6[38] = "";
  entity_6 = NULL;
  char entity_3[72] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_2[11] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'E', 11-1);
  entity_2[11-1]='';
  memset(entity_6, 'T', 38-1);
  entity_6[38-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_3, 'O', 72-1);
  entity_3[72-1]='';
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  strcpy(entity_0, entity_3);
}