void fun()
{
  char* entity_1;
  char entity_0[63] = "";
  char* entity_7;
  entity_7 = (char*)malloc(31*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(44*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'z', 63-1);
  entity_0[63-1]='0';
  strcpy(entity_1, entity_0);
}