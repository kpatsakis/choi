void fun()
{
  int entity_8 = 33;
  int entity_7 = 60;
  char* entity_1;
  char* entity_3;
  char entity_4[99] = "";
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'P', 99-1);
  entity_4[99-1]='0';
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_1, entity_4, 99*sizeof(char));
}