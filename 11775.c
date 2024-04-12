void fun()
{
  char entity_7[19] = "";
  char* entity_3;
  char* entity_1;
  char* entity_2;
  entity_3 = (char*)malloc(8*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[0]='0';
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'a', 19-1);
  entity_7[19-1]='0';
  memcpy(entity_1, entity_7, 19*sizeof(char));
}