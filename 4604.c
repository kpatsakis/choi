void fun()
{
  int entity_3 = 93;
  char* entity_2;
  char entity_4[61] = "";
  entity_4 = NULL;
  char entity_9[34] = "";
  entity_9 = NULL;
  memset(entity_9, 'S', 34-1);
  entity_9[34-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memset(entity_4, 'e', 61-1);
  entity_4[61-1]='';
  entity_3 = 99;
  memcpy(entity_2, entity_4, 61*sizeof(char));
}