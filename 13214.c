void fun()
{
  int entity_0 = 48;
  entity_0 = 51;
  char entity_9[70] = "";
  char* entity_6;
  char* entity_8;
  char* entity_7;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[0]='0';
  entity_8 = (char*)malloc(21*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'T', 70-1);
  entity_9[70-1]='0';
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_6, entity_9);
}