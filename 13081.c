void fun()
{
  int entity_2 = 66;
  entity_2 = 38;
  char* entity_9;
  char entity_4[51] = "";
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'w', 51-1);
  entity_4[51-1]='0';
  memcpy(entity_9, entity_4, 51*sizeof(char));
}