void fun()
{
  char* entity_8;
  char entity_2[94] = "";
  char entity_1[23] = "";
  char entity_7[92] = "";
  char* entity_6;
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[0]='0';
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'D', 94-1);
  entity_2[94-1]='0';
  memset(entity_1, 'N', 23-1);
  entity_1[23-1]='0';
  memset(entity_7, 'G', 92-1);
  entity_7[92-1]='0';
  memcpy(entity_8, entity_7, 92*sizeof(char));
}