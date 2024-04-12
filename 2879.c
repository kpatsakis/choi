void fun()
{
  char* entity_0;
  char entity_3[6] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(12*sizeof(char));
  entity_0[12-1]='';
  memset(entity_3, 'f', 6-1);
  entity_3[6-1]='';
  strcpy(entity_0, entity_3);
}