void fun()
{
  char* entity_4;
  char* entity_5;
  char entity_1[84] = "";
  entity_1 = NULL;
  char entity_3[12] = "";
  entity_3 = NULL;
  char entity_2 = 'T';
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  memset(entity_3, 'K', 12-1);
  entity_3[12-1]='';
  entity_5 = (char*)malloc(25*sizeof(char));
  entity_5[25-1]='';
  memset(entity_1, 'z', 84-1);
  entity_1[84-1]='';
  strcpy(entity_4, entity_3);
}