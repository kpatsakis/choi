void fun()
{
  int entity_0 = 14;
  char entity_4[27] = "";
  char* entity_9;
  memset(entity_4, 'n', 27-1);
  entity_4[27-1]='0';
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_4, 27*sizeof(char));
}