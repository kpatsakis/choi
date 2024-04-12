void fun()
{
  int entity_5 = 23;
  int entity_8 = 46;
  char entity_1[9] = "";
  char* entity_3;
  memset(entity_1, 't', 9-1);
  entity_1[9-1]='0';
  entity_3 = (char*)malloc(3*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_1, 9*sizeof(char));
}