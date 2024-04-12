void fun()
{
  char entity_7[63] = "";
  entity_7 = NULL;
  char entity_3[54] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_7, 'a', 63-1);
  entity_7[63-1]='';
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[30-1]='';
  memset(entity_3, 'r', 54-1);
  entity_3[54-1]='';
  strcpy(entity_6, entity_7);
}