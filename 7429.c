void fun()
{
  char entity_7 = 'M';
  char entity_6[22] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(51*sizeof(char));
  entity_0[51-1]='';
  memset(entity_6, 'z', 22-1);
  entity_6[22-1]='';
  strcpy(entity_0, entity_6);
}