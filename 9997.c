void fun()
{
  int entity_6 = 72;
  char entity_4[23] = "";
  entity_4 = NULL;
  char entity_3[65] = "";
  entity_3 = NULL;
  char entity_1[66] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_4, 'K', 23-1);
  entity_4[23-1]='';
  entity_2 = (char*)malloc(86*sizeof(char));
  entity_2[86-1]='';
  memset(entity_1, 'P', 66-1);
  entity_1[66-1]='';
  memset(entity_3, 'y', 65-1);
  entity_3[65-1]='';
  strcpy(entity_2, entity_3);
}