void fun()
{
  int entity_9 = 63;
  entity_9 = 63;
  char entity_3[3] = "";
  char entity_2 = 'i';
  char* entity_6;
  memset(entity_3, 'V', 3-1);
  entity_3[3-1]='0';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_3, 3*sizeof(char));
}