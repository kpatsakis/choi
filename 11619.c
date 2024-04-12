void fun()
{
  int entity_6 = 80;
  char* entity_2;
  char entity_4[61] = "";
  entity_2 = (char*)malloc(10*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'Q', 61-1);
  entity_4[61-1]='0';
  memcpy(entity_2, entity_4, 61*sizeof(char));
}