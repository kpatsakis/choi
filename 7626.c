void fun()
{
  char* entity_1;
  char* entity_4;
  char entity_7[18] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(27*sizeof(char));
  entity_4[27-1]='';
  memset(entity_7, 'z', 18-1);
  entity_7[18-1]='';
  entity_1 = (char*)malloc(75*sizeof(char));
  entity_1[75-1]='';
  strcpy(entity_4, entity_7);
}