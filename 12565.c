void fun()
{
  int entity_0 = 47;
  char entity_1 = 'I';
  char* entity_3;
  char* entity_7;
  char entity_9[83] = "";
  entity_7 = (char*)malloc(33*sizeof(char));
  entity_7[0]='0';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'f', 83-1);
  entity_9[83-1]='0';
  memcpy(entity_3, entity_9, 83*sizeof(char));
}