void fun()
{
  int entity_4 = 62;
  char* entity_3;
  char* entity_8;
  char entity_9[78] = "";
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[0]='0';
  entity_3 = (char*)malloc(50*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'p', 78-1);
  entity_9[78-1]='0';
  entity_4 = 55;
  memcpy(entity_8, entity_9, 78*sizeof(char));
}