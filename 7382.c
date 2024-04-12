void fun()
{
  char* entity_3;
  char* entity_7;
  char entity_8[40] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(48*sizeof(char));
  entity_7[48-1]='';
  entity_3 = (char*)malloc(15*sizeof(char));
  entity_3[15-1]='';
  memset(entity_8, 'M', 40-1);
  entity_8[40-1]='';
  strcpy(entity_3, entity_8);
}