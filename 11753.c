void fun()
{
  char entity_8[29] = "";
  char entity_9[3] = "";
  char entity_1[87] = "";
  char* entity_7;
  entity_7 = (char*)malloc(5*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'i', 3-1);
  entity_9[3-1]='0';
  memset(entity_1, 'f', 87-1);
  entity_1[87-1]='0';
  memset(entity_8, 'N', 29-1);
  entity_8[29-1]='0';
  memcpy(entity_7, entity_9, 3*sizeof(char));
}