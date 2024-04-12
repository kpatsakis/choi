void fun()
{
  int entity_8 = 93;
  entity_8 = 93;
  char entity_7[92] = "";
  char* entity_9;
  char entity_4[entity_8] = "";
  char entity_2 = 'U';
  entity_9 = (char*)malloc(64*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'h', 92-1);
  entity_7[92-1]='0';
  memset(entity_4, 'Z', entity_8-1);
  entity_4[entity_8-1]='0';
  strcpy(entity_9, entity_4);
}