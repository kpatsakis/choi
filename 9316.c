void fun()
{
  int entity_2 = 35;
  char* entity_9;
  char* entity_1;
  char entity_3[86] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[45-1]='';
  memset(entity_3, 'q', 86-1);
  entity_3[86-1]='';
  memcpy(entity_1, entity_3, 86*sizeof(char));
}