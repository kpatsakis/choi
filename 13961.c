void fun()
{
  int entity_1 = 58;
  entity_1 = 62;
  char entity_4[10] = "";
  char* entity_3;
  char entity_6[51] = "";
  char* entity_2;
  memset(entity_6, 'T', 51-1);
  entity_6[51-1]='0';
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[0]='0';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 't', 10-1);
  entity_4[10-1]='0';
  memcpy(entity_2, entity_6, 51*sizeof(char));
}