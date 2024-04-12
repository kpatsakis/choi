void fun()
{
  int entity_5 = 44;
  int entity_1 = 78;
  int entity_9 = 69;
  entity_9 = 20;
  char* entity_0;
  char entity_3[76] = "";
  char* entity_7;
  memset(entity_3, 'W', 76-1);
  entity_3[76-1]='0';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  entity_7 = (char*)malloc(95*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_0, entity_3, 76*sizeof(char));
}