void fun()
{
  int entity_9 = 18;
  char entity_1[82] = "";
  char* entity_8;
  memset(entity_1, 'Q', 82-1);
  entity_1[82-1]='0';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_1);
}