void fun()
{
  int entity_9 = 88;
  char* entity_8;
  char entity_5[16] = "";
  char* entity_0;
  char* entity_2;
  char entity_6[84] = "";
  memset(entity_5, 'P', 16-1);
  entity_5[16-1]='0';
  memset(entity_6, 'e', 84-1);
  entity_6[84-1]='0';
  entity_0 = (char*)malloc(28*sizeof(char));
  entity_0[0]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  entity_8 = (char*)malloc(91*sizeof(char));
  entity_8[0]='0';
  entity_9 = 87;
  memcpy(entity_2, entity_6, 84*sizeof(char));
}