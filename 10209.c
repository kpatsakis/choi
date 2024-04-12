void fun()
{
  char entity_8[43] = "";
  char* entity_4;
  char* entity_5;
  entity_4 = (char*)malloc(50*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'U', 43-1);
  entity_8[43-1]='0';
  entity_5 = (char*)malloc(8*sizeof(char));
  entity_5[0]='0';
  entity_8[2] = 'J';
}