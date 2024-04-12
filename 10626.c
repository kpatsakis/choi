void fun()
{
  char* entity_5;
  char entity_3 = 'a';
  char entity_1[34] = "";
  char entity_8[70] = "";
  memset(entity_1, 'Y', 34-1);
  entity_1[34-1]='0';
  memset(entity_8, 'Z', 70-1);
  entity_8[70-1]='0';
  entity_5 = (char*)malloc(19*sizeof(char));
  entity_5[0]='0';
  entity_1[100] = 'g';
}