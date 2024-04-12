void fun()
{
  int entity_7 = 11;
  char entity_8[25] = "";
  char* entity_1;
  char entity_6 = 'H';
  char* entity_9;
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[0]='0';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 's', 25-1);
  entity_8[25-1]='0';
  memcpy(entity_9, entity_8, 25*sizeof(char));
}