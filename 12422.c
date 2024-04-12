void fun()
{
  int entity_1 = 48;
  char entity_3 = 'R';
  char entity_8[13] = "";
  char* entity_9;
  char* entity_0;
  memset(entity_8, 'i', 13-1);
  entity_8[13-1]='0';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  entity_0 = (char*)malloc(80*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_9, entity_8);
}