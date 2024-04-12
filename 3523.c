void fun()
{
  char* entity_1;
  char entity_7[43] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_5[99] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[73-1]='';
  memset(entity_5, 'e', 99-1);
  entity_5[99-1]='';
  entity_3 = (char*)malloc(4*sizeof(char));
  entity_3[4-1]='';
  memset(entity_7, 'm', 43-1);
  entity_7[43-1]='';
  strcpy(entity_1, entity_5);
}