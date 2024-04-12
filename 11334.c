void fun()
{
  int entity_3 = 16;
  int entity_2 = 23;
  char entity_1[71] = "";
  char* entity_8;
  char entity_0[92] = "";
  memset(entity_1, 'D', 71-1);
  entity_1[71-1]='0';
  entity_8 = (char*)malloc(15*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'D', 92-1);
  entity_0[92-1]='0';
  memcpy(entity_8, entity_0, 92*sizeof(char));
}