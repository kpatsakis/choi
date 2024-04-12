void fun()
{
  char* entity_8;
  char entity_2[43] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'o', 43-1);
  entity_2[43-1]='';
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[44-1]='';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[96-1]='';
  strcpy(entity_8, entity_2);
}