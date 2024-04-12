void fun()
{
  char entity_0[70] = "";
  char entity_8[82] = "";
  char* entity_3;
  char entity_1[42] = "";
  char* entity_5;
  memset(entity_1, 'e', 42-1);
  entity_1[42-1]='0';
  entity_5 = (char*)malloc(80*sizeof(char));
  entity_5[0]='0';
  entity_3 = (char*)malloc(72*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'K', 70-1);
  entity_0[70-1]='0';
  memset(entity_8, 'b', 82-1);
  entity_8[82-1]='0';
  strcpy(entity_5, entity_1);
}