void fun()
{
  int entity_6 = 45;
  char entity_5 = 'r';
  char* entity_2;
  char entity_8[41] = "";
  char entity_9[31] = "";
  memset(entity_8, 'i', 41-1);
  entity_8[41-1]='0';
  memset(entity_9, 't', 31-1);
  entity_9[31-1]='0';
  entity_2 = (char*)malloc(12*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_8, 41*sizeof(char));
}