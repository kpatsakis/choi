void fun()
{
  int entity_3 = 8;
  char* entity_4;
  char entity_6[42] = "";
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'z', 42-1);
  entity_6[42-1]='0';
  entity_3 = 68;
  strcpy(entity_4, entity_6);
}