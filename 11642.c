void fun()
{
  int entity_9 = 47;
  char* entity_0;
  char entity_4[17] = "";
  char* entity_7;
  entity_0 = (char*)malloc(71*sizeof(char));
  entity_0[0]='0';
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'e', 17-1);
  entity_4[17-1]='0';
  strcpy(entity_7, entity_4);
}