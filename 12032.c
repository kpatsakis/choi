void fun()
{
  int entity_1 = 11;
  int entity_5 = 90;
  char entity_4[entity_1] = "";
  char* entity_7;
  char entity_9[11] = "";
  memset(entity_9, 'Q', 11-1);
  entity_9[11-1]='0';
  entity_7 = (char*)malloc(75*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 's', entity_1-1);
  entity_4[entity_1-1]='0';
  memcpy(entity_7, entity_4, entity_1*sizeof(char));
}