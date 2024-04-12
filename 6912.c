void fun()
{
  int entity_4 = 50;
  char entity_1[88] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'b', 88-1);
  entity_1[88-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  entity_4 = 16;
  memcpy(entity_2, entity_1, 88*sizeof(char));
}