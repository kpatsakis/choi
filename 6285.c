void fun()
{
  char* entity_3;
  char entity_2[50] = "";
  entity_2 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[81-1]='';
  memset(entity_2, 'R', 50-1);
  entity_2[50-1]='';
  entity_3 = (char*)malloc(27*sizeof(char));
  entity_3[27-1]='';
  strcpy(entity_3, entity_2);
}