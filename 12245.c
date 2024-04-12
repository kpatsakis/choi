void fun()
{
  int entity_2 = 38;
  char* entity_3;
  char entity_9[35] = "";
  memset(entity_9, 'A', 35-1);
  entity_9[35-1]='0';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_9, 35*sizeof(char));
}