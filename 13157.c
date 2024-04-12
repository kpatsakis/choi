void fun()
{
  int entity_2 = 17;
  int entity_9 = 8;
  int entity_0 = 45;
  entity_9 = 28;
  char entity_4[25] = "";
  char* entity_7;
  char* entity_5;
  entity_5 = (char*)malloc(2*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'h', 25-1);
  entity_4[25-1]='0';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_4, 25*sizeof(char));
}