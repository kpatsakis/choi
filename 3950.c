void fun()
{
  char entity_5[75] = "";
  entity_5 = NULL;
  char entity_8[46] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'N', 46-1);
  entity_8[46-1]='';
  memset(entity_5, 'O', 75-1);
  entity_5[75-1]='';
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[68-1]='';
  strcpy(entity_6, entity_8);
}