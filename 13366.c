void fun()
{
  int entity_9 = 95;
  int entity_8 = 42;
  entity_8 = 60;
  char entity_6 = 'B';
  char entity_0[48] = "";
  char* entity_3;
  memset(entity_0, 'V', 48-1);
  entity_0[48-1]='0';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_0);
}