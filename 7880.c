void fun()
{
  char* entity_1;
  char entity_4[69] = "";
  entity_4 = NULL;
  char entity_3[84] = "";
  entity_3 = NULL;
  char entity_8[17] = "";
  entity_8 = NULL;
  memset(entity_4, 'M', 69-1);
  entity_4[69-1]='';
  memset(entity_8, 'p', 17-1);
  entity_8[17-1]='';
  memset(entity_3, 'C', 84-1);
  entity_3[84-1]='';
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[73-1]='';
  strcpy(entity_1, entity_3);
}