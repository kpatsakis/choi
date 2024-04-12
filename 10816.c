void fun()
{
  char* entity_4;
  char entity_9[5] = "";
  char entity_2[70] = "";
  char entity_0 = 'C';
  memset(entity_9, 'D', 5-1);
  entity_9[5-1]='0';
  memset(entity_2, 'M', 70-1);
  entity_2[70-1]='0';
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[0]='0';
  entity_2[56] = 'X';
}