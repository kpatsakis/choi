void fun()
{
  int entity_0 = 96;
  int entity_2 = 49;
  char entity_5 = 'w';
  char entity_3[18] = "";
  char* entity_9;
  memset(entity_3, 's', 18-1);
  entity_3[18-1]='0';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_3, 18*sizeof(char));
}