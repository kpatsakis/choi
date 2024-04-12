void fun()
{
  char* entity_7;
  char entity_6[23] = "";
  char* entity_5;
  char entity_2[31] = "";
  entity_7 = (char*)malloc(23*sizeof(char));
  entity_7[0]='0';
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'U', 23-1);
  entity_6[23-1]='0';
  memset(entity_2, 'a', 31-1);
  entity_2[31-1]='0';
  memcpy(entity_7, entity_2, 31*sizeof(char));
}