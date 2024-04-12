void fun()
{
  int entity_6 = 65;
  entity_6 = 4;
  char* entity_7;
  char entity_0[31] = "";
  memset(entity_0, 'b', 31-1);
  entity_0[31-1]='0';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, 31*sizeof(char));
}