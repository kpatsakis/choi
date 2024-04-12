void fun()
{
  int entity_8 = 55;
  char entity_3[61] = "";
  char* entity_9;
  memset(entity_3, 'x', 61-1);
  entity_3[61-1]='0';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_3, 61*sizeof(char));
}