void fun()
{
  char entity_1[64] = "";
  char* entity_3;
  char* entity_6;
  char entity_5[74] = "";
  memset(entity_5, 'u', 74-1);
  entity_5[74-1]='0';
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'r', 64-1);
  entity_1[64-1]='0';
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_5);
}