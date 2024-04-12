void fun()
{
  int entity_8 = 16;
  int entity_5 = 100;
  char* entity_2;
  char entity_1[18] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_1, 'H', 18-1);
  entity_1[18-1]='';
  memcpy(entity_2, entity_1, 18*sizeof(char));
}