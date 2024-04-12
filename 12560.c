void fun()
{
  int entity_3 = 39;
  char entity_0[4] = "";
  char* entity_2;
  char entity_9[68] = "";
  char entity_6 = 'V';
  char entity_8[38] = "";
  memset(entity_8, 'B', 38-1);
  entity_8[38-1]='0';
  memset(entity_0, 'W', 4-1);
  entity_0[4-1]='0';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'g', 68-1);
  entity_9[68-1]='0';
  strcpy(entity_2, entity_8);
}