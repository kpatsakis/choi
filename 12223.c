void fun()
{
  int entity_7 = 51;
  char* entity_5;
  char entity_3[2] = "";
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'v', 2-1);
  entity_3[2-1]='0';
  memcpy(entity_5, entity_3, 2*sizeof(char));
}