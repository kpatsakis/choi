void fun()
{
  int entity_4 = 79;
  char* entity_6;
  char* entity_5;
  char* entity_0;
  char entity_9[43] = "";
  entity_5 = (char*)malloc(34*sizeof(char));
  entity_5[0]='0';
  entity_6 = (char*)malloc(71*sizeof(char));
  entity_6[0]='0';
  entity_0 = (char*)malloc(20*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'i', 43-1);
  entity_9[43-1]='0';
  memcpy(entity_5, entity_9, 43*sizeof(char));
}