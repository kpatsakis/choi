void fun()
{
  char entity_3 = 'N';
  char entity_7[65] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'l', 65-1);
  entity_7[65-1]='';
  entity_4 = (char*)malloc(74*sizeof(char));
  entity_4[74-1]='';
  strcpy(entity_4, entity_7);
}