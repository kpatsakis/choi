void fun()
{
  int entity_6 = 32;
  char entity_1[48] = "";
  char* entity_9;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 't', 48-1);
  entity_1[48-1]='0';
  entity_6 = 81;
  memcpy(entity_9, entity_1, 48*sizeof(char));
}