void fun()
{
  char entity_3[75] = "";
  entity_3 = NULL;
  char entity_8[91] = "";
  entity_8 = NULL;
  char* entity_2;
  char* entity_1;
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[6-1]='';
  memset(entity_3, 'a', 75-1);
  entity_3[75-1]='';
  memset(entity_8, 'Y', 91-1);
  entity_8[91-1]='';
  entity_1 = (char*)malloc(19*sizeof(char));
  entity_1[19-1]='';
  strcpy(entity_1, entity_8);
}