void fun()
{
  int entity_1 = 70;
  char* entity_8;
  char entity_9[62] = "";
  char entity_2[1] = "";
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'E', 62-1);
  entity_9[62-1]='0';
  memset(entity_2, 'Q', 1-1);
  entity_2[1-1]='0';
  memcpy(entity_8, entity_9, 62*sizeof(char));
}