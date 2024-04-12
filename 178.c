void fun()
{
  char entity_3[80] = "";
  entity_3 = NULL;
  char entity_6 = 'i';
  char* entity_0;
  memset(entity_3, 'd', 80-1);
  entity_3[80-1]='';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  strcpy(entity_0, entity_3);
}