void fun()
{
  int entity_9 = 55;
  char entity_0[43] = "";
  char entity_3[83] = "";
  char* entity_4;
  memset(entity_0, 'Z', 43-1);
  entity_0[43-1]='0';
  memset(entity_3, 'R', 83-1);
  entity_3[83-1]='0';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_0);
}