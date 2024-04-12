void fun()
{
  int entity_6 = 76;
  int entity_9 = 42;
  entity_6 = 49;
  char* entity_4;
  char entity_2[85] = "";
  memset(entity_2, 'R', 85-1);
  entity_2[85-1]='0';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, 85*sizeof(char));
}