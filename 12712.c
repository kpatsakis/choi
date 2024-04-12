void fun()
{
  int entity_1 = 75;
  char* entity_2;
  char entity_9 = 'b';
  char entity_3[13] = "";
  char* entity_7;
  char entity_6[entity_1] = "";
  entity_7 = (char*)malloc(73*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'z', 13-1);
  entity_3[13-1]='0';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'i', entity_1-1);
  entity_6[entity_1-1]='0';
  memcpy(entity_2, entity_6, entity_1*sizeof(char));
}