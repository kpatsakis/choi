void fun()
{
  char entity_6[9] = "";
  char entity_5 = 'P';
  char entity_2[70] = "";
  char* entity_3;
  char entity_1[38] = "";
  memset(entity_1, 'F', 38-1);
  entity_1[38-1]='0';
  memset(entity_6, 'd', 9-1);
  entity_6[9-1]='0';
  memset(entity_2, 'K', 70-1);
  entity_2[70-1]='0';
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_1, 38*sizeof(char));
}