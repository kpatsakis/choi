void fun()
{
  int entity_1 = 50;
  char entity_5 = 'j';
  char entity_0 = 'D';
  char entity_6[36] = "";
  char entity_8 = 'E';
  char* entity_4;
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'f', 36-1);
  entity_6[36-1]='0';
  memcpy(entity_4, entity_6, 36*sizeof(char));
}