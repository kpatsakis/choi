void fun()
{
  int entity_5 = 27;
  entity_5 = 20;
  char entity_2[83] = "";
  char* entity_6;
  char* entity_0;
  entity_6 = (char*)malloc(56*sizeof(char));
  entity_6[0]='0';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'U', 83-1);
  entity_2[83-1]='0';
  strcpy(entity_0, entity_2);
}