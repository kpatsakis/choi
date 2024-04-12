void fun()
{
  int entity_7 = 19;
  char* entity_4;
  char entity_9[99] = "";
  memset(entity_9, 'F', 99-1);
  entity_9[99-1]='0';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_9, 99*sizeof(char));
}