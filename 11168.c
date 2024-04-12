void fun()
{
  char entity_4 = 'S';
  char entity_5[47] = "";
  char entity_7[90] = "";
  char* entity_1;
  memset(entity_5, 'c', 47-1);
  entity_5[47-1]='0';
  memset(entity_7, 'g', 90-1);
  entity_7[90-1]='0';
  entity_1 = (char*)malloc(13*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_7, 90*sizeof(char));
}