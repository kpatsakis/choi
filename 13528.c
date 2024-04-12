void fun()
{
  int entity_1 = 72;
  char* entity_2;
  char entity_8 = 'G';
  char entity_6[entity_1] = "";
  char* entity_5;
  entity_5 = (char*)malloc(36*sizeof(char));
  entity_5[0]='0';
  entity_2 = (char*)malloc(56*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'K', entity_1-1);
  entity_6[entity_1-1]='0';
  entity_1 = 49;
  memcpy(entity_2, entity_6, entity_1*sizeof(char));
}