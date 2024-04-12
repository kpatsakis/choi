void fun()
{
  char* entity_5;
  char entity_4[18] = "";
  char entity_2[90] = "";
  char* entity_9;
  entity_5 = (char*)malloc(56*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'N', 90-1);
  entity_2[90-1]='0';
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'i', 18-1);
  entity_4[18-1]='0';
  entity_4[50] = 'N';
}