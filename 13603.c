void fun()
{
  int entity_0 = 86;
  char entity_4[83] = "";
  char entity_9[75] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'j', 83-1);
  entity_4[83-1]='0';
  memset(entity_9, 'Q', 75-1);
  entity_9[75-1]='0';
  entity_0 = 18;
  strcpy(entity_7, entity_4);
}