void fun()
{
  int entity_5 = 59;
  char* entity_6;
  char entity_4[81] = "";
  memset(entity_4, 'u', 81-1);
  entity_4[81-1]='0';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_4);
}