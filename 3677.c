void fun()
{
  int entity_4 = 100;
  char entity_1[88] = "";
  entity_1 = NULL;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(1*sizeof(char));
  entity_3[1-1]='';
  memset(entity_7, 'E', entity_4-1);
  entity_7[entity_4-1]='';
  memset(entity_1, 'b', 88-1);
  entity_1[88-1]='';
  memcpy(entity_3, entity_7, entity_4*sizeof(char));
}