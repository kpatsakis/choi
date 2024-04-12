void fun()
{
  int entity_5 = 85;
  char* entity_2;
  char entity_8[12] = "";
  entity_8 = NULL;
  char entity_9[90] = "";
  entity_9 = NULL;
  memset(entity_8, 'z', 12-1);
  entity_8[12-1]='';
  memset(entity_9, 'A', 90-1);
  entity_9[90-1]='';
  entity_2 = (char*)malloc(47*sizeof(char));
  entity_2[47-1]='';
  entity_9[entity_5] = 'K';
}