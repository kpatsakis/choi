void fun()
{
  int entity_1 = 91;
  int entity_0 = 36;
  char entity_9 = 'k';
  char* entity_2;
  char entity_8[entity_1] = "";
  char entity_6[25] = "";
  memset(entity_8, 'd', entity_1-1);
  entity_8[entity_1-1]='0';
  entity_2 = (char*)malloc(73*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'd', 25-1);
  entity_6[25-1]='0';
  memcpy(entity_2, entity_8, entity_1*sizeof(char));
}