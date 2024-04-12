void fun()
{
  int entity_7 = 75;
  entity_7 = 55;
  char entity_6[18] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'Q', 18-1);
  entity_6[18-1]='0';
  memcpy(entity_1, entity_6, 18*sizeof(char));
}