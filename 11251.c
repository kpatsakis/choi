void fun()
{
  char entity_4[9] = "";
  char* entity_1;
  char* entity_7;
  char entity_0[53] = "";
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[0]='0';
  entity_7 = (char*)malloc(44*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'c', 53-1);
  entity_0[53-1]='0';
  memset(entity_4, 'b', 9-1);
  entity_4[9-1]='0';
  strcpy(entity_1, entity_4);
}