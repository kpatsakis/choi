void fun()
{
  char* entity_3;
  char entity_6[47] = "";
  char entity_2[3] = "";
  memset(entity_2, 'g', 3-1);
  entity_2[3-1]='0';
  memset(entity_6, 'H', 47-1);
  entity_6[47-1]='0';
  entity_3 = (char*)malloc(20*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_2, 3*sizeof(char));
}