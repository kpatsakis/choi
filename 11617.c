void fun()
{
  char* entity_6;
  char entity_0[27] = "";
  char* entity_7;
  char entity_9[95] = "";
  entity_7 = (char*)malloc(86*sizeof(char));
  entity_7[0]='0';
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'a', 27-1);
  entity_0[27-1]='0';
  memset(entity_9, 'm', 95-1);
  entity_9[95-1]='0';
  memcpy(entity_6, entity_0, 27*sizeof(char));
}