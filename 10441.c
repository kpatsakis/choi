void fun()
{
  char entity_5[98] = "";
  char* entity_4;
  char* entity_3;
  entity_3 = (char*)malloc(94*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'O', 98-1);
  entity_5[98-1]='0';
  entity_4 = (char*)malloc(8*sizeof(char));
  entity_4[0]='0';
  entity_5[42] = 'Z';
}