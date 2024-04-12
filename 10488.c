void fun()
{
  char* entity_1;
  char entity_4[70] = "";
  char entity_3[26] = "";
  entity_1 = (char*)malloc(89*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'i', 70-1);
  entity_4[70-1]='0';
  memset(entity_3, 'D', 26-1);
  entity_3[26-1]='0';
  entity_3[47] = 'T';
}