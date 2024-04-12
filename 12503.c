void fun()
{
  int entity_8 = 3;
  char* entity_9;
  char entity_7[25] = "";
  char* entity_0;
  memset(entity_7, 'h', 25-1);
  entity_7[25-1]='0';
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[0]='0';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_7, 25*sizeof(char));
}