void fun()
{
  char* entity_1;
  char* entity_6;
  char entity_2[31] = "";
  entity_2 = NULL;
  memset(entity_2, 'L', 31-1);
  entity_2[31-1]='';
  entity_1 = (char*)malloc(95*sizeof(char));
  entity_1[95-1]='';
  entity_6 = (char*)malloc(33*sizeof(char));
  entity_6[33-1]='';
  strcpy(entity_6, entity_2);
}