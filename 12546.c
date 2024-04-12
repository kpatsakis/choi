void fun()
{
  int entity_6 = 94;
  int entity_1 = 28;
  char* entity_0;
  char entity_3[44] = "";
  char entity_4[68] = "";
  char entity_9[48] = "";
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'P', 48-1);
  entity_9[48-1]='0';
  memset(entity_4, 'X', 68-1);
  entity_4[68-1]='0';
  memset(entity_3, 'N', 44-1);
  entity_3[44-1]='0';
  strcpy(entity_0, entity_9);
}