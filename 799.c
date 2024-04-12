void fun()
{
  int entity_0 = 47;
  char* entity_3;
  char entity_4[38] = "";
  entity_4 = NULL;
  memset(entity_4, 'V', 38-1);
  entity_4[38-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  strcpy(entity_3, entity_4);
}