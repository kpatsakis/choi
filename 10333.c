void fun()
{
  char entity_3[94] = "";
  char* entity_8;
  char* entity_1;
  char* entity_7;
  memset(entity_3, 'Y', 94-1);
  entity_3[94-1]='0';
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(1*sizeof(char));
  entity_1[0]='0';
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[0]='0';
  entity_3[96] = 'R';
}