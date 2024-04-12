void fun()
{
  int entity_5 = 71;
  char entity_4[51] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'a', 51-1);
  entity_4[51-1]='0';
  memcpy(entity_6, entity_4, 51*sizeof(char));
}