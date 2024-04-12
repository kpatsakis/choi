void fun()
{
  char* entity_3;
  char entity_4[24] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(5*sizeof(char));
  entity_3[5-1]='';
  memset(entity_4, 'z', 24-1);
  entity_4[24-1]='';
  strcpy(entity_3, entity_4);
}