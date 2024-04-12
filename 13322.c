void fun()
{
  int entity_1 = 22;
  int entity_6 = 44;
  char entity_5[17] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'P', 17-1);
  entity_5[17-1]='0';
  entity_6 = 54;
  memcpy(entity_3, entity_5, 17*sizeof(char));
}