void fun()
{
  int entity_2 = 14;
  char* entity_3;
  char entity_1 = 'H';
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_8;
  entity_3 = (char*)malloc(40*sizeof(char));
  entity_3[40-1]='';
  memset(entity_9, 'V', entity_2-1);
  entity_9[entity_2-1]='';
  entity_8 = (char*)malloc(79*sizeof(char));
  entity_8[79-1]='';
  memcpy(entity_3, entity_9, entity_2*sizeof(char));
}