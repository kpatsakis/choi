void fun()
{
  int entity_6 = 92;
  entity_6 = 15;
  char* entity_5;
  char* entity_1;
  char entity_0[50] = "";
  memset(entity_0, 'U', 50-1);
  entity_0[50-1]='0';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[0]='0';
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_1, entity_0, 50*sizeof(char));
}