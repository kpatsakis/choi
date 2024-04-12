void fun()
{
  char* entity_2;
  char entity_7[41] = "";
  entity_7 = NULL;
  char entity_1[76] = "";
  entity_1 = NULL;
  memset(entity_7, 'z', 41-1);
  entity_7[41-1]='';
  memset(entity_1, 'A', 76-1);
  entity_1[76-1]='';
  entity_2 = (char*)malloc(80*sizeof(char));
  entity_2[80-1]='';
  strcpy(entity_2, entity_7);
}