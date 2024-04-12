void fun()
{
  char* entity_8;
  char entity_1 = 'D';
  char* entity_2;
  char entity_4[43] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(0*sizeof(char));
  entity_2[0-1]='';
  memset(entity_4, 'a', 43-1);
  entity_4[43-1]='';
  entity_8 = (char*)malloc(35*sizeof(char));
  entity_8[35-1]='';
  strcpy(entity_8, entity_4);
}