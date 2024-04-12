void fun()
{
  int entity_1 = 72;
  entity_1 = 17;
  char* entity_3;
  char* entity_9;
  char entity_4[61] = "";
  entity_4 = NULL;
  memset(entity_4, 'A', 61-1);
  entity_4[61-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  entity_9 = (char*)malloc(99*sizeof(char));
  entity_9[99-1]='';
  memcpy(entity_3, entity_4, 61*sizeof(char));
}