void fun()
{
  char entity_3[0] = "";
  entity_3 = NULL;
  char entity_8[70] = "";
  entity_8 = NULL;
  char* entity_4;
  memset(entity_8, 'S', 70-1);
  entity_8[70-1]='';
  entity_4 = (char*)malloc(96*sizeof(char));
  entity_4[96-1]='';
  memset(entity_3, 'h', 0-1);
  entity_3[0-1]='';
  strcpy(entity_4, entity_8);
}