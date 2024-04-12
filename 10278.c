void fun()
{
  char* entity_8;
  char entity_7[26] = "";
  char entity_5[69] = "";
  entity_8 = (char*)malloc(43*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'y', 26-1);
  entity_7[26-1]='0';
  memset(entity_5, 'd', 69-1);
  entity_5[69-1]='0';
  entity_7[26] = 'O';
}