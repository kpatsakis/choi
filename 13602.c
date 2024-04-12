void fun()
{
  int entity_4 = 49;
  char* entity_5;
  char entity_9[19] = "";
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'k', 19-1);
  entity_9[19-1]='0';
  entity_4 = 26;
  memcpy(entity_5, entity_9, 19*sizeof(char));
}