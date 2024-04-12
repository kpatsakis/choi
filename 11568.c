void fun()
{
  char* entity_6;
  char entity_4[6] = "";
  char* entity_1;
  memset(entity_4, 'N', 6-1);
  entity_4[6-1]='0';
  entity_1 = (char*)malloc(2*sizeof(char));
  entity_1[0]='0';
  entity_6 = (char*)malloc(89*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_1, entity_4, 6*sizeof(char));
}