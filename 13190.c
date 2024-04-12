void fun()
{
  int entity_1 = 24;
  entity_1 = 61;
  char* entity_3;
  char entity_4[18] = "";
  memset(entity_4, 'v', 18-1);
  entity_4[18-1]='0';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_4, 18*sizeof(char));
}