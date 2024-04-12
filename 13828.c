void fun()
{
  int entity_8 = 19;
  int entity_7 = 30;
  int entity_0 = 0;
  entity_7 = 66;
  char entity_3[83] = "";
  char* entity_1;
  memset(entity_3, 'Z', 83-1);
  entity_3[83-1]='0';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_3, 83*sizeof(char));
}