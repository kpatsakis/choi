void fun()
{
  char* entity_3;
  char* entity_5;
  char entity_8[68] = "";
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[0]='0';
  entity_5 = (char*)malloc(69*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'Q', 68-1);
  entity_8[68-1]='0';
  memcpy(entity_3, entity_8, 68*sizeof(char));
}