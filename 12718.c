void fun()
{
  int entity_9 = 8;
  char* entity_2;
  char entity_3[58] = "";
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'a', 58-1);
  entity_3[58-1]='0';
  memcpy(entity_2, entity_3, 58*sizeof(char));
}