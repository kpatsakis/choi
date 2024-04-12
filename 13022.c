void fun()
{
  int entity_6 = 33;
  int entity_4 = 29;
  entity_4 = 4;
  char* entity_2;
  char entity_9[24] = "";
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'g', 24-1);
  entity_9[24-1]='0';
  memcpy(entity_2, entity_9, 24*sizeof(char));
}