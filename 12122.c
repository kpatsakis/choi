void fun()
{
  int entity_9 = 70;
  char entity_2[64] = "";
  char entity_6[95] = "";
  char* entity_0;
  char entity_3 = 'B';
  memset(entity_2, 'j', 64-1);
  entity_2[64-1]='0';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'v', 95-1);
  entity_6[95-1]='0';
  strcpy(entity_0, entity_6);
}