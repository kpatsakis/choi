void fun()
{
  int entity_1 = 7;
  char* entity_7;
  char entity_9[79] = "";
  char entity_4[61] = "";
  char entity_5 = 'M';
  memset(entity_9, 'S', 79-1);
  entity_9[79-1]='0';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'I', 61-1);
  entity_4[61-1]='0';
  memcpy(entity_7, entity_9, 79*sizeof(char));
}