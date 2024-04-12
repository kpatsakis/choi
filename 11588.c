void fun()
{
  char entity_2[69] = "";
  char entity_8[64] = "";
  char* entity_6;
  char entity_1 = 'g';
  memset(entity_8, 'V', 64-1);
  entity_8[64-1]='0';
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'g', 69-1);
  entity_2[69-1]='0';
  strcpy(entity_6, entity_2);
}