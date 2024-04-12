void fun()
{
  int entity_5 = 18;
  char* entity_4;
  char entity_8 = 'k';
  char entity_7[36] = "";
  memset(entity_7, 'X', 36-1);
  entity_7[36-1]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_7, 36*sizeof(char));
}