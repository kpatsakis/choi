void fun()
{
  int entity_7 = 23;
  entity_7 = 87;
  char* entity_5;
  char entity_6[51] = "";
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'U', 51-1);
  entity_6[51-1]='0';
  memcpy(entity_5, entity_6, 51*sizeof(char));
}