void fun()
{
  int entity_3 = 45;
  entity_3 = 37;
  char entity_4[65] = "";
  char* entity_7;
  char* entity_0;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  entity_0 = (char*)malloc(24*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'S', 65-1);
  entity_4[65-1]='0';
  strcpy(entity_7, entity_4);
}