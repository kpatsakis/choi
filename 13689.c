void fun()
{
  int entity_3 = 98;
  int entity_4 = 44;
  char entity_9 = 'N';
  char* entity_6;
  char entity_7[entity_4] = "";
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'x', entity_4-1);
  entity_7[entity_4-1]='0';
  entity_4 = 97;
  memcpy(entity_6, entity_7, entity_4*sizeof(char));
}