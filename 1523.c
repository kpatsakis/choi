void fun()
{
  char* entity_7;
  char entity_8[4] = "";
  entity_8 = NULL;
  char entity_6 = 't';
  memset(entity_8, 'm', 4-1);
  entity_8[4-1]='';
  entity_7 = (char*)malloc(12*sizeof(char));
  entity_7[12-1]='';
  strcpy(entity_7, entity_8);
}