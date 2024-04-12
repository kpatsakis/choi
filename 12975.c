void fun()
{
  int entity_1 = 57;
  char entity_4[33] = "";
  char* entity_3;
  char entity_0[70] = "";
  memset(entity_4, 'H', 33-1);
  entity_4[33-1]='0';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 's', 70-1);
  entity_0[70-1]='0';
  strcpy(entity_3, entity_0);
}