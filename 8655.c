void fun()
{
  char entity_8[60] = "";
  entity_8 = NULL;
  char entity_6 = 'S';
  char* entity_7;
  char entity_2 = 'E';
  entity_7 = (char*)malloc(12*sizeof(char));
  entity_7[12-1]='';
  memset(entity_8, 'e', 60-1);
  entity_8[60-1]='';
  strcpy(entity_7, entity_8);
}