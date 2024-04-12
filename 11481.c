void fun()
{
  char* entity_3;
  char entity_7[7] = "";
  char* entity_1;
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'b', 7-1);
  entity_7[7-1]='0';
  entity_1 = (char*)malloc(51*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_3, entity_7, 7*sizeof(char));
}