void fun()
{
  int entity_3 = 74;
  char entity_7[93] = "";
  char* entity_1;
  char entity_8[15] = "";
  char* entity_9;
  entity_1 = (char*)malloc(6*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'I', 93-1);
  entity_7[93-1]='0';
  memset(entity_8, 'I', 15-1);
  entity_8[15-1]='0';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_7, 93*sizeof(char));
}