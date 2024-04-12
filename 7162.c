void fun()
{
  int entity_3 = 18;
  int entity_1 = 43;
  char* entity_2;
  char* entity_8;
  char entity_4[40] = "";
  entity_4 = NULL;
  char entity_9 = 'W';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  entity_8 = (char*)malloc(55*sizeof(char));
  entity_8[55-1]='';
  memset(entity_4, 'a', 40-1);
  entity_4[40-1]='';
  memcpy(entity_2, entity_4, 40*sizeof(char));
}