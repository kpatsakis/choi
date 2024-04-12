void fun()
{
  int entity_9 = 64;
  char* entity_4;
  char entity_6[10] = "";
  char* entity_1;
  entity_1 = (char*)malloc(45*sizeof(char));
  entity_1[0]='0';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'b', 10-1);
  entity_6[10-1]='0';
  entity_9 = 24;
  memcpy(entity_4, entity_6, 10*sizeof(char));
}