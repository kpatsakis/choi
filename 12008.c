void fun()
{
  int entity_8 = 44;
  char entity_0[43] = "";
  char* entity_1;
  memset(entity_0, 'q', 43-1);
  entity_0[43-1]='0';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_0);
}