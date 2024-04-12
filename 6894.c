void fun()
{
  int entity_5 = 39;
  int entity_8 = 25;
  char entity_9 = 'A';
  char* entity_6;
  char entity_3[27] = "";
  entity_3 = NULL;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(12*sizeof(char));
  entity_6[12-1]='';
  memset(entity_1, 'Q', entity_5-1);
  entity_1[entity_5-1]='';
  memset(entity_3, 'y', 27-1);
  entity_3[27-1]='';
  entity_5 = 64;
  memcpy(entity_6, entity_1, entity_5*sizeof(char));
}