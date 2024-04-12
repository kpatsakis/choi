void fun()
{
  char* entity_6;
  char entity_3[65] = "";
  char* entity_5;
  memset(entity_3, 'j', 65-1);
  entity_3[65-1]='0';
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[0]='0';
  entity_5 = (char*)malloc(96*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_6, entity_3, 65*sizeof(char));
}