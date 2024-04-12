void fun()
{
  char entity_0[68] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'P', 68-1);
  entity_0[68-1]='';
  entity_4 = (char*)malloc(3*sizeof(char));
  entity_4[3-1]='';
  strcpy(entity_4, entity_0);
}