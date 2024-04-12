void fun()
{
  int entity_1 = 36;
  char entity_0[38] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'D', 38-1);
  entity_0[38-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  strcpy(entity_4, entity_0);
}