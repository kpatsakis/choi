void fun()
{
  int entity_9 = 53;
  int entity_3 = 87;
  char entity_7[79] = "";
  char* entity_5;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'z', 79-1);
  entity_7[79-1]='0';
  memcpy(entity_5, entity_7, 79*sizeof(char));
}