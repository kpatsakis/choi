void fun()
{
  int entity_5 = 84;
  char* entity_0;
  char entity_6[22] = "";
  char* entity_8;
  memset(entity_6, 'I', 22-1);
  entity_6[22-1]='0';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  entity_0 = (char*)malloc(1*sizeof(char));
  entity_0[0]='0';
  entity_5 = 30;
  strcpy(entity_8, entity_6);
}