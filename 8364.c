void fun()
{
  int entity_9 = 75;
  char* entity_0;
  char entity_6[87] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(86*sizeof(char));
  entity_0[86-1]='';
  memset(entity_6, 't', 87-1);
  entity_6[87-1]='';
  strcpy(entity_0, entity_6);
}