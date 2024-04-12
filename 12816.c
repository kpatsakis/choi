void fun()
{
  int entity_9 = 99;
  char* entity_2;
  char entity_6[34] = "";
  memset(entity_6, 'T', 34-1);
  entity_6[34-1]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_6, 34*sizeof(char));
}