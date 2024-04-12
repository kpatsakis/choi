void fun()
{
  int entity_7 = 77;
  char* entity_6;
  char entity_9[58] = "";
  memset(entity_9, 'd', 58-1);
  entity_9[58-1]='0';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_9, 58*sizeof(char));
}