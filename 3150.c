void fun()
{
  char* entity_3;
  char entity_6[19] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(82*sizeof(char));
  entity_0[82-1]='';
  entity_3 = (char*)malloc(76*sizeof(char));
  entity_3[76-1]='';
  memset(entity_6, 'Z', 19-1);
  entity_6[19-1]='';
  strcpy(entity_3, entity_6);
}