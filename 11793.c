void fun()
{
  char* entity_3;
  char* entity_1;
  char* entity_2;
  char entity_9[54] = "";
  entity_3 = (char*)malloc(56*sizeof(char));
  entity_3[0]='0';
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[0]='0';
  entity_1 = (char*)malloc(16*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'l', 54-1);
  entity_9[54-1]='0';
  memcpy(entity_2, entity_9, 54*sizeof(char));
}