void fun()
{
  int entity_6 = 18;
  entity_6 = 7;
  char* entity_5;
  char entity_1[18] = "";
  memset(entity_1, 'f', 18-1);
  entity_1[18-1]='0';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_1, 18*sizeof(char));
}