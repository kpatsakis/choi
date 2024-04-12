void fun()
{
  int entity_3 = 76;
  char entity_9[entity_3] = "";
  char* entity_5;
  char entity_8 = 'k';
  char entity_6[22] = "";
  char entity_0 = 'N';
  memset(entity_6, 'Z', 22-1);
  entity_6[22-1]='0';
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'b', entity_3-1);
  entity_9[entity_3-1]='0';
  memcpy(entity_5, entity_9, entity_3*sizeof(char));
}