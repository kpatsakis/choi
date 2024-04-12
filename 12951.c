void fun()
{
  int entity_8 = 29;
  int entity_1 = 58;
  char* entity_5;
  char entity_4[51] = "";
  memset(entity_4, 'n', 51-1);
  entity_4[51-1]='0';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_4, 51*sizeof(char));
}