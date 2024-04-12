void fun()
{
  int entity_9 = 39;
  char entity_7[76] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'O', 76-1);
  entity_7[76-1]='0';
  memcpy(entity_4, entity_7, 76*sizeof(char));
}