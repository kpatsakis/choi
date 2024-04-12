void fun()
{
  int entity_7 = 5;
  entity_7 = 42;
  char entity_5[86] = "";
  char* entity_3;
  char entity_1[70] = "";
  memset(entity_5, 'z', 86-1);
  entity_5[86-1]='0';
  memset(entity_1, 's', 70-1);
  entity_1[70-1]='0';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_5, 86*sizeof(char));
}