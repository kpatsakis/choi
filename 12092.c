void fun()
{
  int entity_3 = 39;
  int entity_0 = 99;
  char* entity_5;
  char entity_9[18] = "";
  memset(entity_9, 'g', 18-1);
  entity_9[18-1]='0';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_9, 18*sizeof(char));
}