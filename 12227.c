void fun()
{
  int entity_8 = 57;
  char entity_9[entity_8] = "";
  char* entity_7;
  char entity_6[6] = "";
  memset(entity_6, 'r', 6-1);
  entity_6[6-1]='0';
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'D', entity_8-1);
  entity_9[entity_8-1]='0';
  memcpy(entity_7, entity_9, entity_8*sizeof(char));
}