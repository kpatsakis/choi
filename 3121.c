void fun()
{
  char entity_4[18] = "";
  entity_4 = NULL;
  char entity_0 = 'N';
  char entity_1[47] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_3 = 'L';
  memset(entity_4, 'Y', 18-1);
  entity_4[18-1]='';
  memset(entity_1, 'z', 47-1);
  entity_1[47-1]='';
  entity_5 = (char*)malloc(73*sizeof(char));
  entity_5[73-1]='';
  strcpy(entity_5, entity_1);
}