void fun()
{
  int entity_4 = 88;
  char* entity_5;
  char entity_3[79] = "";
  entity_3 = NULL;
  char entity_1[99] = "";
  entity_1 = NULL;
  memset(entity_1, 'S', 99-1);
  entity_1[99-1]='';
  memset(entity_3, 'E', 79-1);
  entity_3[79-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memcpy(entity_5, entity_1, 99*sizeof(char));
}