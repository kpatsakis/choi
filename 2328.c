void fun()
{
  char entity_8[53] = "";
  entity_8 = NULL;
  char entity_9 = 'f';
  char* entity_3;
  char entity_7[54] = "";
  entity_7 = NULL;
  memset(entity_7, 'X', 54-1);
  entity_7[54-1]='';
  entity_3 = (char*)malloc(10*sizeof(char));
  entity_3[10-1]='';
  memset(entity_8, 'V', 53-1);
  entity_8[53-1]='';
  strcpy(entity_3, entity_7);
}