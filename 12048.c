void fun()
{
  int entity_7 = 62;
  char entity_3[7] = "";
  char* entity_9;
  memset(entity_3, 'm', 7-1);
  entity_3[7-1]='0';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_3, 7*sizeof(char));
}