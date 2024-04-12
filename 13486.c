void fun()
{
  int entity_9 = 94;
  char entity_5[20] = "";
  char* entity_0;
  char entity_8[21] = "";
  char entity_6[68] = "";
  char entity_2 = 'N';
  memset(entity_8, 'A', 21-1);
  entity_8[21-1]='0';
  memset(entity_6, 'G', 68-1);
  entity_6[68-1]='0';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'S', 20-1);
  entity_5[20-1]='0';
  entity_9 = 79;
  memcpy(entity_0, entity_6, 68*sizeof(char));
}