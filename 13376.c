void fun()
{
  int entity_9 = 21;
  entity_9 = 53;
  char* entity_5;
  char* entity_8;
  char entity_3[50] = "";
  memset(entity_3, 'A', 50-1);
  entity_3[50-1]='0';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[0]='0';
  entity_8 = (char*)malloc(71*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_5, entity_3, 50*sizeof(char));
}