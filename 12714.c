void fun()
{
  int entity_7 = 79;
  int entity_6 = 94;
  char entity_0[83] = "";
  char* entity_1;
  memset(entity_0, 'z', 83-1);
  entity_0[83-1]='0';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_0);
}