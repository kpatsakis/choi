void fun()
{
  int entity_2 = 2;
  int entity_9 = 38;
  char* entity_7;
  char* entity_0;
  char entity_6[25] = "";
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[0]='0';
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'w', 25-1);
  entity_6[25-1]='0';
  entity_2 = 74;
  memcpy(entity_7, entity_6, 25*sizeof(char));
}