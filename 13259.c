void fun()
{
  int entity_0 = 61;
  entity_0 = 23;
  char* entity_6;
  char entity_7[79] = "";
  char* entity_5;
  char entity_4[33] = "";
  memset(entity_7, 'k', 79-1);
  entity_7[79-1]='0';
  entity_6 = (char*)malloc(88*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'd', 33-1);
  entity_4[33-1]='0';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_7, 79*sizeof(char));
}