void fun()
{
  int entity_6 = 93;
  char entity_9 = 'i';
  char entity_0[78] = "";
  char* entity_3;
  entity_3 = (char*)malloc(83*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'B', 78-1);
  entity_0[78-1]='0';
  memcpy(entity_3, entity_0, 78*sizeof(char));
}