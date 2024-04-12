void fun()
{
  char entity_5[15] = "";
  char* entity_2;
  char* entity_7;
  memset(entity_5, 'l', 15-1);
  entity_5[15-1]='0';
  entity_7 = (char*)malloc(48*sizeof(char));
  entity_7[0]='0';
  entity_2 = (char*)malloc(4*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_5, 15*sizeof(char));
}