void fun()
{
  int entity_7 = 11;
  int entity_3 = 45;
  char entity_4[38] = "";
  char* entity_6;
  memset(entity_4, 'q', 38-1);
  entity_4[38-1]='0';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_4);
}