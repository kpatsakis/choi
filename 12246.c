void fun()
{
  int entity_8 = 5;
  char* entity_9;
  char entity_6[69] = "";
  char entity_4[39] = "";
  memset(entity_4, 'j', 39-1);
  entity_4[39-1]='0';
  memset(entity_6, 'I', 69-1);
  entity_6[69-1]='0';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_4, 39*sizeof(char));
}