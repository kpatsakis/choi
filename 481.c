void fun()
{
  char* entity_2;
  char entity_8[88] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(23*sizeof(char));
  entity_6[23-1]='';
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[6-1]='';
  memset(entity_8, 'u', 88-1);
  entity_8[88-1]='';
  strcpy(entity_6, entity_8);
}