void fun()
{
  int entity_4 = 98;
  char entity_1[entity_4] = "";
  char* entity_8;
  char* entity_3;
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[0]='0';
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 's', entity_4-1);
  entity_1[entity_4-1]='0';
  memcpy(entity_3, entity_1, entity_4*sizeof(char));
}