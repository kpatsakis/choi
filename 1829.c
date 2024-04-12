void fun()
{
  char* entity_1;
  char entity_3[48] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(33*sizeof(char));
  entity_1[33-1]='';
  memset(entity_3, 'y', 48-1);
  entity_3[48-1]='';
  strcpy(entity_1, entity_3);
}