void fun()
{
  int entity_1 = 96;
  int entity_6 = 84;
  int entity_4 = 28;
  int entity_0 = 90;
  entity_1 = 12;
  char* entity_2;
  char entity_3[90] = "";
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'W', 90-1);
  entity_3[90-1]='0';
  memcpy(entity_2, entity_3, 90*sizeof(char));
}