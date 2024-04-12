void fun()
{
  int entity_8 = 13;
  char entity_4[35] = "";
  char* entity_5;
  char entity_6 = 'k';
  memset(entity_4, 'k', 35-1);
  entity_4[35-1]='0';
  entity_5 = (char*)malloc(21*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_4, 35*sizeof(char));
}