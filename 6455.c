void fun()
{
  int entity_2 = 47;
  char entity_1[12] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memset(entity_1, 'J', 12-1);
  entity_1[12-1]='';
  entity_2 = 65;
  memcpy(entity_8, entity_1, 12*sizeof(char));
}