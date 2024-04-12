void fun()
{
  char entity_7[65] = "";
  entity_7 = NULL;
  char* entity_0;
  char entity_8[72] = "";
  entity_8 = NULL;
  char entity_9 = 'N';
  char entity_3[25] = "";
  entity_3 = NULL;
  memset(entity_8, 'R', 72-1);
  entity_8[72-1]='';
  memset(entity_7, 'G', 65-1);
  entity_7[65-1]='';
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[25-1]='';
  memset(entity_3, 'u', 25-1);
  entity_3[25-1]='';
  strcpy(entity_0, entity_7);
}