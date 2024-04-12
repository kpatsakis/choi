void fun()
{
  int entity_4 = 10;
  int entity_0 = 45;
  int entity_2 = 66;
  char entity_7[74] = "";
  char* entity_8;
  char entity_3[70] = "";
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'T', 70-1);
  entity_3[70-1]='0';
  memset(entity_7, 't', 74-1);
  entity_7[74-1]='0';
  entity_4 = 45;
  memcpy(entity_8, entity_3, 70*sizeof(char));
}