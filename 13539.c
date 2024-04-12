void fun()
{
  int entity_1 = 31;
  char entity_4[23] = "";
  char* entity_9;
  char* entity_7;
  char entity_0[80] = "";
  memset(entity_4, 'K', 23-1);
  entity_4[23-1]='0';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'e', 80-1);
  entity_0[80-1]='0';
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[0]='0';
  entity_1 = 94;
  memcpy(entity_9, entity_0, 80*sizeof(char));
}