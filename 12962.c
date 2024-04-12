void fun()
{
  int entity_1 = 12;
  int entity_3 = 8;
  char entity_9 = 'z';
  char* entity_7;
  char entity_5[entity_1] = "";
  char* entity_0;
  entity_0 = (char*)malloc(80*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'Q', entity_1-1);
  entity_5[entity_1-1]='0';
  entity_7 = (char*)malloc(50*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_0, entity_5, entity_1*sizeof(char));
}