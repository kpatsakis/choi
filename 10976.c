void fun()
{
  char entity_1[48] = "";
  char* entity_5;
  char entity_2[26] = "";
  memset(entity_2, 'w', 26-1);
  entity_2[26-1]='0';
  memset(entity_1, 'i', 48-1);
  entity_1[48-1]='0';
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[0]='0';
  entity_1[48] = 'H';
}