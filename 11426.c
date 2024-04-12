void fun()
{
  int entity_2 = 18;
  char* entity_7;
  char entity_4[2] = "";
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'N', 2-1);
  entity_4[2-1]='0';
  memcpy(entity_7, entity_4, 2*sizeof(char));
}