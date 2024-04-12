void fun()
{
  int entity_2 = 75;
  entity_2 = 45;
  char* entity_1;
  char* entity_6;
  char entity_9[91] = "";
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  entity_1 = (char*)malloc(30*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'V', 91-1);
  entity_9[91-1]='0';
  memcpy(entity_6, entity_9, 91*sizeof(char));
}